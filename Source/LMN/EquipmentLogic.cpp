// Fill out your copyright notice in the Description page of Project Settings.

#include "EquipmentLogic.h"
#include "CharacterLogic.h"
#include "GI_Main.h"
#include "BFL.h"
#include "GameFramework/Character.h"

void UEquipmentLogic::LoadingDataTable()
{
    Super::LoadingDataTable();
    if (auto const* Row = LogicRowHandle.DataTable->FindRow<FEquipmentRow>(LogicRowHandle.RowName, TEXT("")))
    {
        EquipmentSlot = Row->EquipmentSlot;
    }

}

void UEquipmentLogic::OwnerLogicChanged(ULogicBase* OldOwnerLogic, ULogicBase* NewOwnerLogic)
{

    AttachmentParentCharacter = nullptr;

    if (NewOwnerLogic)
        if (auto Character = Cast<ACharacter>(NewOwnerLogic->GetRepresentationActor()))
            AttachmentParentCharacter = Character;
    if (AttachmentParentCharacter)
        if (IsValid(RepresentationActor))
            if (auto Mesh = AttachmentParentCharacter->GetMesh())
                RepresentationActor->AttachToComponent(Mesh, FAttachmentTransformRules::SnapToTargetNotIncludingScale,
                    UBFL::GetSocketNameFromEnum(EquipmentSlot));
}

ACharacter* UEquipmentLogic::GetAttachmentParentCharacter() const
{
    return IsValid(AttachmentParentCharacter) ? AttachmentParentCharacter : nullptr;
}
