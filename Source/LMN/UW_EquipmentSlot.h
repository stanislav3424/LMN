// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UW_Item.h"
#include "UW_EquipmentSlot.generated.h"

enum class EEquipmentSlot : uint8;

UCLASS(Blueprintable, Abstract)
class LMN_API UUW_EquipmentSlot : public UUW_Item
{
    GENERATED_BODY()

    UUW_EquipmentSlot();

protected:
    virtual void ObjectUpdated();

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "EquipmentSlot")
    EEquipmentSlot EquipmentSlot;

public:
    UFUNCTION(BlueprintCallable, Category = "EquipmentSlot")
    void SetEquipmentSlot(EEquipmentSlot NewEquipmentSlot);

    UFUNCTION()
    void           OnEquipmentChanged();

    EEquipmentSlot GetEquipmentSlot() const { return EquipmentSlot; }
};
