// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GM_Main.generated.h"

class AIconRendering;
class AGlobalVisibility;

UENUM(BlueprintType)
enum class EGameStatus : uint8
{
    NotStarted UMETA(DisplayName = "NotStarted"),
    Started    UMETA(DisplayName = "Started"),
    Ended      UMETA(DisplayName = "Ended"),
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGameStatusChanged, EGameStatus, GameStatus);

UCLASS(Blueprintable, Abstract)
class LMN_API AGM_Main : public AGameModeBase
{
    GENERATED_BODY()

protected:
    void BeginPlay() override;

    UPROPERTY(Transient)
    AIconRendering* IconRendering;

    UPROPERTY(EditDefaultsOnly, Category = "IconRendering")
    TSubclassOf<AIconRendering> IconRenderingClass;

public:
    AIconRendering* GetIconRendering() { return IconRendering; };

    void StartGame();
    void EndGame();
    virtual void OnStartGameGroup();

    //
protected:
    UPROPERTY(Transient)
    AGlobalVisibility* GlobalVisibility;

public:
    AGlobalVisibility* GetGlobalVisibility() { return GlobalVisibility; };

protected:
    UPROPERTY(EditDefaultsOnly, Category = "TypeUnits")
    TArray<FDataTableRowHandle> TypeUnits;

    EGameStatus GameStatus = EGameStatus::NotStarted;

public:
    FOnGameStatusChanged OnGameStatusChanged;
    void                 BroadcastOnGameStatusChanged() const;

protected:
    UPROPERTY(Transient)
    TSet<AActor*> ComplexTriggerBoxSet;

    public:
    TSet<AActor*> const& GetActorsComplexTriggerBox() { return ComplexTriggerBoxSet; }
};
