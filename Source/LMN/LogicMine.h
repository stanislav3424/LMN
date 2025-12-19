// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Logic.h"
#include "LogicMine.generated.h"

UCLASS()
class LMN_API ULogicMine : public ULogic
{
    GENERATED_BODY()

protected:
    virtual void LoadingDataTable() override;
    virtual void BindEvents() override;
    virtual void UnbindEvents() override;

    UPROPERTY(EditDefaultsOnly, Category = "CollisionName")
    FName InteractionCollisionName = TEXT("InteractionCollision");

    UPROPERTY(EditDefaultsOnly, Category = "CollisionName")
    FName BlastZoneCollisionName   = TEXT("BlastZoneCollision");

    float SphereRadius = 0.f;
    TSubclassOf<AActor> TargetActorClass;
    float DamageAmount = 50.f;

    UFUNCTION()
    void OnInteractionBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
        UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};
