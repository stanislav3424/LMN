// Fill out your copyright notice in the Description page of Project Settings.

#include "MineActor.h"
#include "Components/SphereComponent.h"

AMineActor::AMineActor()
{
    auto Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    SetRootComponent(Root);

    InteractionCollision = CreateDefaultSubobject<USphereComponent>(TEXT("InteractionCollision"));
    if (InteractionCollision)
    {
        InteractionCollision->SetupAttachment(Root);
    }

    BlastZoneCollision = CreateDefaultSubobject<USphereComponent>(TEXT("BlastZoneCollision"));
    if (BlastZoneCollision)
    {
        BlastZoneCollision->SetupAttachment(Root);
        BlastZoneCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    }
}
