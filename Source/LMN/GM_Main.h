// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GM_Main.generated.h"

class AIconRendering;

UCLASS()
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
};
