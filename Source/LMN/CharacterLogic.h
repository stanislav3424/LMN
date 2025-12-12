// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Logic.h"
#include "CharacterLogic.generated.h"

UENUM(BlueprintType)
enum class EMovementState : uint8
{
    Idle UMETA(DisplayName = "Idle"),
    Walk UMETA(DisplayName = "Walk"),
    Run  UMETA(DisplayName = "Run"),
};

UENUM(BlueprintType)
enum class ETypeMovementState : uint8
{
    Unarmed UMETA(DisplayName = "Unarmed"),
    Rifle   UMETA(DisplayName = "Rifle"),
};

UENUM(BlueprintType)
enum class ETypeAction : uint8
{
    Idle        UMETA(DisplayName = "Idle"),
    Shooting    UMETA(DisplayName = "Shooting"),
    Reloading   UMETA(DisplayName = "Reloading"),
    Interaction UMETA(DisplayName = "Interaction"),
    Equipment   UMETA(DisplayName = "Equipment"),
};

UENUM(BlueprintType)
enum class EEquipmentSlot : uint8
{
    Hands    UMETA(DisplayName = "Hands"),
    Backpack UMETA(DisplayName = "Backpack"),
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnStaminaChanged, float, CurrentStamina, float, MaxStamina);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMovementStateChanged, EMovementState, MovementState);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTypeMovementStateChanged, ETypeMovementState, TypeMovementState);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTypeActionChanged, ETypeAction, TypeAction);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEquipmentChanged);

class UCharacterMovementComponent;
class UEquipmentLogic;

UCLASS()
class LMN_API UCharacterLogic : public ULogic
{
    GENERATED_BODY()

protected:
    virtual void LoadingDataTable() override;

public:
    virtual void Tick(float DeltaTime);

protected:
    virtual void RepresentationChanged();

protected:
    EMovementState     MovementState     = EMovementState::Idle;
    ETypeMovementState TypeMovementState = ETypeMovementState::Unarmed;
    ETypeAction        TypeAction        = ETypeAction::Idle;


    void SetMovementState(EMovementState NewMovementState);
    //void SetTypeMovementState(ETypeMovementState NewTypeMovementState);
    void SetTypeAction(ETypeAction NewTypeAction);

public:
    void CommandShootStarted();
    void CommandShootCompleted();
    void CommandReloadWeapon();
    void CommandReloadWeaponCompleted();
    void CommandTurnTarget(FRotator const& Rotator);
    void CommandMove();
    void CommandMoveCompleted();
    void CommandRun();
    void CommandRunCompleted();

    void ShootCompleted();
    void ReloadCompleted();

public:
    FOnStaminaChanged           OnStaminaChanged;
    FOnMovementStateChanged     OnMovementStateChanged;
    FOnTypeMovementStateChanged OnTypeMovementStateChanged;
    FOnTypeActionChanged        OnTypeActionChanged;
    FOnEquipmentChanged         OnEquipmentChanged;

    // Stamina
protected:
    float MaxStamina       = INDEX_NONE;
    float CurrentStamina   = INDEX_NONE;
    float StaminaDrainRate = INDEX_NONE;
    float StaminaRegenRate = INDEX_NONE;
    float MinStaminaToRun  = INDEX_NONE;
    float MaxWalkSpeed     = INDEX_NONE;
    float MaxRunSpeed      = INDEX_NONE;

    UCharacterMovementComponent* CharacterMovementComponentRef;

    void StaminaTick(float DeltaTime);

    // Equipment
protected:
    UPROPERTY()
    TMap<EEquipmentSlot, UEquipmentLogic*> EquipmentMap;

public:
    bool        EquipItem(ULogicBase* Logic, EEquipmentSlot TargetEquipmentSlot);
    bool        EquipItem(AActor* Actor, EEquipmentSlot TargetEquipmentSlot);
    ULogicBase* TakeOff(EEquipmentSlot TargetEquipmentSlot);
};
