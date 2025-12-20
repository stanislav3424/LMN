// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DetourCrowdAIController.h"
#include "AIControllerBase.generated.h"

UENUM(BlueprintType)
enum class ETypeAIAction : uint8
{
    MoveTo           UMETA(DisplayName = "MoveTo"),
    Assault          UMETA(DisplayName = "Assault"),
    FootholdPosition UMETA(DisplayName = "FootholdPosition"),
};

UCLASS()
class LMN_API AAIControllerBase : public ADetourCrowdAIController
{
    GENERATED_BODY()

public:

protected:
    virtual void OnPossess(APawn* InPawn) override;
    virtual void OnUnPossess() override;

    UPROPERTY(EditDefaultsOnly, Category = "AI")
    UBehaviorTree* BehaviorTreeAsset;

    UPROPERTY(Transient)
    UBlackboardComponent* BlackboardComponent;

    //
public:
    void Command(ETypeAIAction TypeAIAction, FVector TargetLocation);
    void CancelingAllCommands();

protected:
    void SetManualControl(bool bIsManualControl);
};
