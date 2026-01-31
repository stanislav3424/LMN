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

void UInventoryLogic::ClearItemSlots(ULogic* Logic)
{
    if (!Logic)
        return;

    for (auto& Item : Items)
        if (Item == Logic)
            Item = nullptr;
}

void UInventoryLogic::SetItemPosition(UObject* Item, FIntVector2 const& Position, bool bRotation)
{
    if (!Item || !IsValidPosition(Position))
        return;

    if (auto Logic = Cast<ULogic>(Item))
    {
        Logic->SetOwnerLogic(this);

        ClearItemSlots(Logic);

        auto LocalItemSize = GetSizeRotation(Logic->GetItemSize(), bRotation);
        auto Slots         = GetSlots(LocalItemSize, Position);
        for (auto Slot : Slots)
            if (Items.IsValidIndex(Slot))
                Items[Slot] = Logic;
        
        FInventoryItemInfo ItemInfo;
        ItemInfo.Item = Logic;
        ItemInfo.Position = Position;
        ItemInfo.bRotated = bRotation;

        for (auto& Existing : ItemsPosition)
        {
            if (Existing.Item == Logic)
            {
                Existing = ItemInfo;
                OnInventoryChanged.Broadcast();
                return;
            }
        }

        ItemsPosition.AddUnique(ItemInfo);

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
    return (Size.X > 0 && Size.Y > 0) ? true : false;
}

bool UInventoryLogic::AddItem(UObject* Item)
{
    if (!Item)
        return false;

    if (auto Logic = Cast<ULogic>(Item))
    {
        for (int32 Y = 0; Y < InventorySize.Y; ++Y)
            for (int32 X = 0; X < InventorySize.X; ++X)
            {
                FIntVector2 Position(X, Y);

                if (IfCanAddItemPosition(Item, Position, false))
                {
                    SetItemPosition(Item, Position, false);
                    return true;
                }
            }
        for (int32 Y = 0; Y < InventorySize.Y; ++Y)
            for (int32 X = 0; X < InventorySize.X; ++X)
            {
                FIntVector2 Position(X, Y);

                if (IfCanAddItemPosition(Item, Position, true))
                {
                    SetItemPosition(Item, Position, true);
                    return true;
                }
            }
    }

    return false;
}

bool UInventoryLogic::AddItemPosition(UObject* Item, FIntVector2 const& Position, bool bRotation)
{
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
        auto LocalItemSize = GetSizeRotation(Logic->GetItemSize(), bRotation);

        if (!IsValidSizeInPosition(LocalItemSize, Position))
            return false;

        auto Slots = GetSlots(LocalItemSize, Position);
        for (auto Slot : Slots)
            if (Items.IsValidIndex(Slot))
                if (Items[Slot] != nullptr && Items[Slot] != Logic)
                    return false;
        return true;
    }
    return false;
}

void UInventoryLogic::RemoveItem(UObject* Item)
{
    if (auto Logic = Cast<ULogic>(Item))
    {
        for (auto It = ItemsPosition.CreateIterator(); It; ++It)
        {
            if (It->Item == Logic)
            {
                const FIntVector2   Position = It->Position;
                const bool          Rotation = It->bRotated;
                const FIntVector2   Size     = GetSizeRotation(Logic->GetItemSize(), Rotation);
                const TArray<int32> Slots    = GetSlots(Size, Position);
                for (int32 Slot : Slots)
                    if (Items.IsValidIndex(Slot) && Items[Slot] == Logic)
                        Items[Slot] = nullptr;
                It.RemoveCurrent();
                OnInventoryChanged.Broadcast();
                return;
            }
        }
    }
}

void UInventoryLogic::RemoveChildLogic(ULogicBase* Logic)
{
    RemoveItem(Logic);
}

TArray<FInventoryItemInfo> UInventoryLogic::GetItemsPosition() const
{
    return ItemsPosition;
}

ULogic* UInventoryLogic::GetItemInPosition(FIntVector2 const& Position)
{
    return GetItemInIndex(PositionToIndex(Position));
}

ULogic* UInventoryLogic::GetItemInIndex(int32 Position)
{
    if (Items.IsValidIndex(Position))
        return Items[Position];
    return nullptr;
}

int32 UInventoryLogic::PositionToIndex(FIntVector2 const& Position) const
{
    return Position.X + Position.Y * InventorySize.X;
}

FIntVector2 UInventoryLogic::IndexToPosition(int32 Index) const
{
    return FIntVector2(Index % InventorySize.X, Index / InventorySize.X);
}
