// Fill out your copyright notice in the Description page of Project Settings.

#include "AnimInstanceBase.h"
#include "BFL.h"
#include "CharacterLogic.h"

void UAnimInstanceBase::NativeBeginPlay()
{
    Super::NativeBeginPlay(); 
}

void UAnimInstanceBase::NativeUpdateAnimation(float DeltaSeconds)
{
    Super::NativeUpdateAnimation(DeltaSeconds);
    if (!Logic)
    {
        Logic = Cast<UCharacterLogic>(UBFL::GetLogic(TryGetPawnOwner()));
        if (Logic)
        {
            Logic->OnMovementStateChanged.AddUniqueDynamic(this, &UAnimInstanceBase::MovementStateChanged);
            Logic->OnTypeMovementStateChanged.AddUniqueDynamic(this, &UAnimInstanceBase::TypeMovementStateChanged);
        }
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