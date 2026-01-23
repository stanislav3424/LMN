// Fill out your copyright notice in the Description page of Project Settings.

#include "UW_HealthProgressBar.h"
#include "Logic.h"
#include "BFL.h"

void UUW_HealthProgressBar::ObjectUpdated(UObject* OldLogic, UObject* NewLogic)
{
    Super::ObjectUpdated(OldLogic, NewLogic);

    if (OldLogic)
        if (auto CharacterLogic = Cast<ULogic>(OldLogic))
            CharacterLogic->OnHealthChange.RemoveDynamic(this, &UUW_HealthProgressBar::SetPercent);
        else
            CHECK_FIELD(CharacterLogic);

    if (NewLogic)
        if (auto LocalLogic = Cast<ULogic>(NewLogic))
        {
            LocalLogic->OnHealthChange.AddUniqueDynamic(this, &UUW_HealthProgressBar::SetPercent);
            LocalLogic->BroadcastOnHealthChange();
        }
        else
            CHECK_FIELD(LocalLogic);
}