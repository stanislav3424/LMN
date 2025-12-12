// Fill out your copyright notice in the Description page of Project Settings.

#include "RepresentationActor.h"
#include "LogicBase.h"
#include "BFL.h"

void ARepresentationActor::BeginPlay()
{
    Super::BeginPlay();

    UBFL::ActorActivation(this);
}

void ARepresentationActor::Tick(float DeltaSeconds)
{
    Super::Tick(DeltaSeconds);

    if (Logic)
        Logic->Tick(DeltaSeconds);
}

ULogicBase* ARepresentationActor::GetLogic_Implementation()
{
    return Logic;
}

void ARepresentationActor::SetLogic_Implementation(ULogicBase* NewLogic)
{
    Logic = NewLogic;
}
