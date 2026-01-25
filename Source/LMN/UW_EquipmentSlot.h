// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UW_Base.h"
#include "UW_EquipmentSlot.generated.h"

enum class EEquipmentSlot : uint8;
class ULogicBase;
class UUW_Item;

UCLASS(Blueprintable, Abstract)
class LMN_API UUW_EquipmentSlot : public UUW_Base
{
    GENERATED_BODY()

    UUW_EquipmentSlot();

protected:
    virtual void ObjectUpdated(UObject* OldLogic, UObject* NewLogic);

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "EquipmentSlot")
    EEquipmentSlot EquipmentSlot;

    UPROPERTY(Transient)
    ULogicBase* ItemInSlot;

    UPROPERTY(meta = (BindWidget))
    UUW_Item* UW_Item;

public:
    UFUNCTION()
    void OnEquipmentChanged();

    EEquipmentSlot GetEquipmentSlot() const { return EquipmentSlot; }

protected:
    virtual FReply NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;
    virtual void   NativeOnDragDetected(
          const FGeometry& InGeometry, const FPointerEvent& InMouseEvent, UDragDropOperation*& OutOperation) override;

};
