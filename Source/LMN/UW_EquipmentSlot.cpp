// Fill out your copyright notice in the Description page of Project Settings.

#include "UW_EquipmentSlot.h"
#include "CharacterLogic.h"
#include "UW_Item.h"

UUW_EquipmentSlot::UUW_EquipmentSlot()
{
    EquipmentSlot = EEquipmentSlot::None;   
}

void UUW_EquipmentSlot::ObjectUpdated()
{
    Super::ObjectUpdated();

    if (EquipmentSlot == EEquipmentSlot::None || !LogicBase)
        return;

    auto CharacterLogic = Cast<UCharacterLogic>(LogicBase);
    if (!CharacterLogic)
        return;

    CharacterLogic->OnEquipmentChanged.AddUniqueDynamic(this, &UUW_EquipmentSlot::OnEquipmentChanged);
    CharacterLogic->OnEquipmentChanged.Broadcast();
}

void UUW_EquipmentSlot::SetEquipmentSlot(EEquipmentSlot NewEquipmentSlot)
{
    EquipmentSlot = NewEquipmentSlot;

    ObjectUpdated();
}

void UUW_EquipmentSlot::OnEquipmentChanged()
{
    auto CharacterLogic = Cast<UCharacterLogic>(LogicBase);
    if (!CharacterLogic)
        return;
    auto Item = CharacterLogic->GetItemInSlot(EquipmentSlot);

    if (UW_Item && Item)
        UW_Item->SetVisibility(ESlateVisibility::Visible);
    else
        UW_Item->SetVisibility(ESlateVisibility::Hidden);

    if (ItemInSlot == Item)
        return;
    ItemInSlot = Item;
    ObjectUpdatedChildWidgets(ItemInSlot);
}
