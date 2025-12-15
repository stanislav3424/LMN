// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UW_Base.h"
#include "UW_ProgressBar.generated.h"

class UProgressBar;

UCLASS(NotBlueprintable, Abstract)
class LMN_API UUW_ProgressBar : public UUW_Base
{
    GENERATED_BODY()

protected:
    virtual void NativeConstruct() override;

    UPROPERTY(meta = (BindWidget))
    UProgressBar* ProgressBar;

    UFUNCTION()
    void SetPercent(float Current, float Max);

};
