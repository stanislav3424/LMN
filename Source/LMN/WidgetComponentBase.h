// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/WidgetComponent.h"
#include "LogicInterface.h"
#include "WidgetComponentBase.generated.h"

UCLASS(Blueprintable, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class LMN_API UWidgetComponentBase : public UWidgetComponent, public ILogicInterface
{
    GENERATED_BODY()

    // LogicInterface
public:
    virtual ULogicBase* GetLogic_Implementation() override;
    virtual void        SetLogic_Implementation(ULogicBase* NewLogic) override;

protected:
    UPROPERTY()
    ULogicBase* LogicBase;

    virtual void LogicUpdated();
};
