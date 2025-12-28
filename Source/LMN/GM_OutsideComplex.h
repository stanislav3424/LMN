// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GM_Main.h"
#include "GM_OutsideComplex.generated.h"

class ATriggerBox;

UCLASS(Blueprintable, Abstract)
class LMN_API AGM_OutsideComplex : public AGM_Main
{
    GENERATED_BODY()

protected:
    virtual void BeginPlay() override;

    UPROPERTY(EditDefaultsOnly, Category = "TriggerBoxTag")
    FName InComplexTag = TEXT("InComplex");

    UPROPERTY(EditDefaultsOnly, Category = "TriggerBoxTag")
    FName InPlayerSpawnTag = TEXT("PlayerSpawn");

    UPROPERTY(Transient)
    ATriggerBox* InComplexTriggerBox;

    UPROPERTY(Transient)
    TArray<ATriggerBox*> PlayerSpawnTriggerBoxs;

    UFUNCTION()
    void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
        int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

    UFUNCTION()
    void OnOverlapEnd(
        UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

    public:
    virtual void OnStartGameGroup() override;
};
