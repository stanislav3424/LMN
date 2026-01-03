// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "LogicInterface.h"
#include "GenericTeamAgentInterface.h"
#include "RepresentationCharacter.generated.h"

UCLASS(Blueprintable, Abstract)
class LMN_API ARepresentationCharacter : public ACharacter, public ILogicInterface, public IGenericTeamAgentInterface
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

    virtual FGenericTeamId GetGenericTeamId() const override;
    virtual void           SetGenericTeamId(const FGenericTeamId& NewTeamId) override;

protected:
    UPROPERTY()
    ULogicBase* Logic;
};
