// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LogicBase.h"
#include "Logic.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHealthChange, float, MaxHealth, float, Current);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDied);

UENUM(BlueprintType)
enum class ETeam : uint8
{
    Neutral UMETA(DisplayName = "Neutral"),
    Player  UMETA(DisplayName = "Player"),
    Enemy   UMETA(DisplayName = "Enemy"),
};

UCLASS()
class LMN_API ULogic : public ULogicBase
{
	GENERATED_BODY()
	
	// Logic
protected:
    virtual void LoadingDataTable() override;
    virtual void BindEvents() override;
    virtual void UnbindEvents() override;

    UFUNCTION()
    void HandleOwnerDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType,
        AController* InstigatedBy, AActor* DamageCauser);

protected:
    bool  bCanTakeDamage;
    float MaxHealth = INDEX_NONE;
    float CurrentHealth = INDEX_NONE;

    virtual void DamageProcess(float Damage);
    virtual void Died();

public:
    FOnHealthChange OnHealthChange;
    FOnDied         OnDied;

    void BroadcastOnHealthChange() const;

    // Team
protected:
    ETeam Team = ETeam::Neutral;

public:
    ETeam GetTeam() const { return Team; };
    void  SetTeam(ETeam NewTeam) { Team = NewTeam; };
};
