// Fill out your copyright notice in the Description page of Project Settings.

#include "AnimInstanceBase.h"
#include "BFL.h"
#include "CharacterLogic.h"

void UAnimInstanceBase::NativeBeginPlay()
{
    Super::NativeBeginPlay(); 

    Pawn = TryGetPawnOwner();
}

void UAnimInstanceBase::NativeUpdateAnimation(float DeltaSeconds)
{
    Super::NativeUpdateAnimation(DeltaSeconds);
    if (!Logic)
    {
        Logic = UBFL::GetLogic<UCharacterLogic>(TryGetPawnOwner());
        if (Logic)
        {
            Logic->OnMovementStateChanged.AddUniqueDynamic(this, &UAnimInstanceBase::MovementStateChanged);
            Logic->OnTypeMovementStateChanged.AddUniqueDynamic(this, &UAnimInstanceBase::TypeMovementStateChanged);
        }
    }

    if (Pawn)
    {
        Speed    = Pawn->GetVelocity().Size();
        Rotation = Pawn->GetActorRotation().Roll;
    }
}

void UAnimInstanceBase::MovementStateChanged(EMovementState NewMovementState)
{
    MovementState = NewMovementState;
}

void UAnimInstanceBase::TypeMovementStateChanged(ETypeMovementState NewTypeMovementState)
{
    TypeMovementState = NewTypeMovementState;
}