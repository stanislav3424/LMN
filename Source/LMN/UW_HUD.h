// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UW_Global.h"
#include "UW_HUD.generated.h"

class UListView;
class APC_Main;
class AGM_Main;
class UButton;
class UUserWidget;
class UUW_DialogBase;

UCLASS(Blueprintable, Abstract)
class LMN_API UUW_HUD : public UUW_Global
{
    GENERATED_BODY()

protected:
    virtual void NativeOnInitialized() override;

public:
    UFUNCTION()
    void UpdateListView();

protected:
    UPROPERTY(meta = (BindWidget))
    UListView* SelectedListView;

    UPROPERTY(meta = (BindWidget))
    UButton* MenuButton;

    UFUNCTION()
    void OnMenuButtonClicked();


    UPROPERTY(EditDefaultsOnly, Category = "UMG")
    TSubclassOf<UUserWidget> MenuUserWidgetClass;

    UPROPERTY(Transient)
    UUW_DialogBase* MenuUserWidget;

    virtual void GameStatusChanged() override;
};
