// Fill out your copyright notice in the Description page of Project Settings.

#include "UW_HUD.h"
#include "Components/ListView.h"
#include "PC_Main.h"
#include "BFL.h"

void UUW_HUD::NativeOnInitialized()
{
    Super::NativeOnInitialized();

    PC_Main = GetOwningPlayer<APC_Main>();
}

void UUW_HUD::NativeConstruct()
{
    Super::NativeConstruct();

    if (PC_Main)
        PC_Main->OnActorsSelectedChange.AddDynamic(this, &UUW_HUD::UpdateListView);
}

void UUW_HUD::UpdateListView()
{
    if (!PC_Main || !SelectedListView)
        return;
    {
        auto const& Actors = PC_Main->GetAddActorsSelected();
        for (auto const& Actor : Actors)
            if (auto Logic = UBFL::GetLogic(Actor))
                SelectedListView->AddItem(Logic);
    }
    {
        auto const& Actors = PC_Main->GetRemoveActorsSelected();
        for (auto const& Actor : Actors)
            if (auto Logic = UBFL::GetLogic(Actor))
                SelectedListView->RemoveItem(Logic);
    }
}
