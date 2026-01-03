// Fill out your copyright notice in the Description page of Project Settings.

#include "BTTask_RunEQS_FindShelter.h"
#include "EnvironmentQuery/EnvQueryManager.h"
#include "EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "AISystem.h"
#include "BFL.h"
#include "TracingLibrary.h"

UBTTask_RunEQS_FindShelter::UBTTask_RunEQS_FindShelter()
{
    NodeName = TEXT("Run EQS Find Shelter");
}

void UBTTask_RunEQS_FindShelter::InitializeFromAsset(UBehaviorTree& Asset)
{
    Super::InitializeFromAsset(Asset);
    EQSRequestPrimary.InitForOwnerAndBlackboard(*this, GetBlackboardAsset());
    EQSRequestSecondary.InitForOwnerAndBlackboard(*this, GetBlackboardAsset());
}

EBTNodeResult::Type UBTTask_RunEQS_FindShelter::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
    auto QueryOwner = OwnerComp.GetOwner();
    auto World      = OwnerComp.GetWorld();

    if (!World || !QueryOwner)
        return EBTNodeResult::Failed;

    if (UEnvQuery* PrimaryTemplate = EQSRequestPrimary.QueryTemplate)
        if (auto PrimaryInstance = UEnvQueryManager::RunEQSQuery(
                World, PrimaryTemplate, QueryOwner, EEnvQueryRunMode::AllMatching, nullptr))
            PrimaryInstance->GetOnQueryFinishedEvent().AddDynamic(this, &UBTTask_RunEQS_FindShelter::OnPrimaryFinished);
    if (UEnvQuery* SecondaryTemplate = EQSRequestSecondary.QueryTemplate)
        if (auto SecondaryInstance = UEnvQueryManager::RunEQSQuery(
                World, SecondaryTemplate, QueryOwner, EEnvQueryRunMode::AllMatching, nullptr))
            SecondaryInstance->GetOnQueryFinishedEvent().AddDynamic(
                this, &UBTTask_RunEQS_FindShelter::OnSecondaryFinished);

    BehaviorTreeComponent = &OwnerComp;

    return EBTNodeResult::InProgress;
}

void UBTTask_RunEQS_FindShelter::OnPrimaryFinished(
    UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus::Type QueryStatus)
{
    if (!QueryInstance)
        return;
    PrimaryLocations = QueryInstance->GetResultsAsLocations();
    bPrimaryDone     = true;
    if (bSecondaryDone)
        OnBothQueriesFinished();
}

void UBTTask_RunEQS_FindShelter::OnSecondaryFinished(
    UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus::Type QueryStatus)
{
    if (!QueryInstance)
        return;
    SecondaryActors    = QueryInstance->GetResultsAsActors();
    bSecondaryDone     = true;
    if (bPrimaryDone)
        OnBothQueriesFinished();
}

void UBTTask_RunEQS_FindShelter::OnBothQueriesFinished()
{
    if (!BehaviorTreeComponent)
        return;

    FVector Result     = FVector::ZeroVector;
    auto    QueryOwner = BehaviorTreeComponent->GetOwner();
    UBFL::GetOnlyEnemies(SecondaryActors, QueryOwner);

    TArray<FVector> SecondaryALocations;
    SecondaryALocations.Reserve(SecondaryActors.Num());
    for (auto const& Actor : SecondaryActors)
        if (IsValid(Actor))
            SecondaryALocations.Add(Actor->GetActorLocation());

    UTracingLibrary::TraceComplexArr(GetWorld(), SecondaryALocations, PrimaryLocations);

    if (!SecondaryALocations.IsEmpty())
        Result = SecondaryALocations[0];

    if (auto BlackboardComponent = BehaviorTreeComponent->GetBlackboardComponent())
        BlackboardComponent->SetValueAsVector(GetSelectedBlackboardKey(), Result);

    FAIMessage::Send(BehaviorTreeComponent,
        FAIMessage(UBrainComponent::AIMessage_QueryFinished, this, 0, Result == FVector::ZeroVector ? true : false));
}