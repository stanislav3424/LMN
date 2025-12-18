// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WidgetComponentBase.h"
#include "ProgressBarWidgetComponent.generated.h"

UCLASS(Blueprintable, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class LMN_API UProgressBarWidgetComponent : public UWidgetComponentBase
{
    GENERATED_BODY()

protected:
    virtual void LogicUpdated() override;
};
