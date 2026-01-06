// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UW_Global.h"
#include "UW_HUD.generated.h"

class UListView;
class APC_Main;
class AGM_Main;
class UButton;
class UTextBlock;
class UUserWidget;
class UUW_DialogBase;

enum class ETypeAIAction : uint8;

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

    UPROPERTY(meta = (BindWidget))
    UButton* AIMoveToButton;

    UPROPERTY(meta = (BindWidget))
    UButton* AIAssaultButton;

    UPROPERTY(meta = (BindWidget))
    UButton* AIFootholdPositionButton;

    UPROPERTY(meta = (BindWidget))
    UButton* AICancelLogicButton;

    UFUNCTION()
    void OnMenuButtonClicked();

    UFUNCTION()
    void OnAIMoveToButtonClicked();

    UFUNCTION()
    void OnAIAssaultButtonClicked();

    UFUNCTION()
    void OnAIFootholdPositionButtonClicked();

    UFUNCTION()
    void OnAICancelLogicButtonClicked();

    UPROPERTY(EditDefaultsOnly, Category = "UMG")
    TSubclassOf<UUserWidget> MenuUserWidgetClass;

    UPROPERTY(Transient)
    UUW_DialogBase* MenuUserWidget;

    UPROPERTY(meta = (BindWidget)) 
    UTextBlock* TypeAIActionTextBlock;

    virtual void GameStatusChanged() override;

    UFUNCTION()
    void TypeAIActionChange(ETypeAIAction const& NewTypeAIAction);
};
