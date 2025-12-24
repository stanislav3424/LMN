// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GM_Main.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnStartGame);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEndGame);

class AIconRendering;
class AGlobalVisibility;

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

protected:
    FOnStartGame OnStartGame;
    FOnEndGame   OnEndGame;

    //
protected:
    UPROPERTY(Transient)
    AGlobalVisibility* GlobalVisibility;

public:
    AGlobalVisibility* GetGlobalVisibility() { return GlobalVisibility; };
};
