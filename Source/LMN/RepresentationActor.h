// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LogicInterface.h"
#include "RepresentationActor.generated.h"

UCLASS(Blueprintable, Abstract)
class LMN_API ARepresentationActor : public AActor, public ILogicInterface
{
    GENERATED_BODY()

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaSeconds) override;

    // LogicInterface
public:
    virtual ULogicBase* GetLogic_Implementation() override;
    virtual void        SetLogic_Implementation(ULogicBase* NewLogic) override;

protected:
    UPROPERTY()
    ULogicBase* Logic;
};
