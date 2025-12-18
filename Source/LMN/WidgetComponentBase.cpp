// Fill out your copyright notice in the Description page of Project Settings.

#include "WidgetComponentBase.h"
#include "BFL.h"

ULogicBase* UWidgetComponentBase::GetLogic_Implementation()
{
    return LogicBase;
}

void UWidgetComponentBase::SetLogic_Implementation(ULogicBase* NewLogic)
{
    if (NewLogic)
    {
        LogicBase = NewLogic;
        LogicUpdated();
    }
}

void UWidgetComponentBase::LogicUpdated()
{
    if (LogicBase)
        if (auto WidgetLocal = GetWidget())
        {
            UBFL::SetLogic(WidgetLocal, LogicBase);
        }
}
