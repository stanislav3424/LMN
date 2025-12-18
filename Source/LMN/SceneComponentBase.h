// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "SceneComponentBase.generated.h"


UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent), NotBlueprintable, Abstract)
class LMN_API USceneComponentBase : public USceneComponent
{
	GENERATED_BODY()

public:	
	USceneComponentBase();

protected:
	virtual void BeginPlay() override;

public:
    virtual void TickComponent(
        float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

protected:
    UPROPERTY()
    UObject* Object;

    virtual void ObjectUpdated() {};

public:
    void SetObject(UObject* NewObject);
};
