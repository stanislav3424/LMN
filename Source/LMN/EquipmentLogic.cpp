// Fill out your copyright notice in the Description page of Project Settings.

#include "EquipmentLogic.h"
#include "CharacterLogic.h"
#include "GI_Main.h"

void UEquipmentLogic::LoadingDataTable()
{
    Super::LoadingDataTable();
    if (auto const* Row = LogicRowHandle.DataTable->FindRow<FEquipmentRow>(LogicRowHandle.RowName, TEXT("")))
    {
        EquipmentSlot = Row->EquipmentSlot;
    }

}