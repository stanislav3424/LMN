// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EquipmentLogic.h"
#include "InventoryLogic.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnInventoryChanged);

class ULogic;

USTRUCT()
struct FInventoryItemInfo
{
    GENERATED_BODY()

public:
    UPROPERTY(Transient)
    ULogic*     Item     = nullptr;
    FIntVector2 Position = FIntVector2::ZeroValue;
    bool        bRotated = false;

    friend bool operator==(const FInventoryItemInfo& A, const FInventoryItemInfo& B) { return A.Item == B.Item; }
    friend bool operator!=(const FInventoryItemInfo& A, const FInventoryItemInfo& B) { return !(A == B); }
};

UCLASS(Blueprintable)
class LMN_API UInventoryLogic : public UEquipmentLogic
{
    GENERATED_BODY()

protected:
    virtual void LoadingDataTable();

    FIntVector2 InventorySize;

    UPROPERTY(Transient)
    TArray<ULogic*> Items;

    UPROPERTY(Transient)
    TArray<FInventoryItemInfo> ItemsPosition;

    void          SetItemPosition(UObject* Item, FIntVector2 const& Position, bool bRotation);
    void          ClearItemSlots(ULogic* Logic);
    TArray<int32> GetSlots(FIntVector2 const& Size, FIntVector2 const& Position);
    bool          IsValidSizeInPosition(FIntVector2 const& Size, FIntVector2 const& Position) const;
    bool          IsValidInventorySize() const;
    bool          IsValidItemSize(FIntVector2 const& Size) const;
    bool          IsValidPosition(FIntVector2 const& Position) const;

public:
    static FIntVector2 GetSizeRotation(FIntVector2 const& Size, bool bRotation);
    bool               AddItem(UObject* Item);
    bool               AddItemPosition(UObject* Item, FIntVector2 const& Position, bool bRotation);
    bool               IfCanAddItemPosition(UObject* Item, FIntVector2 const& Position, bool bRotation);
    FIntVector2        GetInventorySize() const { return InventorySize; };

    FOnInventoryChanged OnInventoryChanged;

    void RemoveItem(UObject* Item);

    TArray<FInventoryItemInfo> GetItemsPosition() const;

    ULogic*     GetItemInPosition(FIntVector2 const& Position);
    ULogic*     GetItemInIndex(int32 Position);
    int32       PositionToIndex(FIntVector2 const& Position) const;
    FIntVector2 IndexToPosition(int32 Index) const;

protected:
    virtual void RemoveChildLogic(ULogicBase* Logic) override;
};
