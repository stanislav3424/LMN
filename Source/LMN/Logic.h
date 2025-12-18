// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LogicBase.h"
#include "Logic.generated.h"

UENUM(BlueprintType)
enum class ETeam : uint8
{
    Neutral UMETA(DisplayName = "Neutral"),
    Player  UMETA(DisplayName = "Player"),
    Enemy   UMETA(DisplayName = "Enemy"),
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHealthChange, float, MaxHealth, float, Current);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDied);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTeamChange, ETeam, Team);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSelectedChange, bool, bIsSelected);

UCLASS()
class LMN_API ULogic : public ULogicBase
{
	GENERATED_BODY()
	
	// Logic
protected:
    virtual void LoadingDataTable() override;
    virtual void BindEvents() override;
    virtual void UnbindEvents() override;

    // Health
protected:
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
    FOnTeamChange OnTeamChange;

    void  BroadcastOnTeamChange() const;
    ETeam GetTeam() const { return Team; };
    void  SetTeam(ETeam NewTeam);

    // Selected
protected:
    bool bIsSelected;

public:
    FOnSelectedChange OnSelectedChange;

    void BroadcastOnSelectedChange() const;
    bool IsSelected() const { return bIsSelected; };
    void SetSelected(bool bNewSelected);
};
