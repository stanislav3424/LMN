// Fill out your copyright notice in the Description page of Project Settings.

#include "RepresentationCharacter.h"
#include "LogicBase.h"
#include "BFL.h"

void ARepresentationCharacter::BeginPlay()
{
    Super::BeginPlay();

    UBFL::ActorActivation(this);
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
