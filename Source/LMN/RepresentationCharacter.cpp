// Fill out your copyright notice in the Description page of Project Settings.

#include "RepresentationCharacter.h"
#include "SceneComponentBase.h"
#include "LogicBase.h"
#include "BFL.h"

void ARepresentationCharacter::BeginPlay()
{
    Super::BeginPlay();

    UBFL::ActorActivation(this);

    if (Logic)
    {
        TArray<UActorComponent*> Components;
        GetComponents(Components);
        for (auto Component : Components)
            if (Component)
                UBFL::SetLogic(Component, Logic);
    }
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
}
