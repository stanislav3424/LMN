// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "VisibilitySceneComponent.generated.h"

class AGlobalVisibility;
class USphereComponent;

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class LMN_API UVisibilitySceneComponent : public USceneComponent
{
    GENERATED_BODY()

public:
    UVisibilitySceneComponent();

protected:
    virtual void BeginPlay() override;
    virtual void OnRegister() override;
    virtual void OnUnregister() override;

    UPROPERTY(EditAnywhere, Category = "Collision")
    USphereComponent* InteractionCollision;

    UPROPERTY(Transient)
    AGlobalVisibility* GlobalVisibility;

    UFUNCTION()
    void OnInteractionBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
        UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

    UFUNCTION()
    void OnInteractionEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
        UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex);
};
