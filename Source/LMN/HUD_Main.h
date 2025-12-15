// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "HUD_Main.generated.h"

class APC_Main;
class UUW_HUD;

UCLASS(Blueprintable, Abstract)
class LMN_API AHUD_Main : public AHUD
{
    GENERATED_BODY()

public:
    virtual void BeginPlay() override;
    virtual void DrawHUD() override;

    void StartSelection();
    void EndSelection();

protected:
    UPROPERTY()
    APC_Main* PlayerControllerRef;

    bool      bIsSelecting        = false;
    FVector   SelectionStartWorld = FVector::ZeroVector;
    FVector2D ScreenStart         = FVector2D::ZeroVector;
    FVector2D ScreenCurrent       = FVector2D::ZeroVector;

    UPROPERTY(EditAnywhere, Category = "Border")
    FLinearColor FillColor = FLinearColor(0.6f, 0.85f, 1.0f, 0.2f);

    UPROPERTY(EditAnywhere, Category = "Border")
    FLinearColor BorderColor = FLinearColor(0.0f, 0.45f, 0.9f, 0.5f);

    UPROPERTY(EditAnywhere, Category = "Border")
    float LineThickness = 1.f;

    UPROPERTY(EditDefaultsOnly, Category = "UMG")
    TSubclassOf<UUW_HUD> UW_HUD_Class;

};
