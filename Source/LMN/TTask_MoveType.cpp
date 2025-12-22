// Fill out your copyright notice in the Description page of Project Settings.

#include "TTask_MoveType.h"
#include "CharacterLogic.h"
#include "AIController.h"
#include "BFL.h"

EBTNodeResult::Type UTTask_MoveType::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
    bNotifyTick = true;
    if (auto AIController = OwnerComp.GetAIOwner())
        Logic = UBFL::GetLogic<UCharacterLogic>(AIController->GetPawn());
    CHECK_FIELD(Logic);

    return Super::ExecuteTask(OwnerComp, NodeMemory);
}

void UTTask_MoveType::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
    Super::TickTask(OwnerComp, NodeMemory, DeltaSeconds);

    if (bCanRun.GetValue(OwnerComp) && Logic)
        Logic->SetCanRan(true);

}

EBTNodeResult::Type UTTask_MoveType::AbortTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
    if (bCanRun.GetValue(OwnerComp) && Logic)
        Logic->SetCanRan(false);

    return Super::AbortTask(OwnerComp, NodeMemory);
}

void UTTask_MoveType::OnTaskFinished(
    UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, EBTNodeResult::Type TaskResult)
{
    if (bCanRun.GetValue(OwnerComp) && Logic)
        Logic->SetCanRan(false);

    Super::OnTaskFinished(OwnerComp, NodeMemory, TaskResult);
}
