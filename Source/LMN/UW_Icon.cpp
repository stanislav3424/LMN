// Fill out your copyright notice in the Description page of Project Settings.

#include "UW_Icon.h"
#include "IconRendering.h"
#include "Components/Image.h"

void UUW_Icon::ObjectUpdated(UObject* OldLogic, UObject* NewLogic)
{
    Super::ObjectUpdated(OldLogic, NewLogic);

    if (NewLogic && IconMID)
        AIconRendering::GetIcon(NewLogic, IconMID);
}

