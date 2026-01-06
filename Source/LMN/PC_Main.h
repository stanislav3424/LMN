// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PC_Main.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnActorsSelectedChange);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTypeAIActionChange, ETypeAIAction const&, TypeAIAction);

class UInputMappingContext;
class UInputAction;
class AHUD_Main;

struct FInputActionValue;

enum class ETypeAIAction : uint8;

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

    void UpdateActorsSelected(TArray<AActor*> const& NewActorsSelected);

    TSet<AActor*> const& GetActorsSelected() const { return ActorsSelected; }
    TSet<AActor*> const& GetAddActorsSelected() const { return AddActorsSelected; }
    TSet<AActor*> const& GetRemoveActorsSelected() const { return RemoveActorsSelected; }

protected:
    UPROPERTY(EditDefaultsOnly, Category = "Input")
    UInputMappingContext* DefaultInputMappingContext;

    UPROPERTY(EditDefaultsOnly, Category = "Input")
    UInputAction* LeftClickInputAction;

    UPROPERTY(EditDefaultsOnly, Category = "Input")
    UInputAction* RightClickInputAction;

    UPROPERTY(EditDefaultsOnly, Category = "Input")
    UInputMappingContext* AIActionInputMappingContext;

    UPROPERTY(EditDefaultsOnly, Category = "Input")
    UInputAction* AIMoveToInputAction;

    UPROPERTY(EditDefaultsOnly, Category = "Input")
    UInputAction* AIAssaultInputAction;

    UPROPERTY(EditDefaultsOnly, Category = "Input")
    UInputAction* AIFootholdPositionInputAction;

protected:
    void OnLeftPressed(FInputActionValue const& Value);
    void OnLeftReleased(FInputActionValue const& Value);
    void OnRightPressed(FInputActionValue const& Value);
    void CommandAllLocation(ETypeAIAction const& CommandTypeAIAction);
    void CommandAll(ETypeAIAction const& CommandTypeAIAction, FVector const& Location);
    void OnRightReleased(FInputActionValue const& Value);
    void OnAIMoveToPressed(FInputActionValue const& Value);
    void OnAIAssaultPressed(FInputActionValue const& Value);
    void OnAIFootholdPositionPressed(FInputActionValue const& Value);

    bool      bLeftDown            = false;
    bool      bRightDown           = false;
    bool      bIsDraggingSelection = false;
    FVector2D MouseDownPosition    = FVector2D::ZeroVector;
    float     DragThreshold        = 3.0f;

protected:
    ETypeAIAction TypeAIAction;

public:
    void                  SetTypeAIAction(ETypeAIAction const& NewTypeAIAction);
    FOnTypeAIActionChange OnTypeAIActionChange;
    void                  BroadcastOnTypeAIActionChange() const;
};
