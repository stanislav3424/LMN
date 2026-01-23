// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UW_Base.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "UW_ObjectListView.generated.h"

UCLASS(Blueprintable, Abstract)
class LMN_API UUW_ObjectListView : public UUW_Base, public IUserObjectListEntry
{
    GENERATED_BODY()

protected:
    virtual void NativeOnInitialized() override;

public:
    virtual void NativeOnListItemObjectSet(UObject* ListItemObject) override;
    virtual FReply NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;

protected:
    virtual void ObjectUpdated(UObject* OldLogic, UObject* NewLogic) override;

    UPROPERTY(EditDefaultsOnly, Category = "UMG")
    TSubclassOf<UUserWidget> UserWidgetClass;
};

