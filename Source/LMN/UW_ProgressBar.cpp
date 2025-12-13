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
    SetPercent(Current / Max);
}

void UUW_ProgressBar::SetPercent(float InPercent)
{
    if (ProgressBar)
        ProgressBar->SetPercent(FMath::Clamp(InPercent, 0.0f, 1.0f));
}
