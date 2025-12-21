// Fill out your copyright notice in the Description page of Project Settings.

#include "AIControllerBase.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"

void AAIControllerBase::OnPossess(APawn* InPawn)
{
    Super::OnPossess(InPawn);

    if (!InPawn || !BehaviorTreeAsset)
        return;

    RunBehaviorTree(BehaviorTreeAsset);
    if (!BlackboardComponent && BehaviorTreeAsset->BlackboardAsset)
        UseBlackboard(BehaviorTreeAsset->BlackboardAsset, BlackboardComponent);
}

void AAIControllerBase::OnUnPossess()
{
    Super::OnUnPossess();
    //MoveToLocation();
}

void AAIControllerBase::Command(ETypeAIAction TypeAIAction, FVector TargetLocation)
{
    SetManualControl(true);
    if (BlackboardComponent)
    {
        BlackboardComponent->SetValueAsVector(TEXT("TargetLocation"), TargetLocation);
        BlackboardComponent->SetValueAsEnum(TEXT("TypeAIAction"), static_cast<uint8>(TypeAIAction));
    }
}

void AAIControllerBase::CancelingAllCommands()
{
    SetManualControl(false);
}

void AAIControllerBase::SetManualControl(bool bIsManualControl)
{
    if (BlackboardComponent)
        BlackboardComponent->SetValueAsBool(TEXT("bIsManualControl"), bIsManualControl);
}
