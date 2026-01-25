// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UW_IconBase.h"
#include "UW_Icon.generated.h"

UCLASS(Blueprintable, Abstract)
class LMN_API UUW_Icon : public UUW_IconBase
{
    GENERATED_BODY()

protected:
    virtual void ObjectUpdated(UObject* OldLogic, UObject* NewLogic) override;
    virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;
    void         WidgetSizeChanged(const FVector2D& NewSize);
};
