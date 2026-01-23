// Fill out your copyright notice in the Description page of Project Settings.

#include "UW_Inventory.h"
#include "CharacterLogic.h"
#include "UW_InventoryGrid.h"

UUW_Inventory::UUW_Inventory()
{
    bAutoUpdatedChildWidgets = false;
}

void UUW_Inventory::ObjectUpdated(UObject* OldLogic, UObject* NewLogic)
{
    Super::ObjectUpdated(OldLogic, NewLogic);

    auto CharacterLogic = Cast<UCharacterLogic>(NewLogic);
    if (!CharacterLogic)
        return;

    CharacterLogic->OnEquipmentChanged.AddUniqueDynamic(this, &UUW_Inventory::OnEquipmentChanged);
    CharacterLogic->OnEquipmentChanged.Broadcast();
}

void UUW_Inventory::OnEquipmentChanged()
{
    auto CharacterLogic = Cast<UCharacterLogic>(GetLogic_Implementation());
    if (!CharacterLogic)
        return;
    auto Item = CharacterLogic->GetItemInSlot(EEquipmentSlot::Backpack);

    if (UW_InventoryGrid)
        UW_InventoryGrid->SetVisibility(Item ? ESlateVisibility::Visible : ESlateVisibility::Hidden);

    if (Backpack == Item)
        return;
    Backpack = Item;
    ObjectUpdatedChildWidgets(Item);
}