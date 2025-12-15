// Fill out your copyright notice in the Description page of Project Settings.

#include "UW_ProgressBar.h"
#include "Components/ProgressBar.h"
#include "BFL.h"


void UUW_ProgressBar::NativeConstruct()
{
    Super::NativeConstruct();
}

void UUW_ProgressBar::SetPercent(float Current, float Max)
{
    if (ProgressBar)
        ProgressBar->SetPercent(FMath::Clamp(Current / Max, 0.0f, 1.0f));
}

