// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SceneComponentBase.h"
#include "SC_Selected.generated.h"

UCLASS(Blueprintable, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class LMN_API USC_Selected : public USceneComponentBase
{
    GENERATED_BODY()

protected:
    virtual void BeginPlay() override;
    virtual void OnRegister() override;
    virtual void OnUnregister() override;
    virtual void LogicUpdated() override;

    UFUNCTION()
    void SelectedChange(bool Selected);

    UPROPERTY()
    UStaticMeshComponent* SelectionMesh;

    UPROPERTY(EditDefaultsOnly, Category = "Visual")
    UStaticMesh* DefaultMesh;

    UPROPERTY(Transient)
    UMaterialInstanceDynamic* MID;

    UPROPERTY(EditDefaultsOnly, Category = "Visual")
    FName SelectedParameter = FName(TEXT("IsSelected"));
};