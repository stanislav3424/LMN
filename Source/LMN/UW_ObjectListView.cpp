// Fill out your copyright notice in the Description page of Project Settings.

#include "UW_ObjectListView.h"
#include "CharacterLogic.h"
#include "UW_StaminaProgressBar.h"
#include "UW_HealthProgressBar.h"
#include "BFL.h"
#include "UW_Icon.h"

void UUW_ObjectListView::NativeOnListItemObjectSet(UObject* ListItemObject)
{
    UBFL::SetLogic(this, ListItemObject);
}

void UUW_ObjectListView::ObjectUpdated()
{
    if (LogicBase && StaminaProgressBar && HealthProgressBar && UW_Icon)
    {
        UBFL::SetLogic(StaminaProgressBar, LogicBase);
        UBFL::SetLogic(HealthProgressBar, LogicBase);
        UBFL::SetLogic(UW_Icon, LogicBase);
    }
}
