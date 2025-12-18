// Fill out your copyright notice in the Description page of Project Settings.


#include "WidgetComponentBase.h"

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
