// Fill out your copyright notice in the Description page of Project Settings.

#include "UW_Item.h"
#include "Logic.h"
#include "UMG_Library.h"
#include "Components/SizeBox.h"
#include "Blueprint/WidgetBlueprintLibrary.h"
#include "DragDropOperation_Item.h"
#include "BFL.h"

void UUW_Item::ObjectUpdated(UObject* OldLogic, UObject* NewLogic)
{
    Super::ObjectUpdated(OldLogic, NewLogic);
}

FReply UUW_Item::NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
    if (InMouseEvent.IsMouseButtonDown(EKeys::LeftMouseButton))
    {
        FEventReply EventReply =
            UWidgetBlueprintLibrary::DetectDragIfPressed(InMouseEvent, this, EKeys::LeftMouseButton);
        return EventReply.NativeReply;
    }
    return Super::NativeOnMouseButtonDown(InGeometry, InMouseEvent);
}

void UUW_Item::NativeOnDragDetected(
    const FGeometry& InGeometry, const FPointerEvent& InMouseEvent, UDragDropOperation*& OutOperation)
{
    auto DragDropOperation = Cast<UDragDropOperation_Item>(
        UWidgetBlueprintLibrary::CreateDragDropOperation(UDragDropOperation_Item::StaticClass()));
    if (!DragDropOperation)
        return;

    auto DragVisual = CreateWidget<UUW_Item>(GetOwningPlayer(), this->GetClass());
    if (!DragVisual)
        return;
    UBFL::SetLogic(DragVisual, GetLogic_Implementation());
    DragVisual->SetAutoSize();
    DragDropOperation->DefaultDragVisual = DragVisual;
    DragDropOperation->Pivot             = EDragPivot::CenterCenter;
    DragDropOperation->Payload           = GetLogic_Implementation();
    OutOperation                         = DragDropOperation;
}

void UUW_Item::SetRotation(bool bRotated)
{
}

void UUW_Item::SetAutoSize()
{
    if (auto LocalLogic = Cast<ULogic>(GetLogic_Implementation()))
    {
        auto ItemSize       = LocalLogic->GetItemSize();
        auto SizeInViewport = UUMG_Library::GetInViewport(ItemSize);
        SetSizeBoxSize(SizeInViewport.X, SizeInViewport.Y);
    }
}

void UUW_Item::SetSizeBoxSize(float Width, float Height)
{
    if (!SizeBox)
        return;
    SizeBox->SetWidthOverride(Width);
    SizeBox->SetHeightOverride(Height);
}

void UUW_Item::ClearSizeBoxSize()
{
    if (!SizeBox)
        return;
    SizeBox->ClearWidthOverride();
    SizeBox->ClearHeightOverride();
}