// Fill out your copyright notice in the Description page of Project Settings.

#include "ProgressBarWidgetComponent.h"
#include "BFL.h"

void UProgressBarWidgetComponent::LogicUpdated()
{
    if (LogicBase)
        if (auto WidgetLocal = GetWidget())
        {
            UBFL::SetLogic(WidgetLocal, LogicBase);
        }
}
