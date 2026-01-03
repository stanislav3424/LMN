#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "BTTask_RunEQS_FindShelter.generated.h"

UCLASS() class LMN_API UBTTask_RunEQS_FindShelter : public UBTTask_BlackboardBase
{
    GENERATED_BODY()
public:
    UBTTask_RunEQS_FindShelter();

    UPROPERTY(Category = EQS, EditAnywhere)
    FEQSParametrizedQueryExecutionRequest EQSRequestPrimary;

    UPROPERTY(Category = EQS, EditAnywhere)
    FEQSParametrizedQueryExecutionRequest EQSRequestSecondary;

    virtual void                InitializeFromAsset(UBehaviorTree& Asset) override;
    virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

    UFUNCTION()
    void OnPrimaryFinished(UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus::Type QueryStatus);
    
    UFUNCTION()
    void OnSecondaryFinished(UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus::Type QueryStatus);

protected:
    void OnBothQueriesFinished();

    TArray<FVector> PrimaryLocations;
    TArray<AActor*> SecondaryActors;

    UPROPERTY()
    UBehaviorTreeComponent* BehaviorTreeComponent;

    bool bPrimaryDone   = false;
    bool bSecondaryDone = false;
};