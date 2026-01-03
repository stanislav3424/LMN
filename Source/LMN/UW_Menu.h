// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UW_Dialog.h"
#include "UW_Menu.generated.h"

class UButton;

UCLASS(Blueprintable, Abstract)
class LMN_API UUW_Menu : public UUW_Dialog
{
    GENERATED_BODY()

protected:
    virtual void NativeOnInitialized() override;
    virtual void GameStatusChanged() override;

    UPROPERTY(meta = (BindWidget))
    UButton* StartButton;

    UPROPERTY(meta = (BindWidget))
    UButton* RestartButton;

    UPROPERTY(meta = (BindWidget))
    UButton* SettingButton;

    UPROPERTY(meta = (BindWidget))
    UButton* QuitGameButton;

    UFUNCTION()
    void OnStartButtonClicked();

    UFUNCTION()
    void OnRestartButtonClicked();

    UFUNCTION()
    void OnSettingButtonClicked();

    UFUNCTION()
    void OnQuitGameButtonClicked();
};
