// Fill out your copyright notice in the Description page of Project Settings.

#include "UW_Base.h"
#include "BFL.h"
#include "Blueprint/WidgetTree.h"

void UUW_Base::ObjectUpdated(UObject* OldLogic, UObject* NewLogic)
{
}

ULogicBase* UUW_Base::GetLogic_Implementation()
{
    return Cast<ULogicBase>(Logic);
}

void UUW_Base::SetLogic_Implementation(ULogicBase* NewLogic)
{
    if (Logic == NewLogic)
        return;

    auto OldLogic = Logic;
    Logic = NewLogic;
    ObjectUpdated(OldLogic, NewLogic);

    if (bAutoUpdatedChildWidgets)
        UpdatedChildWidgets();
}

void UUW_Base::UpdatedChildWidgets()
{
    ObjectUpdatedChildWidgets(Logic);
}

void UUW_Base::ObjectUpdatedChildWidgets(UObject* NewLogic)
{
    if (!WidgetTree)
        return;

    TArray<UWidget*> DirectChildren;
    WidgetTree->GetChildWidgets(this->GetRootWidget(), DirectChildren);
    for (auto Children : DirectChildren)
        if (Children)
            UBFL::SetLogic(Children, NewLogic);
}