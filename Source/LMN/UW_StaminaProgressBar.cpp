// Fill out your copyright notice in the Description page of Project Settings.

#include "UW_StaminaProgressBar.h"
#include "CharacterLogic.h"
#include "BFL.h"

void UUW_StaminaProgressBar::ObjectUpdated()
{
    if (LogicBase)
        if (auto Logic = Cast<UCharacterLogic>(LogicBase))
        {
            Logic->OnStaminaChanged.AddUniqueDynamic(this, &UUW_StaminaProgressBar::SetPercent);
            Logic->BroadcastOnStaminaChanged();
        }
        else
            CHECK_FIELD(Logic);
}
