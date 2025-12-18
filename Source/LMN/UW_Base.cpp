// Fill out your copyright notice in the Description page of Project Settings.

#include "UW_Base.h"
#include "BFL.h"

void UUW_Base::ObjectUpdated()
{
    TArray<UWidget*> DirectChildren;
    UBFL::GetDirectChildWidgets(this, DirectChildren);

    for (auto Children : DirectChildren)
        if (Children)
            UBFL::SetLogic(Children, LogicBase);
}

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