// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EquipmentLogic.h"
#include "WeaponLogic.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAmmoChanged, int32, CurrentAmmo, int32, MaxAmmo);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAmmoEmpty);

enum class EEquipmentSlot : uint8;

UENUM(BlueprintType)
enum class EGanSlot : uint8
{
    Muzzle UMETA(DisplayName = "Muzzle"),
};

UENUM(BlueprintType)
enum class EWeaponState : uint8
{
    Idle      UMETA(DisplayName = "Idle"),
    Shooting  UMETA(DisplayName = "Shooting"),
    Reloading UMETA(DisplayName = "Reloading")
};

class UNiagaraSystem;
class ACharacter;
class UAnimMontage;

UCLASS(Blueprintable)
class LMN_API UWeaponLogic : public UEquipmentLogic
{
    GENERATED_BODY()

protected:
    virtual void LoadingDataTable() override;
    virtual void Tick(float DeltaTime) override;
    virtual void EndPlay() override;
    virtual void OwnerLogicChanged() override;

    UPROPERTY(Transient)
    ACharacter* AttachmentParentCharacter;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Animation")
    UAnimMontage* ShootAnimMontage;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Animation")
    UAnimMontage* ReloadAnimMontage;

    UPROPERTY(BlueprintReadOnly, Category = "FX")
    UNiagaraSystem* BulletEffect;

    EWeaponState CurrentWeaponState;
    bool         bIsInputBlocked;

    FOnAmmoChanged OnAmmoChanged;
    FOnAmmoEmpty   OnAmmoEmpty;

public:
    void BroadcastOnAmmoChanged();
    void BroadcastOnAmmoEmpty();

    EWeaponState GetWeaponState() const { return CurrentWeaponState; }
    bool GetIsInputBlocked() const { return bIsInputBlocked; }

public:
    bool           ShootStarted();
    bool           ShootCompleted();
    bool           CanShoot() const;

protected:
    void           PerformShoot();
    void           PlayShootAnimation();
    void           SpawnBulletEffect(FVector const& StartLocation, FVector const& EndLocation);
    void           CalculateShotDirection(FVector& StartLocation, FVector& EndLocation);
    bool           PerformLineTrace(FVector const& StartLocation, FVector const& EndLocation, FHitResult& OutHit);
    void           ApplyDamage(FHitResult const& Hit, FVector const& Start, FVector const& End);
    void           HandleAmmo();

public:
    bool           ReloadWeapon();
    int32          GetCurrentAmmo() const { return CurrentAmmo; }
    int32          GetMaxAmmo() const { return MaxAmmo; }
    bool           IsShooting() const { return CurrentWeaponState == EWeaponState::Shooting; }

protected:
    bool CanReload() const;
    void StartReload();
    void FinishReload();
    void CancelReload();
    void ShootTimerElapsed();
    void StopShooting();

    FTimerHandle   ShootTimerHandle;
    FTimerHandle   ReloadTimerHandle;
    int32          MaxAmmo         = INDEX_NONE;
    int32          CurrentAmmo     = INDEX_NONE;
    float          RateFire        = INDEX_NONE;
    float          Damage          = INDEX_NONE;
    float          MOARadians      = INDEX_NONE;
};