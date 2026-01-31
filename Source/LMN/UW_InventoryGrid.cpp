// Fill out your copyright notice in the Description page of Project Settings.

#include "UW_InventoryGrid.h"
#include "BFL.h"
#include "InventoryLogic.h"
#include "UMG_Library.h"
#include "Components/SizeBox.h"
#include "Components/CanvasPanel.h"
#include "Components/CanvasPanelSlot.h"
#include "Components/Image.h"
#include "DragDropOperation_Item.h"
#include "UW_Item.h"
#include "Logic.h"
#include "Blueprint/WidgetBlueprintLibrary.h"

UUW_InventoryGrid::UUW_InventoryGrid()
{
    bAutoUpdatedChildWidgets = true;
}

void UUW_InventoryGrid::ObjectUpdated(UObject* OldLogic, UObject* NewLogic)
{
    Super::ObjectUpdated(OldLogic, NewLogic);

    if (auto InventoryLogic = Cast<UInventoryLogic>(OldLogic))
    {
        InventoryLogic->OnInventoryChanged.RemoveDynamic(this, &UUW_InventoryGrid::OnInventoryChanged);
        InventoryLogic->OnInventoryChanged.Broadcast();
    }

    if (auto InventoryLogic = Cast<UInventoryLogic>(NewLogic))
    {
        InventoryLogic->OnInventoryChanged.AddUniqueDynamic(this, &UUW_InventoryGrid::OnInventoryChanged);
        InventoryLogic->OnInventoryChanged.Broadcast();

        auto InventorySize  = InventoryLogic->GetInventorySize();
        auto SizeInViewport = UUMG_Library::GetInViewport(InventorySize);
        if (!SizeBox)
            return;
        SizeBox->SetWidthOverride(SizeInViewport.X);
        SizeBox->SetHeightOverride(SizeInViewport.Y);
    }
}

FIntVector2 UUW_InventoryGrid::GetAdjustedPositionForItem(
    const FGeometry& InGeometry, const FVector2D& MousePosition, ULogic* Item) const
{
    if (!Item)
        return FIntVector2::ZeroValue;

    const float CellSize         = UUMG_Library::GetCellSize();
    auto        ItemSize         = Item->GetItemSize();
    FVector2D   ItemCenterOffset = FVector2D(ItemSize.X * CellSize / 2.0f, ItemSize.Y * CellSize / 2.0f);

    FVector2D LocalMousePosition = InGeometry.AbsoluteToLocal(MousePosition);
    FVector2D AdjustedPosition   = LocalMousePosition - ItemCenterOffset;

    int32 AdjustedX = FMath::Max(0, FMath::FloorToInt((AdjustedPosition.X + 0.5f * CellSize) / CellSize));
    int32 AdjustedY = FMath::Max(0, FMath::FloorToInt((AdjustedPosition.Y + 0.5f * CellSize) / CellSize));

    return FIntVector2(AdjustedX, AdjustedY);
}

ULogic* UUW_InventoryGrid::GetItemInPosition(const FGeometry& InGeometry, const FVector2D& MousePosition)
{
    if (auto InventoryLogic = Cast<UInventoryLogic>(GetLogic_Implementation()))
    {
        const float CellSize           = UUMG_Library::GetCellSize();
        FVector2D   LocalMousePosition = InGeometry.AbsoluteToLocal(MousePosition);
        FIntVector2 Position           = FIntVector2(
            FMath::FloorToInt(LocalMousePosition.X / CellSize), FMath::FloorToInt(LocalMousePosition.Y / CellSize));

        return InventoryLogic->GetItemInPosition(Position);
    }

    return nullptr;
}

bool UUW_InventoryGrid::NativeOnDrop(
    const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation)
{
    SetGridPreviewEnabled(false);

    if (auto InventoryLogic = Cast<UInventoryLogic>(GetLogic_Implementation()))
    {
        if (auto ItemOperation = Cast<UDragDropOperation_Item>(InOperation))
        {
            auto Payload = Cast<ULogic>(ItemOperation->Payload);
            if (!Payload)
                return false;

            FIntVector2 FinalPosition = GetAdjustedPositionForItem(InGeometry, InDragDropEvent.GetScreenSpacePosition(), Payload);
            return InventoryLogic->AddItemPosition(Payload, FinalPosition, false);
        }
    }
    return false;
}

void UUW_InventoryGrid::NativeOnDragEnter(
    const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation)
{
    if (auto ItemOperation = Cast<UDragDropOperation_Item>(InOperation))
    {
        if (auto Payload = Cast<ULogic>(ItemOperation->Payload))
        {
            SetGridPreviewEnabled(true);
            UpdateGridPreviewPosition(InGeometry, InDragDropEvent.GetScreenSpacePosition(), Payload);
        }
    }
}

bool UUW_InventoryGrid::NativeOnDragOver(
    const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation)
{
    if (auto ItemOperation = Cast<UDragDropOperation_Item>(InOperation))
    {
        if (auto Payload = Cast<ULogic>(ItemOperation->Payload))
        {
            SetGridPreviewEnabled(true);
            UpdateGridPreviewPosition(InGeometry, InDragDropEvent.GetScreenSpacePosition(), Payload);
            return true;
        }
    }
    return false;
}

void UUW_InventoryGrid::NativeOnDragLeave(const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation)
{
    if (auto ItemOperation = Cast<UDragDropOperation_Item>(InOperation))
    {
        SetGridPreviewEnabled(false);
    }
}

void UUW_InventoryGrid::OnInventoryChanged()
{
    if (!CanvasPanel || !ItemWidgetClass)
        return;

    CanvasPanel->ClearChildren();

    auto InventoryLogic = Cast<UInventoryLogic>(GetLogic_Implementation());
    if (!InventoryLogic)
        return;
    auto const& ItemsPosition = InventoryLogic->GetItemsPosition();
    for (auto const& ItemInfo : ItemsPosition)
    {
        if (!ItemInfo.Item)
            continue;

        auto ItemWidget = CreateWidget<UUW_Item>(GetOwningPlayer(), ItemWidgetClass);
        if (!ItemWidget)
            break;

        UBFL::SetLogic(ItemWidget, ItemInfo.Item);
        auto ItemPosition       = ItemInfo.Position;
        auto PositionInViewport = UUMG_Library::GetInViewport(ItemInfo.Position);
        CanvasPanel->AddChild(ItemWidget);
        if (auto CanvasPanelSlot = Cast<UCanvasPanelSlot>(ItemWidget->Slot))
        {
            CanvasPanelSlot->SetPosition(PositionInViewport);
            CanvasPanelSlot->SetAutoSize(true);
        }
        ItemWidget->SetAutoSize();
    }

    if (GridPreviewImage && CanvasPanel)
    {
        if (GridPreviewImage->Slot == nullptr)
            CanvasPanel->AddChild(GridPreviewImage);
    }
}

void UUW_InventoryGrid::SetGridPreviewEnabled(bool bEnabled)
{
    if (!GridPreviewImage)
    {
        if (!bEnabled)
            return;

        GridPreviewImage = NewObject<UImage>(CanvasPanel);
        if (!GridPreviewImage || !CanvasPanel)
            return;

        CanvasPanel->AddChild(GridPreviewImage);
        if (GridPreviewMaterial)
            GridPreviewImage->SetBrushFromMaterial(GridPreviewMaterial);
    }

    if (bEnabled)
        GridPreviewImage->SetVisibility(ESlateVisibility::HitTestInvisible);
    else
        GridPreviewImage->SetVisibility(ESlateVisibility::Hidden);
}

void UUW_InventoryGrid::UpdateGridPreviewPosition(const FGeometry& InGeometry, const FVector2D& MousePosition, ULogic* Item)
{
    if (!Item || !GridPreviewImage)
        return;

    if (auto InventoryLogic = Cast<UInventoryLogic>(GetLogic_Implementation()))
    {
        FIntVector2 FinalPosition = GetAdjustedPositionForItem(InGeometry, MousePosition, Item);
        bool bCanPlace = InventoryLogic->IfCanAddItemPosition(Item, FinalPosition, false);

        float CellSize = UUMG_Library::GetCellSize();
        FIntVector2 ItemSize = Item->GetItemSize();
        FVector2D PreviewSize = FVector2D(ItemSize.X * CellSize, ItemSize.Y * CellSize);
        FVector2D PreviewPosition = UUMG_Library::GetInViewport(FinalPosition);

        if (auto DynamicMaterial = GridPreviewImage->GetDynamicMaterial())
            DynamicMaterial->SetScalarParameterValue(PreviewOverlayParameterName, bCanPlace ? 1.0f : 0.0f);

        if (auto CanvasPanelSlot = Cast<UCanvasPanelSlot>(GridPreviewImage->Slot))
        {
            CanvasPanelSlot->SetPosition(PreviewPosition);
            CanvasPanelSlot->SetSize(PreviewSize);
        }
    }
}
