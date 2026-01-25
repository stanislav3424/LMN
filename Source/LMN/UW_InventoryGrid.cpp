// Fill out your copyright notice in the Description page of Project Settings.

#include "UW_InventoryGrid.h"
#include "BFL.h"

UUW_InventoryGrid::UUW_InventoryGrid()
{
    bAutoUpdatedChildWidgets = true;
}

void UUW_InventoryGrid::ObjectUpdated(UObject* OldLogic, UObject* NewLogic)
{
    Super::ObjectUpdated(OldLogic, NewLogic);
}
