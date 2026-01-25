// Fill out your copyright notice in the Description page of Project Settings.

#include "UW_IconBase.h"
#include "Components/Image.h"

void UUW_IconBase::ObjectUpdated(UObject* OldLogic, UObject* NewLogic)
{
    Super::ObjectUpdated(OldLogic, NewLogic);

    if (IconImage && !IconMID)
        IconMID = IconImage->GetDynamicMaterial();
}

void UUW_IconBase::NativeConstruct()
{
    Super::NativeConstruct();

    LastWidgetSize = FVector2D::ZeroVector;
}
