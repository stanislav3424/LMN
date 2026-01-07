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

void USC_Selected::LogicUpdated()
{
    if (LogicBase)
        if (auto Logic = Cast<ULogic>(LogicBase))
        {
            Logic->OnSelectedChange.AddUniqueDynamic(this, &USC_Selected::SelectedChange);
            Logic->BroadcastOnSelectedChange();
            Logic->OnTeamChange.AddUniqueDynamic(this, &USC_Selected::TeamChange);
            Logic->BroadcastOnTeamChange();
        }

    if (SelectionMesh)
        MID = SelectionMesh->CreateAndSetMaterialInstanceDynamic(0);
}

void USC_Selected::SelectedChange(bool bNewSelected)
{
    bIsSelected = bNewSelected;
    SetMID();
}

void USC_Selected::TeamChange(ETeam NewTeam)
{
    Team = NewTeam;
    SetMID();
}

void USC_Selected::SetMID()
{
    if (!MID)
        return;
    MID->SetScalarParameterValue(SelectedParameter, bIsSelected ? 1.0f : 0.0f);
    FVector4 Color = FVector4(0.f, 0.f, 0.f, 0.f);
    switch (Team)
    {
        case ETeam::Neutral:
            Color = FVector4(0.f, 0.f, 0.f, 0.f);
            break;
        case ETeam::Player:
            Color = FVector4(0.f, 0.f, 1.f, 0.f);
            break;
        case ETeam::Enemy:
            Color = FVector4(1.f, 0.f, 0.f, 0.f);
            break;
        default:
            break;
    }
    MID->SetVectorParameterValue(ColorParameter, Color);
}
