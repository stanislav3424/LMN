// Fill out your copyright notice in the Description page of Project Settings.

#include "LogicBase.h"
#include "LogicInterface.h"
#include "BFL.h"
#include "GI_Main.h"

void ULogicBase::Initialization(FDataTableRowHandle RowHandle)
{
    if (RowHandle.IsNull())
        return;

    LogicRowHandle = RowHandle;
    LoadingDataTable();
    CheckField();
    BeginPlay();
}

void ULogicBase::LoadingDataTable()
{
    if (LogicRowHandle.IsNull())
        return;

    if (auto const* Row = LogicRowHandle.DataTable->FindRow<FLogicBaseRow>(LogicRowHandle.RowName, TEXT("")))
    {
        RepresentationActorClass = Row->RepresentationActorClass;
    }
}

void ULogicBase::CheckField()
{
    CHECK_FIELD(RepresentationActorClass);
}

void ULogicBase::BeginPlay()
{
}

void ULogicBase::Tick(float DeltaTime)
{

}

void ULogicBase::BindEvents()
{
}

void ULogicBase::UnbindEvents()
{
}

void ULogicBase::RepresentationChanged()
{
}

void ULogicBase::SetRepresentationActor(AActor* Actor)
{
    if (!IsValid(Actor) || !Actor->Implements<ULogicInterface>())
        return;

    UnbindEvents();
    DestroyRepresentationActor();
    RepresentationActor = Actor;
    ILogicInterface::Execute_SetLogic(RepresentationActor, this);
    RepresentationChanged();
    BindEvents();
}

void ULogicBase::HardSetRepresentationActor(AActor* Actor)
{
    if (IsValid(Actor) && RepresentationActorClass)
        if (Actor->GetClass() == RepresentationActorClass)
            SetRepresentationActor(Actor);
}

AActor* ULogicBase::GetRepresentationActor() const
{
    return RepresentationActor;
}

void ULogicBase::DestroyRepresentationActor()
{
    if (IsValid(RepresentationActor))
        RepresentationActor->Destroy();
    RepresentationActor = nullptr;
}
