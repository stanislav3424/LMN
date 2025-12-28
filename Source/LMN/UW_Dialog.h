// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UW_DialogBase.h"
#include "UW_Dialog.generated.h"

class UButton;

UCLASS(Blueprintable, Abstract)
class LMN_API UUW_Dialog : public UUW_DialogBase
{
    GENERATED_BODY()

protected:
    virtual void NativeConstruct() override;

    UPROPERTY(meta = (BindWidget))
    UButton* CloseButton;

    UFUNCTION()
    void OnCloseButtonClicked();
};
