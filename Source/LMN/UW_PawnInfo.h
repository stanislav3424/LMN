// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UW_DialogDrag.h"
#include "UW_PawnInfo.generated.h"

UCLASS(Blueprintable, Abstract)
class LMN_API UUW_PawnInfo : public UUW_DialogDrag
{
    GENERATED_BODY()

protected:
    virtual void ObjectUpdated();
};
