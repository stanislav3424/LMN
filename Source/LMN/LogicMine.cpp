// Fill out your copyright notice in the Description page of Project Settings.

#include "LogicMine.h"
#include "Components/SphereComponent.h"
#include "BFL.h"
#include "Kismet/GameplayStatics.h"

void ULogicMine::LoadingDataTable()
{
    Super::LoadingDataTable();

}

void ULogicMine::BindEvents()
{
    Super::BindEvents();

    if (IsValid(RepresentationActor))
    {
        if (auto InteractionCollision =
                UBFL::GetActorComponentByName<USphereComponent>(RepresentationActor, InteractionCollisionName))
            InteractionCollision->OnComponentBeginOverlap.AddUniqueDynamic(
                this, &ULogicMine::OnInteractionBeginOverlap);
        if (auto BlastZoneCollision =
                UBFL::GetActorComponentByName<USphereComponent>(RepresentationActor, BlastZoneCollisionName))
        {
            SphereRadius = BlastZoneCollision->GetScaledSphereRadius();
        }
    }
}

void ULogicMine::UnbindEvents()
{
    Super::UnbindEvents();

    if (auto InteractionCollision =
            UBFL::GetActorComponentByName<USphereComponent>(RepresentationActor, InteractionCollisionName))
        if (InteractionCollision->OnComponentBeginOverlap.IsAlreadyBound(this, &ULogicMine::OnInteractionBeginOverlap))
            InteractionCollision->OnComponentBeginOverlap.RemoveDynamic(this, &ULogicMine::OnInteractionBeginOverlap);
}

void ULogicMine::OnInteractionBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
    UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    if (!OtherActor || !RepresentationActor || OtherActor == RepresentationActor)
        return;

    if (TargetActorClass && !OtherActor->IsA(TargetActorClass))
        return;

    const FVector Center = RepresentationActor->GetActorLocation();

    TArray<AActor*> IgnoreActors;
    IgnoreActors.Add(RepresentationActor);

    UGameplayStatics::ApplyRadialDamage(GetWorld(), DamageAmount, Center, SphereRadius, UDamageType::StaticClass(),
        IgnoreActors, RepresentationActor, nullptr);
}