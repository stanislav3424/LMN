// Fill out your copyright notice in the Description page of Project Settings.

#include "RepresentationPawn.h"
#include "SceneComponentBase.h"
#include "LogicBase.h"
#include "BFL.h"

void ARepresentationPawn::BeginPlay()
{
    Super::BeginPlay();

    UBFL::ActorActivation(this);

    if (Logic)
    {
        TArray<USceneComponentBase*> Components;
        GetComponents<USceneComponentBase>(Components);
        for (auto Component : Components)
            if (Component)
                Component->SetObject(Logic);
    }
}

void ARepresentationPawn::Tick(float DeltaSeconds)
{
    Super::Tick(DeltaSeconds);

    if (Logic)
        Logic->Tick(DeltaSeconds);
}

ULogicBase* ARepresentationPawn::GetLogic_Implementation()
{
    return Logic;
}

void ARepresentationPawn::SetLogic_Implementation(ULogicBase* NewLogic)
{
    Logic = NewLogic;
}
