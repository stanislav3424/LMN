// Fill out your copyright notice in the Description page of Project Settings.

#include "UW_HealthProgressBar.h"
#include "Logic.h"
#include "BFL.h"

void UUW_HealthProgressBar::ObjectUpdated()
{
    if (Object)
        if (auto Logic = Cast<ULogic>(Object))
        {
            Logic->OnHealthChange.AddUniqueDynamic(this, &UUW_HealthProgressBar::SetPercent);
            Logic->BroadcastOnHealthChange();
        }
        else
            CHECK_FIELD(Logic);
}