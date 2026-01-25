// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Logic.h"
#include "EquipmentLogic.generated.h"

enum class EEquipmentSlot : uint8;

UCLASS(Blueprintable)
class LMN_API UEquipmentLogic : public ULogic
{
    GENERATED_BODY()

protected:
    virtual void   LoadingDataTable() override;
    virtual void   OwnerLogicChanged(ULogicBase* OldOwnerLogic, ULogicBase* NewOwnerLogic) override;

private:
    EEquipmentSlot EquipmentSlot;

    UPROPERTY(Transient)
    ACharacter* AttachmentParentCharacter;

public:
    ACharacter* GetAttachmentParentCharacter() const;
    EEquipmentSlot GetEquipmentSlot() const { return EquipmentSlot; };
};
