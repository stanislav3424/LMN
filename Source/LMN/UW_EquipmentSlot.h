// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UW_Base.h"
#include "UW_EquipmentSlot.generated.h"

enum class EEquipmentSlot : uint8;
class ULogicBase;

UCLASS(Blueprintable, Abstract)
class LMN_API UUW_EquipmentSlot : public UUW_Base
{
    GENERATED_BODY()

    UUW_EquipmentSlot();

protected:
    virtual void ObjectUpdated();

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "EquipmentSlot")
    EEquipmentSlot EquipmentSlot;

    UPROPERTY(Transient)
    ULogicBase* ItemInSlot;

public:
    UFUNCTION(BlueprintCallable, Category = "EquipmentSlot")
    void SetEquipmentSlot(EEquipmentSlot NewEquipmentSlot);

    UFUNCTION()
    void OnEquipmentChanged();

    EEquipmentSlot GetEquipmentSlot() const { return EquipmentSlot; }
};
