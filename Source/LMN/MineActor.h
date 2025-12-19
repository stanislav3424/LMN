// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RepresentationActor.h"
#include "MineActor.generated.h"

class USphereComponent;

UCLASS()
class LMN_API AMineActor : public ARepresentationActor
{
    GENERATED_BODY()

public:
    AMineActor();

protected:
    UPROPERTY(EditDefaultsOnly, Category = "Collision")
    USphereComponent* InteractionCollision;

    UPROPERTY(EditDefaultsOnly, Category = "Collision")
    USphereComponent* BlastZoneCollision;
};
