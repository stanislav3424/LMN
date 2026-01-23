// Fill out your copyright notice in the Description page of Project Settings.

#include "UW_InventoryGrid.h"

UUW_InventoryGrid::UUW_InventoryGrid()
{
    bAutoUpdatedChildWidgets = false;
}

void UUW_InventoryGrid::ObjectUpdated(UObject* OldLogic, UObject* NewLogic)
{
    Super::ObjectUpdated(OldLogic, NewLogic);

}
