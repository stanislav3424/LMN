// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "LogicInterface.h"
#include "SceneComponentBase.generated.h"

class ULogicBase;

UCLASS(NotBlueprintable, Abstract)
class LMN_API USceneComponentBase : public USceneComponent, public ILogicInterface
{
	GENERATED_BODY()

public:	
	USceneComponentBase();

protected:
	virtual void BeginPlay() override;

public:
    virtual void TickComponent(
        float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

protected:
    UPROPERTY()
    ULogicBase* LogicBase;

    virtual void LogicUpdated() {};

    // LogicInterface
public:
    virtual ULogicBase* GetLogic_Implementation() override;
    virtual void        SetLogic_Implementation(ULogicBase* NewLogic) override;
};
