// Fill out your copyright notice in the Description page of Project Settings.

#include "RepresentationCharacter.h"
#include "SceneComponentBase.h"
#include "LogicBase.h"
#include "BFL.h"
#include "Logic.h"

void ARepresentationCharacter::BeginPlay()
{
    Super::BeginPlay();

    UBFL::ActorActivationLogic(this);
}

void ARepresentationCharacter::Tick(float DeltaSeconds)
{
    Super::Tick(DeltaSeconds);

    if (Logic)
        Logic->Tick(DeltaSeconds);
}

ULogicBase* ARepresentationCharacter::GetLogic_Implementation()
{
    return Logic;
}

void ARepresentationCharacter::SetLogic_Implementation(ULogicBase* NewLogic)
{
    Logic = NewLogic;

    if (Logic)
    {
        TArray<UActorComponent*> Components;
        GetComponents(Components);
        for (auto Component : Components)
            if (Component)
                UBFL::SetLogic(Component, Logic);
    }
}

FGenericTeamId ARepresentationCharacter::GetGenericTeamId() const
{
    if (auto LocalLogic = Cast<ULogic>(Logic))
        return LocalLogic->GetTeamId();
    return FGenericTeamId::NoTeam;
}

void ARepresentationCharacter::SetGenericTeamId(const FGenericTeamId& NewTeamId)
{
    if (auto LocalLogic = Cast<ULogic>(Logic))
        LocalLogic->SetTeamId(NewTeamId);
}
