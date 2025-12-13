// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UW_Base.h"
#include "UW_HUD.generated.h"

class UListView;
class APC_Main;

UCLASS(Blueprintable, Abstract)
class LMN_API UUW_HUD : public UUW_Base
{
    GENERATED_BODY()

protected:
    virtual void NativeOnInitialized() override;
    virtual void NativeConstruct() override;

    UPROPERTY()
    APC_Main* PC_Main;

public:
    UFUNCTION()
    void UpdateListView();

protected:
    UPROPERTY(meta = (BindWidget))
    UListView* SelectedListView;
};
