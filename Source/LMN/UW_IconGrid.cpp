// Fill out your copyright notice in the Description page of Project Settings.

#include "UW_IconGrid.h"
#include "InventoryLogic.h"

void UUW_IconGrid::ObjectUpdated(UObject* OldLogic, UObject* NewLogic)
{
    Super::ObjectUpdated(OldLogic, NewLogic);

    if (!IconMID)
        return;

    if (auto Inventory = Cast<UInventoryLogic>(NewLogic))
    {
        auto Size = Inventory->GetInventorySize();
        IconMID->SetScalarParameterValue(TEXT("SizeX"), Size.X);
        IconMID->SetScalarParameterValue(TEXT("SizeZ"), Size.Y);
    }
}
