// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EquipmentLogic.h"
#include "InventoryLogic.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnInventoryChanged);

class ULogic;

UCLASS()
class LMN_API UInventoryLogic : public UEquipmentLogic
{
    GENERATED_BODY()

protected:
    virtual void LoadingDataTable();

    FIntVector2 InventorySize;

    TArray<ULogic*> Items;

    TSet<TPair<ULogic*, TPair<FIntVector2, bool>>> ItemsPositions;

    void          SetItemPosition(UObject* Item, FIntVector2 const& Position, bool bRotation);
    FIntVector2   GetSizeRotation(FIntVector2 const& Size, bool bRotation);
    TArray<int32> GetSlots(FIntVector2 const& Size, FIntVector2 const& Position);
    bool          IsValidSizeInPosition(FIntVector2 const& Size, FIntVector2 const& Position) const;
    bool          IsValidInventorySize() const;
    bool          IsValidItemSize(FIntVector2 const& Size) const;
    bool          IsValidPosition(FIntVector2 const& Position) const;

public:
    bool AddItem(UObject* Item);
    bool AddItemPosition(UObject* Item, FIntVector2 const& Position, bool bRotation);
    bool IfCanAddItemPosition(UObject* Item, FIntVector2 const& Position, bool bRotation);

    FOnInventoryChanged OnInventoryChanged;

    void RemoveItem(UObject* Item);

protected:
    virtual void RemoveChildLogic(ULogicBase* Logic) override;
};
