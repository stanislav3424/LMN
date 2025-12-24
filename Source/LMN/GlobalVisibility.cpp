// Fill out your copyright notice in the Description page of Project Settings.

#include "GlobalVisibility.h"
#include "Components/BoxComponent.h"
#include "Components/PrimitiveComponent.h"
#include "Engine/StaticMeshActor.h"

AGlobalVisibility::AGlobalVisibility()
{
    PrimaryActorTick.bCanEverTick = false;
}
void AGlobalVisibility::RegisterPrimitiveComponent(AActor* Signaler, UPrimitiveComponent* Primitive)
{
    if (!Primitive)
        return;
    auto& Arr = VisibilityMap.FindOrAdd(Primitive);
    if (Signaler)
    {
        bool bFound = false;
        for (auto Actor : Arr)
            if (IsValid(Actor) && Actor == Signaler)
            {
                bFound = true;
                break;
            }
        if (!bFound)
            Arr.Add(Signaler);
    }
    Primitive->SetCustomPrimitiveDataFloat(0, 1.f);
}

void AGlobalVisibility::UnregisterPrimitiveComponent(AActor* Signaler, UPrimitiveComponent* Primitive)
{
    if (!Primitive)
        return;
    auto& Arr = VisibilityMap.FindOrAdd(Primitive);
    if (Signaler)
    {
        for (auto Actor : Arr)
            if (IsValid(Actor) && Actor == Signaler)
            {
                Arr.Remove(Signaler);
                break;
            }
    }
    if (Arr.Num() == 0)
        Primitive->SetCustomPrimitiveDataFloat(0, 0.f);
}