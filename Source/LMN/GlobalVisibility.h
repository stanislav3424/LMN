// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GlobalVisibility.generated.h"

UCLASS()
class LMN_API AGlobalVisibility : public AActor
{
    GENERATED_BODY()

public:
    AGlobalVisibility();

    void RegisterPrimitiveComponent(AActor* Signaler, UPrimitiveComponent* Primitive);
    void UnregisterPrimitiveComponent(AActor* Signaler, UPrimitiveComponent* Primitive);

protected:
    TMap<UPrimitiveComponent*, TArray<AActor*>> VisibilityMap;
};
