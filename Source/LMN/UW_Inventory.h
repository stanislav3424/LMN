// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UW_Base.h"
#include "UW_Inventory.generated.h"

class ULogicBase;
class UUW_InventoryGrid;

UCLASS(Blueprintable, Abstract)
class LMN_API UUW_Inventory : public UUW_Base
{
    GENERATED_BODY()

    UUW_Inventory();

protected:
    virtual void ObjectUpdated(UObject* OldLogic, UObject* NewLogic);

    UFUNCTION()
    void OnEquipmentChanged();

    UPROPERTY(Transient)
    ULogicBase* Backpack;

    UPROPERTY(meta = (BindWidget))
    UUW_InventoryGrid* UW_InventoryGrid;
};
