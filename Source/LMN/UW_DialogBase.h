// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UW_Global.h"
#include "UW_DialogBase.generated.h"

class FWidgetAnimationDynamicEvent;

UCLASS(NotBlueprintable, Abstract)
class LMN_API UUW_DialogBase : public UUW_Global
{
    GENERATED_BODY()

protected:
    virtual void NativeConstruct() override;

    UFUNCTION()
    void OnAnimFinished();

    UPROPERTY(meta = (BindWidgetAnim), Transient)
    UWidgetAnimation* DialogAnimation;

    bool bIsAnimating = false;
    bool bIsOpen      = false;

    FWidgetAnimationDynamicEvent FinishDelegate;

public:
    void OpenDialog();
    void CloseDialog();
    void Switch();
};
