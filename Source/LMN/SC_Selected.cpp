// Fill out your copyright notice in the Description page of Project Settings.

#include "SC_Selected.h"
#include "Logic.h"
#include "BFL.h"

void USC_Selected::BeginPlay()
{
    Super::BeginPlay();

}

void USC_Selected::OnRegister()
{
    Super::OnRegister();

    auto Owner = GetOwner();
    if (!Owner)
        return;

    if (!SelectionMesh)
    {
        SelectionMesh = NewObject<UStaticMeshComponent>(Owner, TEXT("SelectionMesh"));
        if (SelectionMesh)
        {
            SelectionMesh->AttachToComponent(this, FAttachmentTransformRules::KeepRelativeTransform);
            SelectionMesh->RegisterComponent();
            SelectionMesh->SetMobility(EComponentMobility::Movable);
            SelectionMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
            if (DefaultMesh)
                SelectionMesh->SetStaticMesh(DefaultMesh);
        }
    }
}

void USC_Selected::OnUnregister()
{
    if (SelectionMesh)
    {
        SelectionMesh->DestroyComponent();
        SelectionMesh = nullptr;
    }
    Super::OnUnregister();
}

void USC_Selected::ObjectUpdated()
{
    if (Object)
        if (auto Logic = Cast<ULogic>(Object))
        {
            Logic->OnSelectedChange.AddUniqueDynamic(this, &USC_Selected::SelectedChange);
            Logic->BroadcastOnSelectedChange();
        }

    if (SelectionMesh)
        MID = SelectionMesh->CreateAndSetMaterialInstanceDynamic(0);
}

void USC_Selected::SelectedChange(bool Selected)
{
    if (SelectionMesh)
        SelectionMesh->SetVisibility(Selected);
    //if (MID)MID->SetScalarParameterValue(SelectedParameter, Selected ? 1.0f : 0.0f);
}
