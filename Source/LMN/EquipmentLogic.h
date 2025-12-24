// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Logic.h"
#include "EquipmentLogic.generated.h"

enum class EEquipmentSlot : uint8;

UCLASS()
class LMN_API UEquipmentLogic : public ULogic
{
    GENERATED_BODY()

protected:
    EEquipmentSlot EquipmentSlot;
    virtual void   LoadingDataTable() override;

public:
    EEquipmentSlot GetEquipmentSlot() const { return EquipmentSlot; };
};
