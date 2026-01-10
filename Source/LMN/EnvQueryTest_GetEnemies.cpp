// Fill out your copyright notice in the Description page of Project Settings.

#include "EnvQueryTest_GetEnemies.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_Actor.h"
#include "TeamLibrary.h"
#include "BFL.h"

UEnvQueryTest_GetEnemies::UEnvQueryTest_GetEnemies(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
    ValidItemType = UEnvQueryItemType_Actor::StaticClass();
    TestPurpose   = EEnvTestPurpose::Filter;
    FilterType    = EEnvTestFilterType::Match;
}

void UEnvQueryTest_GetEnemies::RunTest(FEnvQueryInstance& QueryInstance) const
{
    auto Querier = Cast<AActor>(QueryInstance.Owner.Get());
    if (!Querier)
        return;

    for (FEnvQueryInstance::ItemIterator It(this, QueryInstance); It; ++It)
    {
        auto        Actor     = QueryInstance.GetItemAsActor(It.GetIndex());
        if (UTeamLibrary::AreEnemiesActor(Querier, Actor))
            It.ForceItemState(EEnvItemStatus::Passed);
    }
}