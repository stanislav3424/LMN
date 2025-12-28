// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UW_DialogBase.h"
#include "UW_DialogSelection.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnResultClick, bool, bIsAccept);

class UButton;

UCLASS(Blueprintable, Abstract)
class LMN_API UUW_DialogSelection : public UUW_DialogBase
{
    GENERATED_BODY()

protected:
    virtual void NativeConstruct() override;

    UPROPERTY(meta = (BindWidget))
    UButton* AcceptButton;

    UPROPERTY(meta = (BindWidget))
    UButton* CancelButton;

    UFUNCTION()
    void OnAcceptButtonClicked();

    UFUNCTION()
    void OnCancelButtonClicked();

public:
    FOnResultClick OnResultClick;
};
