// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "CameraPawn.generated.h"

class USpringArmComponent;
class UCameraComponent;
class UInputMappingContext;
class UInputAction;
class UFloatingPawnMovement;

struct FInputActionValue;

UCLASS()
class LMN_API ACameraPawn : public APawn
{
    GENERATED_BODY()

public:
    ACameraPawn();

protected:
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

    UPROPERTY(VisibleAnywhere)
    USceneComponent* Root;

    UPROPERTY(VisibleAnywhere)
    USpringArmComponent* SpringArm;

    UPROPERTY(VisibleAnywhere)
    UCameraComponent* Camera;

    UPROPERTY(VisibleAnywhere)
    UFloatingPawnMovement* MovementComponent;

    UPROPERTY(EditDefaultsOnly, Category = "Input")
    UInputMappingContext* InputMappingContext;

    UPROPERTY(EditDefaultsOnly, Category = "Input")
    UInputAction* MoveInputAction;

    UPROPERTY(EditDefaultsOnly, Category = "Input")
    UInputAction* RotateInputAction;

    UPROPERTY(EditDefaultsOnly, Category = "Input")
    UInputAction* ZoomInputAction;

    UPROPERTY(EditDefaultsOnly, Category = "Camera")
    float MoveSpeed = 2000.f;

    UPROPERTY(EditDefaultsOnly, Category = "Camera")
    float RotateSpeed = 120.f;

    UPROPERTY(EditDefaultsOnly, Category = "Camera")
    float ZoomSpeed = 2000.f;

    UPROPERTY(EditDefaultsOnly, Category = "Camera")
    float ZoomMin = 300.f;

    UPROPERTY(EditDefaultsOnly, Category = "Camera")
    float ZoomMax = 3000.f;

    UPROPERTY(EditDefaultsOnly, Category = "Camera")
    float PositionSmooth = 12.f;

    UPROPERTY(EditDefaultsOnly, Category = "Camera")
    float ZoomSmooth = 10.f;

    UPROPERTY(EditDefaultsOnly, Category = "Camera")
    FVector2D WorldBoundsMin = FVector2D(-10000.f, -10000.f);

    UPROPERTY(EditDefaultsOnly, Category = "Camera")
    FVector2D WorldBoundsMax = FVector2D(10000.f, 10000.f);

    FVector TargetLocation;
    float   TargetArmLength;
    float   TargetYaw;

    void OnMove(const struct FInputActionValue& Value);
    void OnMoveEnd(const struct FInputActionValue& Value);
    void OnRotate(const struct FInputActionValue& Value);
    void OnRotateEnd(const struct FInputActionValue& Value);
    void OnZoom(const struct FInputActionValue& Value);
    void OnZoomEnd(const struct FInputActionValue& Value);

    FVector2D PendingMoveInput   = FVector2D::ZeroVector;
    float     PendingRotateInput = 0.f;
    float     PendingZoomInput   = 0.f;
};