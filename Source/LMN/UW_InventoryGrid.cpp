// Fill out your copyright notice in the Description page of Project Settings.

#include "UW_InventoryGrid.h"
#include "BFL.h"
#include "InventoryLogic.h"
#include "UMG_Library.h"
#include "Components/SizeBox.h"
#include "Components/CanvasPanel.h"
#include "Components/CanvasPanelSlot.h"
#include "DragDropOperation_Item.h"
#include "UW_Item.h"

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

void UUW_InventoryGrid::NativeOnDragDetected(
    const FGeometry& InGeometry, const FPointerEvent& InMouseEvent, UDragDropOperation*& OutOperation)
{
}

bool UUW_InventoryGrid::NativeOnDrop(
    const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation)
{
    if (auto InventoryLogic = Cast<UInventoryLogic>(GetLogic_Implementation()))
        if (auto ItemOperation = Cast<UDragDropOperation_Item>(InOperation))
        {
            auto Payload = Cast<ULogic>(ItemOperation->Payload);
            InventoryLogic->AddItem(Payload);
            return true;
        }
    return false;
}

void UUW_InventoryGrid::NativeOnDragEnter(
    const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation)
{
    if (auto ItemOperation = Cast<UDragDropOperation_Item>(InOperation))
    {

    }
}

void UUW_InventoryGrid::NativeOnDragLeave(const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation)
{
    if (auto ItemOperation = Cast<UDragDropOperation_Item>(InOperation))
    {

    }
}

void UUW_InventoryGrid::OnInventoryChanged()
{
    if (!CanvasPanel || !ItemWidgetClass)
        return;

    CanvasPanel->ClearChildren();
    if (auto InventoryLogic = Cast<UInventoryLogic>(GetLogic_Implementation()))
    {
        auto const& ItemsPosition = InventoryLogic->GetItemsPosition();
        for (auto const& ItemInfo : ItemsPosition)
        {
            auto ItemWidget = CreateWidget<UUW_Item>(GetOwningPlayer(), ItemWidgetClass);
            if (ItemWidget)
            {
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
        }
    }
    else
    {
    }
}
