// Fill out your copyright notice in the Description page of Project Settings.

#include "GM_OutsideComplex.h"
#include "Engine/TriggerBox.h"
#include "Kismet/GameplayStatics.h"
#include "Components/ShapeComponent.h"
#include "NavigationSystem.h"
#include "BFL.h"
#include "Logic.h"

void AGM_OutsideComplex::BeginPlay()
{
    Super::BeginPlay();

    if (!GetWorld())
        return;
    TArray<AActor*> Actors;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ATriggerBox::StaticClass(), Actors);

    for (auto Actor : Actors)
        if (IsValid(Actor))
        {
            if (Actor->ActorHasTag(InPlayerSpawnTag))
            {
                PlayerSpawnTriggerBoxs.Add(Cast<ATriggerBox>(Actor));
            }
            else if (Actor->ActorHasTag(InComplexTag))
            {
                InComplexTriggerBox = Cast<ATriggerBox>(Actor);
            }
        }

    if (InComplexTriggerBox)
        if (auto Collision = InComplexTriggerBox->GetCollisionComponent())
        {
            Collision->OnComponentBeginOverlap.AddDynamic(this, &AGM_OutsideComplex::OnOverlapBegin);
            Collision->OnComponentEndOverlap.AddDynamic(this, &AGM_OutsideComplex::OnOverlapEnd);
        }

    StartGame();
}

void AGM_OutsideComplex::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
    UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
}

void AGM_OutsideComplex::OnOverlapEnd(
    UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
}

void AGM_OutsideComplex::OnStartGameGroup()
{
    Super::OnStartGameGroup();

    int32 Index      = FMath::RandHelper(PlayerSpawnTriggerBoxs.Num());
    auto  TriggerBox = PlayerSpawnTriggerBoxs[Index];
    if (!IsValid(TriggerBox) || !GetWorld())
        return;

    FVector Origin;
    FVector BoxExtent;
    TriggerBox->GetActorBounds(false, Origin, BoxExtent);
    const float Radius = FMath::Max(BoxExtent.X, BoxExtent.Y);
    auto        NavigationSystem = FNavigationSystem::GetCurrent<UNavigationSystemV1>(GetWorld());
    if (!NavigationSystem)
        return;

    for (auto& TypeUnit : TypeUnits)
    {
        FNavLocation NavLocation;
        NavigationSystem->GetRandomPointInNavigableRadius(Origin, Radius, NavLocation);
        UBFL::SpawnTemplateCharacter(GetWorld(), TypeUnit, NavLocation, FRotator(0.f, 0.f, 0.f), ETeam::Player);
    }
}
