// Fill out your copyright notice in the Description page of Project Settings.

#include "EnvQueryTest_RemoveNotValidPoint.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_Point.h"
#include "Kismet/KismetSystemLibrary.h"

UEnvQueryTest_RemoveNotValidPoint::UEnvQueryTest_RemoveNotValidPoint(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
    ValidItemType = UEnvQueryItemType_Point::StaticClass();
    TestPurpose = EEnvTestPurpose::Score;
}

void UEnvQueryTest_RemoveNotValidPoint::RunTest(FEnvQueryInstance& QueryInstance) const
{
    if (!ActorClass)
        return;
    auto Querier = Cast<AActor>(QueryInstance.Owner.Get());
    if (!Querier)
        return;

    
    TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;
    ObjectTypes.Add(UEngineTypes::ConvertToObjectType(ECC_Pawn));
    TArray<AActor*> Actors;
    TArray<AActor*> ActorsToIgnore;
    ActorsToIgnore.Add(Querier);
    UKismetSystemLibrary::SphereOverlapActors(
        Querier, Querier->GetActorLocation(), SearchRadius, ObjectTypes, ActorClass, ActorsToIgnore, Actors);

    TArray<FVector> ActorLocations;
    ActorLocations.Reserve(Actors.Num());
    for (auto Actor : Actors)
        if (IsValid(Actor))
            ActorLocations.Add(Actor->GetActorLocation() + FVector(0.f, 0.f, -90.f));

    
    const float ExcludeDistanceSq = ExcludeDistance * ExcludeDistance;

    for (FEnvQueryInstance::ItemIterator It(this, QueryInstance); It; ++It)
    {
        const int32   ItemIndex     = It.GetIndex();
        const FVector ItemLocation  = GetItemLocation(QueryInstance, It);
        bool          bShouldRemove = false;
        for (auto const& ActorLoc : ActorLocations)
            if (FVector::DistSquared(ItemLocation, ActorLoc) <= ExcludeDistanceSq)
            {
                bShouldRemove = true;
                break;
            }

        if (bShouldRemove)
            QueryInstance.Items[ItemIndex].Discard();
    }
}
