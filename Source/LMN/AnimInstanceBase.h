// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "AnimInstanceBase.generated.h"

enum class EMovementState : uint8;
enum class ETypeMovementState : uint8;
class UCharacterLogic;

UCLASS()
class LMN_API UAnimInstanceBase : public UAnimInstance
{
    GENERATED_BODY()

protected:
    virtual void NativeBeginPlay() override;
    virtual void NativeUpdateAnimation(float DeltaSeconds) override;

    UFUNCTION()
    void MovementStateChanged(EMovementState NewMovementState);

    UFUNCTION()
    void TypeMovementStateChanged(ETypeMovementState NewTypeMovementState);

    UPROPERTY(BlueprintReadOnly, Category = "State")
    EMovementState MovementState;

    UPROPERTY(BlueprintReadOnly, Category = "State")
    ETypeMovementState TypeMovementState;

    UPROPERTY(Transient)
    UCharacterLogic* Logic;

    UPROPERTY(Transient)
    APawn* Pawn;

    UPROPERTY(BlueprintReadOnly, Category = "State")
    float Speed;

    UPROPERTY(BlueprintReadOnly, Category = "State")
    float Rotation;
};
