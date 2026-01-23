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

void UUW_IconBase::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
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

void UUW_IconBase::WidgetSizeChanged(const FVector2D& NewSize)
{
    if (!IconMID)
        return;

    IconMID->SetScalarParameterValue(TEXT("SizeX"), NewSize.X);
    IconMID->SetScalarParameterValue(TEXT("SizeZ"), NewSize.Y);
}
