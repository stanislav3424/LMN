// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UW_ProgressBar.h"
#include "UW_HealthProgressBar.generated.h"

UCLASS(Blueprintable, Abstract)
class LMN_API UUW_HealthProgressBar : public UUW_ProgressBar
{
    GENERATED_BODY()

protected:
    virtual void NativeConstruct() override;
};
