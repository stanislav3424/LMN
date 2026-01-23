// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UW_IconBase.h"
#include "UW_IconGrid.generated.h"

UCLASS(Blueprintable, Abstract)
class LMN_API UUW_IconGrid : public UUW_IconBase
{
	GENERATED_BODY()

protected:
    virtual void ObjectUpdated(UObject* OldLogic, UObject* NewLogic) override;
};
