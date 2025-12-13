// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UW_Base.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "UW_ObjectListView.generated.h"

class UCharacterLogic;
class UUW_StaminaProgressBar;
class UUW_HealthProgressBar;

UCLASS(Blueprintable, Abstract)
class LMN_API UUW_ObjectListView : public UUW_Base, public IUserObjectListEntry
{
    GENERATED_BODY()

public:
    virtual void NativeOnListItemObjectSet(UObject* ListItemObject) override;

protected:
    UPROPERTY(meta = (BindWidget))
    UUW_StaminaProgressBar* StaminaProgressBar;

    UPROPERTY(meta = (BindWidget))
    UUW_HealthProgressBar* HealthProgressBar;
};
