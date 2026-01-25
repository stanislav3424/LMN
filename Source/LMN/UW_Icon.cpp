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


void UUW_Icon::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
    Super::NativeTick(MyGeometry, InDeltaTime);

    const FVector2D CurrentSize = MyGeometry.GetLocalSize();
    const float     Epsilon     = 0.5f;

    if (!LastWidgetSize.Equals(CurrentSize, Epsilon))
    {
        LastWidgetSize = CurrentSize;
        WidgetSizeChanged(CurrentSize);
    }
}

void UUW_Icon::WidgetSizeChanged(const FVector2D& NewSize)
{
    if (!IconMID)
        return;

    IconMID->SetScalarParameterValue(TEXT("SizeX"), NewSize.X);
    IconMID->SetScalarParameterValue(TEXT("SizeZ"), NewSize.Y);
}
