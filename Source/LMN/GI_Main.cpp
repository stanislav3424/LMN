// Fill out your copyright notice in the Description page of Project Settings.

#include "GI_Main.h"
#include "BFL.h"

void UGI_Main::Init()
{
    Super::Init();

    DataTablesCacheByRowName.Empty();
    RowHandlesCacheByActorClass.Empty();

    for (auto Table : DataTables)
    {
        if (!IsValid(Table))
            continue;

        auto RowNames = Table->GetRowNames();

        for (auto const& RowName : RowNames)
        {
            if (RowName.IsNone())
                continue;

            if (DataTablesCacheByRowName.Contains(RowName))
            {
                UE_LOG(LMN, Error, TEXT("Duplicate DataTable row name '%s' found in table '%s' and '%s'"),
                    *RowName.ToString(), *GetNameSafe(DataTablesCacheByRowName[RowName]), *GetNameSafe(Table));
                continue;
            }

            DataTablesCacheByRowName.Add(RowName, Table);

            auto const* Row = Table->FindRow<FLogicBaseRow>(RowName, TEXT(""));
            if (!Row)
            {
                UE_LOG(LMN, Warning, TEXT("Row '%s' in table '%s' could not be read as FBaseItemRow"),
                    *RowName.ToString(), *GetNameSafe(Table));
                continue;
            }

            if (Row->RepresentationActorClass)
            {

                if (auto ExistingHandle = RowHandlesCacheByActorClass.Find(Row->RepresentationActorClass))
                {
                    UE_LOG(LMN, Error,
                        TEXT("Duplicate RepresentationActorClass '%s' used by rows '%s' and '%s' (tables: '%s' "
                             "and '%s')"),
                        *Row->RepresentationActorClass.Get()->GetName(), *ExistingHandle->RowName.ToString(),
                        *RowName.ToString(), *GetNameSafe(ExistingHandle->DataTable), *GetNameSafe(Table));
                    continue;
                }
                else
                {
                    FDataTableRowHandle Handle;
                    Handle.DataTable = Table;
                    Handle.RowName   = RowName;
                    RowHandlesCacheByActorClass.Add(Row->RepresentationActorClass, Handle);
                }
            }
            else
            {
                UE_LOG(LMN, Verbose, TEXT("Row '%s' in table '%s' has no RepresentationActorClass set"),
                    *RowName.ToString(), *GetNameSafe(Table));
            }
        }
    }
}

FDataTableRowHandle UGI_Main::GetRowHandleByRowName(FName RowName)
{
    FDataTableRowHandle RowHandle;
    if (!RowName.IsNone())
        if (auto Valid = DataTablesCacheByRowName.Find(RowName))
        {
            RowHandle.RowName   = RowName;
            RowHandle.DataTable = *Valid;
        }
    return RowHandle;
}

//TSubclassOf<ULogicBase> UGI_Main::GetLogicClassByActorClass(AActor* Actor)
//{
//    if (Actor)
//    {
//        auto RowHandle = GetRowHandleByActorClass(Actor);
//        if (!RowHandle.IsNull())
//            if (auto const* Row = RowHandle.DataTable->FindRow<FBaseItemRow>(RowHandle.RowName, TEXT("")))
//                return Row->LogicClass;
//    }
//    return TSubclassOf<ULogicBase>();
//}

FDataTableRowHandle UGI_Main::GetRowHandleByActorClass(AActor* Actor)
{
    if (IsValid(Actor))
        if (auto Valid = RowHandlesCacheByActorClass.Find(Actor->GetClass()))
            return *Valid;
    return FDataTableRowHandle();
}

ULogicBase* UGI_Main::CreateLogicByRowHandle(FDataTableRowHandle RowHandle)
{
    if (!RowHandle.IsNull())
        if (auto const* Row = RowHandle.DataTable->FindRow<FLogicBaseRow>(RowHandle.RowName, TEXT("")))
            if (auto Logic = NewObject<ULogicBase>(GetWorld(), Row->RepresentationActorClass, RowHandle.RowName))
            {
                Logic->Initialization(RowHandle);
                return Logic;
            }

    return nullptr;
}

void UGI_Main::ActorActivation(AActor* Actor)
{
    if (IsValid(Actor))
        if (auto LogicClass = CreateLogicByRowHandle(GetRowHandleByActorClass(Actor)))
            LogicClass->HardSetRepresentationActor(Actor);
}