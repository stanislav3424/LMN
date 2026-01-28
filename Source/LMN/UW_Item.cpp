// Fill out your copyright notice in the Description page of Project Settings.

#include "UW_Item.h"
#include "Logic.h"
#include "UMG_Library.h"
#include "Components/SizeBox.h"
#include "BFL.h"

void UUW_Item::ObjectUpdated(UObject* OldLogic, UObject* NewLogic)
{
    Super::ObjectUpdated(OldLogic, NewLogic);
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