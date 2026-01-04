// Fill out your copyright notice in the Description page of Project Settings.

#include "EnvQueryTest_Shelter.h"
#include "Kismet/KismetSystemLibrary.h"
#include "BFL.h"
#include "TracingLibrary.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "Engine/EngineTypes.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_Point.h"

UEnvQueryTest_Shelter::UEnvQueryTest_Shelter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
    ValidItemType = UEnvQueryItemType_Point::StaticClass();
    TestPurpose   = EEnvTestPurpose::Score;
    FilterType    = EEnvTestFilterType::Match;
    bDrawDebug    = true;
}

void UEnvQueryTest_Shelter::RunTest(FEnvQueryInstance& QueryInstance) const
{
    UWorld* World = QueryInstance.World;
    if (!World)
        return;
    AActor* Querier = Cast<AActor>(QueryInstance.Owner.Get());
    if (!Querier)
        return;

    const float                           SearchRadius = 1500.f;
    TSubclassOf<AActor>                   EnemyClass   = AActor::StaticClass();
    TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;
    ObjectTypes.Add(UEngineTypes::ConvertToObjectType(ECC_Pawn));
    TArray<AActor*> Enemies;
    TArray<AActor*> ActorsToIgnore;
    ActorsToIgnore.Add(Querier);
    UKismetSystemLibrary::SphereOverlapActors(
        Querier, Querier->GetActorLocation(), SearchRadius, ObjectTypes, EnemyClass, ActorsToIgnore, Enemies);

    UBFL::GetOnlyEnemies(Enemies, Querier);

    for (FEnvQueryInstance::ItemIterator It(this, QueryInstance); It; ++It)
    {
        const FVector ItemLocation = GetItemLocation(QueryInstance, It);
        float         TotalScore   = 0.f;
        float         Score        = 0.f;
        for (AActor* Enemy : Enemies)
        {
            if (!IsValid(Enemy))
                continue;
            const FVector EnemyLocation = Enemy->GetActorLocation() + FVector(0.f, 0.f, -90.f);

            TArray<AActor*> Arr;
            Arr.Add(Enemy);
            Arr.Add(Querier);
            bool bResultLower = UTracingLibrary::LevelTrace(
                World, EnemyLocation, ItemLocation, ELevelTrace::Top, ELevelTrace::Lower, Arr, true);
            bool bResultCentral = UTracingLibrary::LevelTrace(
                World, EnemyLocation, ItemLocation, ELevelTrace::Top, ELevelTrace::Central, Arr, true);
            bool bResultTop = UTracingLibrary::LevelTrace(
                World, EnemyLocation, ItemLocation, ELevelTrace::Top, ELevelTrace::Top, Arr, true);

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