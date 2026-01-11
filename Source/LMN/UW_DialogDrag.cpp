// Fill out your copyright notice in the Description page of Project Settings.

#include "UW_DialogDrag.h"
#include "Blueprint/WidgetBlueprintLibrary.h"
#include "Blueprint/DragDropOperation.h"
#include "Components/CanvasPanel.h"
#include "Components/CanvasPanelSlot.h"
#include "DragDropOperation_UW.h"

FReply UUW_DialogDrag::NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
    if (InMouseEvent.IsMouseButtonDown(EKeys::LeftMouseButton))
    {
        FEventReply EventReply =
            UWidgetBlueprintLibrary::DetectDragIfPressed(InMouseEvent, this, EKeys::LeftMouseButton);
        return EventReply.NativeReply;
    }
    return Super::NativeOnMouseButtonDown(InGeometry, InMouseEvent);
}

void UUW_DialogDrag::NativeOnDragDetected(
    const FGeometry& InGeometry, const FPointerEvent& InMouseEvent, UDragDropOperation*& OutOperation)
{
    auto DragDropOperation = Cast<UDragDropOperation_UW>(
        UWidgetBlueprintLibrary::CreateDragDropOperation(UDragDropOperation_UW::StaticClass()));
    if (!DragDropOperation)
        return;
    DragDropOperation->CursorOffset = InGeometry.AbsoluteToLocal(InMouseEvent.GetScreenSpacePosition());
    this->RemoveFromParent();
    DragDropOperation->DefaultDragVisual = this;
    DragDropOperation->Pivot             = EDragPivot::MouseDown;
    OutOperation                         = DragDropOperation;
}
