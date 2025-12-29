// Fill out your copyright notice in the Description page of Project Settings.

#include "UW_HUD.h"
#include "Components/ListView.h"
#include "PC_Main.h"
#include "BFL.h"
#include "GM_Main.h"
#include "Components/Button.h"
#include "UW_DialogBase.h"

void UUW_HUD::NativeOnInitialized()
{
    Super::NativeOnInitialized();


    if (PC_Main)
        PC_Main->OnActorsSelectedChange.AddUniqueDynamic(this, &UUW_HUD::UpdateListView);

    if (MenuButton)
        MenuButton->OnClicked.AddUniqueDynamic(this, &UUW_HUD::OnMenuButtonClicked);

    CHECK_FIELD(MenuUserWidgetClass);
    if (MenuUserWidgetClass)
        MenuUserWidget = CreateWidget<UUW_DialogBase>(PC_Main, MenuUserWidgetClass);
    CHECK_FIELD(MenuUserWidget);
    if (MenuUserWidget)
        MenuUserWidget->AddToViewport(100);
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

void UUW_HUD::OnMenuButtonClicked()
{
    if (MenuUserWidget)
        MenuUserWidget->Switch();
}

void UUW_HUD::GameStatusChanged()
{
    if (GameStatus == EGameStatus::NotStarted)
        OnMenuButtonClicked();
}
