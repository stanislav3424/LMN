// Fill out your copyright notice in the Description page of Project Settings.

#include "UW_Base.h"
#include "BFL.h"

ULogicBase* UUW_Base::GetLogic_Implementation()
{
    return LogicBase;
}

void UUW_Base::SetLogic_Implementation(ULogicBase* NewLogic)
{
    if (NewLogic)
        LogicBase = NewLogic;
    CHECK_FIELD(LogicBase);

    ObjectUpdated();
}