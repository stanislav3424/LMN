// Fill out your copyright notice in the Description page of Project Settings.

#include "UW_StaminaProgressBar.h"
#include "CharacterLogic.h"
#include "BFL.h"

void UUW_StaminaProgressBar::NativeConstruct()
{
    Super::NativeConstruct();

    if (Object)
        if (auto Logic = Cast<UCharacterLogic>(Object))
            Logic->OnStaminaChanged.AddDynamic(this, &UUW_StaminaProgressBar::SetPercent);
        else
            CHECK_FIELD(Logic);
}
