// Fill out your copyright notice in the Description page of Project Settings.

#include "EnvQueryTest_Shelter.h"
#include "Kismet/KismetSystemLibrary.h"
#include "TeamLibrary.h"
#include "TracingLibrary.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "Engine/EngineTypes.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_Point.h"

UEnvQueryTest_Shelter::UEnvQueryTest_Shelter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
    ValidItemType = UEnvQueryItemType_Point::StaticClass();
    TestPurpose   = EEnvTestPurpose::Score;
    FilterType    = EEnvTestFilterType::Match;
}

void UEnvQueryTest_Shelter::RunTest(FEnvQueryInstance& QueryInstance) const
{
    if (!ActorClass)
        return;
    UWorld* World = QueryInstance.World;
    if (!World)
        return;
    auto Querier = Cast<AActor>(QueryInstance.Owner.Get());
    if (!Querier)
        return;

    TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;
    ObjectTypes.Add(UEngineTypes::ConvertToObjectType(ECC_Pawn));
    TArray<AActor*> Enemies;
    TArray<AActor*> ActorsToIgnore;
    ActorsToIgnore.Add(Querier);
    UKismetSystemLibrary::SphereOverlapActors(
        Querier, Querier->GetActorLocation(), SearchRadius, ObjectTypes, ActorClass, ActorsToIgnore, Enemies);

    UTeamLibrary::GetOnlyEnemies(Enemies, Querier);

    for (FEnvQueryInstance::ItemIterator It(this, QueryInstance); It; ++It)
    {
        const FVector ItemLocation = GetItemLocation(QueryInstance, It);
        float         TotalScore   = 0.f;
        float         Score        = 0.f;
        for (auto Enemy : Enemies)
        {
            if (!IsValid(Enemy))
                continue;
            const FVector EnemyLocation = Enemy->GetActorLocation() + FVector(0.f, 0.f, -90.f);

            TArray<AActor*> Arr;
            Arr.Add(Enemy);
            Arr.Add(Querier);
            bool bResultLower = UTracingLibrary::LevelTrace(
                World, EnemyLocation, ItemLocation, ELevelTrace::Top, ELevelTrace::Lower, Arr, bDebag);
            bool bResultCentral = UTracingLibrary::LevelTrace(
                World, EnemyLocation, ItemLocation, ELevelTrace::Top, ELevelTrace::Central, Arr, bDebag);
            bool bResultTop = UTracingLibrary::LevelTrace(
                World, EnemyLocation, ItemLocation, ELevelTrace::Top, ELevelTrace::Top, Arr, bDebag);

            if (!bResultLower)
                Score += 2;
            if (!bResultCentral)
                Score += 3;
            if (!bResultTop)
                Score = 0;
        }
        It.SetScore(TestPurpose, FilterType, Score, 0.f, 0.f);
    }
}