// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UW_Base.h"
#include "UW_DialogBase.generated.h"


class FWidgetAnimationDynamicEvent;

UCLASS(NotBlueprintable, Abstract)
class LMN_API UUW_DialogBase : public UUW_Base
{
    GENERATED_BODY()

protected:
    virtual void NativeConstruct() override;

    virtual void OpenDialog();
    virtual void CloseDialog();

    UFUNCTION()
    void OnAnimFinished();

    void OnOpened();
    void OnClosed();

    UPROPERTY(meta = (BindWidgetAnim), Transient) 
    UWidgetAnimation* DialogAnimation;

    bool bIsAnimating        = false;
    bool bLastPlayWasReverse = false;

    FWidgetAnimationDynamicEvent FinishDelegate;
};
