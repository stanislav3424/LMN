// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_MoveTo.h"
#include "TTask_MoveType.generated.h"

class UCharacterLogic;

UCLASS()
class LMN_API UTTask_MoveType : public UBTTask_MoveTo
{
    GENERATED_BODY()

protected:
    UPROPERTY(Category = Node, EditAnywhere, DisplayName = "Can Run")
    FValueOrBBKey_Bool bCanRun;

    virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
    virtual void TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
    virtual EBTNodeResult::Type AbortTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
    virtual void                OnTaskFinished(
                       UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, EBTNodeResult::Type TaskResult) override;

    UPROPERTY(Transient)
    UCharacterLogic* Logic;
};
