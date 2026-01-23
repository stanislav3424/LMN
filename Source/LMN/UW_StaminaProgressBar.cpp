// Fill out your copyright notice in the Description page of Project Settings.

#include "UW_StaminaProgressBar.h"
#include "CharacterLogic.h"
#include "BFL.h"

void UUW_StaminaProgressBar::ObjectUpdated(UObject* OldLogic, UObject* NewLogic)
{
    Super::ObjectUpdated(OldLogic, NewLogic);

    if (OldLogic)
        if (auto CharacterLogic = Cast<UCharacterLogic>(OldLogic))
            CharacterLogic->OnStaminaChanged.RemoveDynamic(this, &UUW_StaminaProgressBar::SetPercent);
        else
            CHECK_FIELD(CharacterLogic);

    if (NewLogic)
        if (auto CharacterLogic = Cast<UCharacterLogic>(NewLogic))
        {
            CharacterLogic->OnStaminaChanged.AddUniqueDynamic(this, &UUW_StaminaProgressBar::SetPercent);
            CharacterLogic->BroadcastOnStaminaChanged();
        }
        else
            CHECK_FIELD(CharacterLogic);
}
