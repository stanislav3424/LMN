// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UW_Base.h"
#include "UW_Item.generated.h"

class USizeBox;

UCLASS(Blueprintable, Abstract)
class LMN_API UUW_Item : public UUW_Base
{
    GENERATED_BODY()

protected:
    virtual void ObjectUpdated(UObject* OldLogic, UObject* NewLogic);

    UPROPERTY(meta = (BindWidget)) 
    USizeBox* SizeBox;

public:
    void SetRotation(bool bRotated);
    void SetAutoSize();
    void SetSizeBoxSize(float Width, float Height);
    void ClearSizeBoxSize();
};
