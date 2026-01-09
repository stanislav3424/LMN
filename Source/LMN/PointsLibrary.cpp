// Fill out your copyright notice in the Description page of Project Settings.

#include "PointsLibrary.h"
#include "EnvironmentQuery/EnvQueryManager.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "EnvironmentQuery/EnvQuery.h"

TArray<FVector> UPointsLibrary::GetPoints(
    UObject* WorldContextObject, UEnvQuery* QueryTemplate, UObject* Querier, int32 NumPoints)
{
    TArray<FVector> Out;
    if (!IsValid(WorldContextObject) || !IsValid(QueryTemplate) || NumPoints <= 0)
        return Out;
    UWorld* World = GEngine ? GEngine->GetWorldFromContextObjectChecked(WorldContextObject) : nullptr;
    if (!World)
        return Out;
    FEnvQueryRequest  Request(QueryTemplate, Querier);
    UEnvQueryManager* EQSManager = UEnvQueryManager::GetCurrent(World);
    if (!EQSManager)
        return Out;
    TSharedPtr<FEnvQueryResult> QueryResult = EQSManager->RunInstantQuery(Request, EEnvQueryRunMode::AllMatching);
    if (!QueryResult.IsValid() || !QueryResult->IsSuccessful())
        return Out;
    int32 Count = FMath::Min(NumPoints, QueryResult->Items.Num());
    Out.Reserve(Count);
    for (int32 Index = 0; Index < Count; ++Index)
    {
        Out.Add(QueryResult->GetItemAsLocation(Index));
    }
    return Out;
}