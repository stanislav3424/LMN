// Fill out your copyright notice in the Description page of Project Settings.

#include "UW_ObjectListView.h"
#include "CharacterLogic.h"
#include "UW_StaminaProgressBar.h"
#include "UW_HealthProgressBar.h"
#include "BFL.h"
#include "UW_Icon.h"
#include "UMG_Library.h"

void UUW_ObjectListView::NativeOnInitialized()
{
    Super::NativeOnInitialized();

    CHECK_FIELD(UserWidgetClass);
}

void UUW_ObjectListView::NativeOnListItemObjectSet(UObject* ListItemObject)
{
    UBFL::SetLogic(this, ListItemObject);
}

FReply UUW_ObjectListView::NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
    if (InMouseEvent.IsMouseButtonDown(EKeys::RightMouseButton))
    {
        auto UserWidget = CreateWidget(GetWorld(), UserWidgetClass);
        UBFL::SetLogic(UserWidget, LogicBase);
        UUMG_Library::AddToMainCanvas(GetWorld(), UserWidget);

        return FReply::Handled();
    }

    return Super::NativeOnMouseButtonDown(InGeometry, InMouseEvent);
}

void UUW_ObjectListView::ObjectUpdated()
{
    Super::ObjectUpdated();

    UpdatedChildWidgets();
}
