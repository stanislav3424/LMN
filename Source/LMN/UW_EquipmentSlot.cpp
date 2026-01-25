// Fill out your copyright notice in the Description page of Project Settings.

#include "UW_EquipmentSlot.h"
#include "CharacterLogic.h"
#include "Blueprint/DragDropOperation.h"
#include "Blueprint/WidgetBlueprintLibrary.h"
#include "DragDropOperation_Item.h"
#include "UW_Item.h"
#include "BFL.h"

UUW_EquipmentSlot::UUW_EquipmentSlot()
{
    EquipmentSlot = EEquipmentSlot::None;   
    bAutoUpdatedChildWidgets = false;
}

void UUW_EquipmentSlot::ObjectUpdated(UObject* OldLogic, UObject* NewLogic)
{
    Super::ObjectUpdated(OldLogic, NewLogic);

    if (EquipmentSlot == EEquipmentSlot::None)
        return;

    auto CharacterLogic = Cast<UCharacterLogic>(NewLogic);
    if (!CharacterLogic)
        return;

    CharacterLogic->OnEquipmentChanged.AddUniqueDynamic(this, &UUW_EquipmentSlot::OnEquipmentChanged);
    CharacterLogic->OnEquipmentChanged.Broadcast();
}

void UUW_EquipmentSlot::OnEquipmentChanged()
{
    auto CharacterLogic = Cast<UCharacterLogic>(GetLogic_Implementation());
    if (!CharacterLogic)
        return;
    auto Item = CharacterLogic->GetItemInSlot(EquipmentSlot);

    if (UW_Item)
        UW_Item->SetVisibility(Item ? ESlateVisibility::Visible : ESlateVisibility::Hidden);

    if (ItemInSlot == Item)
        return;
    ItemInSlot = Item;
    ObjectUpdatedChildWidgets(ItemInSlot);
}

FReply UUW_EquipmentSlot::NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
    if (InMouseEvent.IsMouseButtonDown(EKeys::LeftMouseButton))
    {
        FEventReply EventReply =
            UWidgetBlueprintLibrary::DetectDragIfPressed(InMouseEvent, this, EKeys::LeftMouseButton);
        return EventReply.NativeReply;
    }
    return Super::NativeOnMouseButtonDown(InGeometry, InMouseEvent);
}

void UUW_EquipmentSlot::NativeOnDragDetected(
    const FGeometry& InGeometry, const FPointerEvent& InMouseEvent, UDragDropOperation*& OutOperation)
{
    auto DragDropOperation = Cast<UDragDropOperation_Item>(
        UWidgetBlueprintLibrary::CreateDragDropOperation(UDragDropOperation_Item::StaticClass()));
    if (!DragDropOperation)
        return;

    auto DragVisual                      = CreateWidget(GetOwningPlayer(), UUW_Item::StaticClass());
    UBFL::SetLogic(DragVisual, GetLogic());
    DragDropOperation->DefaultDragVisual = DragVisual;
    DragDropOperation->Pivot             = EDragPivot::CenterCenter;
    OutOperation                         = DragDropOperation;
}
