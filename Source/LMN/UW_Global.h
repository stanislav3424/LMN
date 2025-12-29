// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UW_Base.h"
#include "UW_Global.generated.h"

class APC_Main;
class AGM_Main;
enum class EGameStatus : uint8;

UCLASS()
class LMN_API UUW_Global : public UUW_Base
{
    GENERATED_BODY()

protected:
    virtual void NativeOnInitialized() override;

    UFUNCTION()
    void OnGameStatusChanged(EGameStatus NewGameStatus);
    virtual void GameStatusChanged();

    UPROPERTY(Transient)
    APC_Main* PC_Main;

    UPROPERTY(Transient)
    AGM_Main* GM_Main;

    EGameStatus GameStatus;
};
