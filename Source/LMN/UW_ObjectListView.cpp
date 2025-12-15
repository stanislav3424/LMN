// Fill out your copyright notice in the Description page of Project Settings.

#include "UW_ObjectListView.h"
#include "CharacterLogic.h"
#include "UW_StaminaProgressBar.h"
#include "UW_HealthProgressBar.h"
#include "BFL.h"

void UUW_ObjectListView::NativeOnListItemObjectSet(UObject* ListItemObject)
{
    SetObject(ListItemObject);
}

void UUW_ObjectListView::ObjectUpdated()
{
    auto CharacterLogic = Cast<UCharacterLogic>(Object);

    CHECK_FIELD(CharacterLogic);

    if (CharacterLogic && StaminaProgressBar && HealthProgressBar)
    {
        StaminaProgressBar->SetObject(CharacterLogic);
        HealthProgressBar->SetObject(CharacterLogic);
    }
}
