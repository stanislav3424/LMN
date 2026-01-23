// Fill out your copyright notice in the Description page of Project Settings.

#include "InventoryLogic.h"
#include "Logic.h"
#include "GI_Main.h"

void UInventoryLogic::LoadingDataTable()
{
    Super::LoadingDataTable();

    if (auto const* Row = LogicRowHandle.DataTable->FindRow<FInventoryRow>(LogicRowHandle.RowName, TEXT("")))
    {
        InventorySize = Row->InventorySize;
        Items.SetNum(InventorySize.X * InventorySize.Y);
    }
}

void UInventoryLogic::SetItemPosition(UObject* Item, FIntVector2 const& Position, bool bRotation)
{
    if (!Item || !IsValidPosition(Position))
        return;

    if (auto Logic = Cast<ULogic>(Item))
    {
        Logic->SetOwnerLogic(this);

        auto LocalItemSize = GetSizeRotation(Logic->GetItemSize(), bRotation);
        auto Slots         = GetSlots(LocalItemSize, Position);
        for (auto Slot : Slots)
            if (Items.IsValidIndex(Slot))
                Items[Slot] = Logic;
        ItemsPositions.Add(
            TPair<ULogic*, TPair<FIntVector2, bool>>(Logic, TPair<FIntVector2, bool>(Position, bRotation)));

        OnInventoryChanged.Broadcast();
    }
}

FIntVector2 UInventoryLogic::GetSizeRotation(FIntVector2 const& Size, bool bRotation)
{
    return bRotation ? FIntVector2(Size.Y, Size.X) : Size;
}

TArray<int32> UInventoryLogic::GetSlots(FIntVector2 const& Size, FIntVector2 const& Position)
{
    TArray<int32> Slots;
    if (!IsValidInventorySize())
        return Slots;

    if (!IsValidSizeInPosition(Size, Position))
        return Slots;

    const int32 Width = InventorySize.X;
    for (int32 Row = 0; Row < Size.Y; ++Row)
    {
        int32 Y = Position.Y + Row;
        for (int32 Col = 0; Col < Size.X; ++Col)
        {
            int32 X     = Position.X + Col;
            int32 Index = Y * Width + X;
            if (Items.IsValidIndex(Index))
                Slots.Add(Index);
        }
    }
    return Slots;
}

bool UInventoryLogic::IsValidPosition(FIntVector2 const& Position) const
{
    if (!IsValidInventorySize())
        return false;
    if (Position.X < 0 || Position.Y < 0)
        return false;
    bool X = InventorySize.X >= Position.X ? true : false;
    bool Y = InventorySize.Y >= Position.Y ? true : false;
    return (X && Y) ? true : false;
}

bool UInventoryLogic::IsValidSizeInPosition(FIntVector2 const& Size, FIntVector2 const& Position) const
{
    if (!IsValidPosition(Position))
        return false;
    if (!IsValidItemSize(Size))
        return false;
    if (Position.X + Size.X > InventorySize.X)
        return false;
    if (Position.Y + Size.Y > InventorySize.Y)
        return false;
    return true;
}

bool UInventoryLogic::IsValidInventorySize() const
{
    return (InventorySize.X > 0 && InventorySize.Y > 0) ? true : false;
}

bool UInventoryLogic::IsValidItemSize(FIntVector2 const& Size) const
{
    return (Size.X > 1 && Size.Y > 1) ? true : false;
}


bool UInventoryLogic::AddItem(UObject* Item)
{
    if (!Item)
        return false;

    return true;
}

bool UInventoryLogic::AddItemPosition(UObject* Item, FIntVector2 const& Position, bool bRotation)
{
    if (!Item || !IsValidPosition(Position))
        return false;

    if (!IfCanAddItemPosition(Item, Position, bRotation))
        return false;

    SetItemPosition(Item, Position, bRotation);

    return true;
}

bool UInventoryLogic::IfCanAddItemPosition(UObject* Item, FIntVector2 const& Position, bool bRotation)
{
    if (!Item || !IsValidPosition(Position))
        return false;

    if (auto Logic = Cast<ULogic>(Item))
    {
        auto LocalItemSize      = GetSizeRotation(Logic->GetItemSize(), bRotation);

        if (!IsValidSizeInPosition(LocalItemSize, Position))
            return false;

        auto Slots         = GetSlots(LocalItemSize, Position);
        bool bIsEmptySlots = true;
        for (auto Slot : Slots)
            if (Items.IsValidIndex(Slot))
                if (Items[Slot] != nullptr)
                {
                    bIsEmptySlots = false;
                    break;
                }
        return bIsEmptySlots;
    }
    return false;
}

void UInventoryLogic::RemoveItem(UObject* Item)
{
    if (auto Logic = Cast<ULogic>(Item))
    {
        TPair<ULogic*, TPair<FIntVector2, bool>> FoundEntry;
        bool                                     bFound = false;
        for (const auto& Entry : ItemsPositions)
        {
            if (Entry.Key == Logic)
            {
                FoundEntry = Entry;
                bFound     = true;
                break;
            }
        }
        if (!bFound)
            return;

        const FIntVector2   Position = FoundEntry.Value.Key;
        const bool          Rotation = FoundEntry.Value.Value;
        const FIntVector2   Size     = GetSizeRotation(Logic->GetItemSize(), Rotation);
        const TArray<int32> Slots    = GetSlots(Size, Position);
        for (auto Slot : Slots)
            if (Items.IsValidIndex(Slot) && Items[Slot] == Logic)
                Items[Slot] = nullptr;

        ItemsPositions.Remove(FoundEntry);
        OnInventoryChanged.Broadcast();
    }
}

void UInventoryLogic::RemoveChildLogic(ULogicBase* Logic)
{
    Super::RemoveChildLogic(Logic);

    RemoveItem(Logic);
}
