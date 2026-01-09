// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GM_Main.h"
#include "GM_InsideComplex.generated.h"

class ATriggerBox;
class UEnvQuery;

UCLASS(Blueprintable, Abstract)
class LMN_API AGM_InsideComplex : public AGM_Main
{
    GENERATED_BODY()

protected:
    virtual void BeginPlay() override;

    UPROPERTY(EditDefaultsOnly, Category = "TriggerBoxTag")
    FName InPlayerSpawnTag = TEXT("PlayerSpawn");

    UPROPERTY(Transient)
    ATriggerBox* TunnelTriggerBox;

    UPROPERTY(EditDefaultsOnly, Category = "EQS")
    UEnvQuery* EnvQuery;
};
