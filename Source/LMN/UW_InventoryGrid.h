// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UW_Base.h"
#include "UW_InventoryGrid.generated.h"

UCLASS(Blueprintable, Abstract)
class LMN_API UUW_InventoryGrid : public UUW_Base
{
    GENERATED_BODY()

protected:
    virtual void ObjectUpdated(UObject* OldLogic, UObject* NewLogic);
};
