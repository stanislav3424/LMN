// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PC_Main.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnActorsSelectedChange);

class UInputMappingContext;
class UInputAction;
class AHUD_Main;

struct FInputActionValue;

UCLASS(Blueprintable, Abstract)
class LMN_API APC_Main : public APlayerController
{
    GENERATED_BODY()

public:
    APC_Main();

protected:
    virtual void BeginPlay() override;

public:
    virtual void SetupInputComponent() override;
    virtual void Tick(float DeltaSeconds) override;

protected:
    UPROPERTY(Transient)
    AHUD_Main* HUD_Main;

    UPROPERTY(Transient)
    TSet<AActor*> ActorsSelected;

    UPROPERTY(Transient)
    TSet<AActor*> AddActorsSelected;

    UPROPERTY(Transient)
    TSet<AActor*> RemoveActorsSelected;

public:
    FOnActorsSelectedChange OnActorsSelectedChange;

    void UpdateActorsSelected(const TArray<AActor*>& NewActorsSelected);

    const TSet<AActor*>& GetActorsSelected() const { return ActorsSelected; }
    const TSet<AActor*>& GetAddActorsSelected() const { return AddActorsSelected; }
    const TSet<AActor*>& GetRemoveActorsSelected() const { return RemoveActorsSelected; }

protected:
    UPROPERTY(EditDefaultsOnly, Category = "Input")
    UInputMappingContext* DefaultInputMappingContext;

    UPROPERTY(EditDefaultsOnly, Category = "Input")
    UInputAction* LeftClickInputAction;

    UPROPERTY(EditDefaultsOnly, Category = "Input")
    UInputAction* RightClickInputAction;

private:
    void OnLeftPressed(const FInputActionValue& Value);
    void OnLeftReleased(const FInputActionValue& Value);
    void OnRightPressed(const FInputActionValue& Value);
    void OnRightReleased(const FInputActionValue& Value);

    bool      bLeftDown            = false;
    bool      bRightDown           = false;
    bool      bIsDraggingSelection = false;
    FVector2D MouseDownPosition    = FVector2D::ZeroVector;
    float     DragThreshold        = 3.0f;
};
