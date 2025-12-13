// Fill out your copyright notice in the Description page of Project Settings.

#include "UW_HealthProgressBar.h"
#include "Logic.h"
#include "BFL.h"

void UUW_HealthProgressBar::NativeConstruct()
{
    Super::NativeConstruct();

    if (Object)
        if (auto Logic = Cast<ULogic>(Object))
            Logic->OnHealthChange.AddDynamic(this, &UUW_HealthProgressBar::SetPercent);
        else
            CHECK_FIELD(Logic);
}