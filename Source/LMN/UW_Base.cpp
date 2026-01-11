// Fill out your copyright notice in the Description page of Project Settings.

#include "UW_Base.h"
#include "BFL.h"
#include "Blueprint/WidgetTree.h"

void UUW_Base::ObjectUpdated()
{
    
}

ULogicBase* UUW_Base::GetLogic_Implementation()
{
    return LogicBase;
}

void UUW_Base::SetLogic_Implementation(ULogicBase* NewLogic)
{
    if (LogicBase == NewLogic)
        return;

    if (NewLogic)
        LogicBase = NewLogic;
    else
        LogicBase = nullptr; 

    ObjectUpdated();
}

void UUW_Base::UpdatedChildWidgets()
{
    ObjectUpdatedChildWidgets(LogicBase);
}

void UUW_Base::ObjectUpdatedChildWidgets(ULogicBase* NewLogic)
{
    if (!WidgetTree)
        return;
    TArray<UWidget*> DirectChildren;
    // WidgetTree->GetAllWidgets(DirectChildren);
    WidgetTree->GetChildWidgets(this->GetRootWidget(), DirectChildren);

    for (auto Children : DirectChildren)
        if (Children)
            UBFL::SetLogic(Children, NewLogic);
}