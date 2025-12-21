// Fill out your copyright notice in the Description page of Project Settings.

#include "CharacterLogic.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Character.h"
#include "BFL.h"
#include "EquipmentLogic.h"
#include "GI_Main.h"

void UCharacterLogic::LoadingDataTable()
{
    Super::LoadingDataTable();

    if (auto const* Row = LogicRowHandle.DataTable->FindRow<FCharacterLogicRow>(LogicRowHandle.RowName, TEXT("")))
    {
        MaxStamina       = Row->MaxStamina;
        CurrentStamina   = MaxStamina;
        StaminaDrainRate = Row->StaminaDrainRate;
        StaminaRegenRate = Row->StaminaRegenRate;
        MinStaminaToRun  = Row->MinStaminaToRun;
        MaxWalkSpeed     = Row->MaxWalkSpeed;
        MaxRunSpeed      = Row->MaxRunSpeed;
    }
}

void UCharacterLogic::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    StaminaTick(DeltaTime);
    UpdateMovementState();
}

void UCharacterLogic::RepresentationChanged()
{
    Super::RepresentationChanged();

    SetMovementState(EMovementState::Idle);
    SetTypeAction(ETypeAction::Idle);

    if (RepresentationActor)
        if (auto Character = Cast<ACharacter>(RepresentationActor))
            CharacterMovementComponentRef = Character->GetCharacterMovement();
    SetCanRan(false);
}

void UCharacterLogic::SetMovementState(EMovementState NewMovementState)
{
    if (!IsValid(RepresentationActor))
        return;
    MovementState = NewMovementState;
    OnMovementStateChanged.Broadcast(MovementState);
}

void UCharacterLogic::SetTypeAction(ETypeAction MewTypeAction)
{
    if (!IsValid(RepresentationActor))
        return;

    TypeAction = MewTypeAction;
    OnTypeActionChanged.Broadcast(TypeAction);
}

void UCharacterLogic::CommandShootStarted()
{
    if (TypeAction == ETypeAction::Idle)
        SetTypeAction(ETypeAction::Shooting);

}

void UCharacterLogic::CommandShootCompleted()
{
    if (TypeAction == ETypeAction::Shooting)
        SetTypeAction(ETypeAction::Idle);
}

void UCharacterLogic::CommandReloadWeapon()
{
    if (TypeAction == ETypeAction::Shooting)
        CommandShootCompleted();
    if (TypeAction == ETypeAction::Idle)
        SetTypeAction(ETypeAction::Reloading);
}

void UCharacterLogic::CommandAbortReloadWeapon()
{
}

void UCharacterLogic::ShootCompleted()
{
    SetTypeAction(ETypeAction::Idle);
}

void UCharacterLogic::ReloadCompleted()
{
    SetTypeAction(ETypeAction::Idle);
}

void UCharacterLogic::BroadcastOnStaminaChanged() const
{
    OnStaminaChanged.Broadcast(CurrentStamina, MaxStamina);
}

void UCharacterLogic::StaminaTick(float DeltaTime)
{
    auto OldStamina = CurrentStamina;
    if (MovementState != EMovementState::Run)
    {
        CurrentStamina += StaminaRegenRate;
        CurrentStamina = FMath::Clamp(CurrentStamina, 0.f , MaxStamina);

    }
    else
    {
        CurrentStamina -= StaminaDrainRate;
        CurrentStamina = FMath::Clamp(CurrentStamina, 0.f, MaxStamina);
        if (CurrentStamina <= 0.f)
            SetCanRan(false);
    }
    if (OldStamina != CurrentStamina)
        BroadcastOnStaminaChanged();
}

void UCharacterLogic::UpdateMovementState()
{
    if (!IsValid(RepresentationActor))
        return;

    FVector CurrentVelocity = RepresentationActor->GetVelocity();
    float NewSpeed = CurrentVelocity.Size();

    if (Speed == NewSpeed)
        return;
    Speed = NewSpeed;

    const float MinMovementThreshold = 1.0f;

    bIsMove = Speed > MinMovementThreshold;

    if (!bIsMove)
        SetMovementState(EMovementState::Idle);
    else
    {
        if (bCanRan)
            SetMovementState(EMovementState::Run);
        else
            SetMovementState(EMovementState::Walk);
    }
}

void UCharacterLogic::SetCanRan(bool bNewCanRan)
{
    if (bNewCanRan == false)
        bCanRan = false;
    else
        bCanRan = CurrentStamina > MinStaminaToRun ? true : false;

    if (CharacterMovementComponentRef)
        CharacterMovementComponentRef->MaxWalkSpeed = bCanRan ? MaxRunSpeed : MaxWalkSpeed;
}

bool UCharacterLogic::EquipItem(ULogicBase* Logic, EEquipmentSlot TargetEquipmentSlot)
{
    if (!EquipmentMap.Contains(TargetEquipmentSlot))
        if (Logic)
            if (auto EquipmentLogic = Cast<UEquipmentLogic>(Logic))
            {
                auto EquipmentSlot = EquipmentLogic->GetEquipmentSlot();

                if (EquipmentSlot == TargetEquipmentSlot)
                {
                    EquipmentMap.Add(TargetEquipmentSlot, EquipmentLogic);
                    EquipmentLogic->SetOwnerLogic(this);
                    OnEquipmentChanged.Broadcast();
                }
            }
    return false;
}

bool UCharacterLogic::EquipItem(AActor* Actor, EEquipmentSlot TargetEquipmentSlot)
{
    return EquipItem(UBFL::GetLogic(Actor), TargetEquipmentSlot);
}

ULogicBase* UCharacterLogic::TakeOff(EEquipmentSlot TargetEquipmentSlot)
{
    UEquipmentLogic* Logic = nullptr;
    if (EquipmentMap.RemoveAndCopyValue(TargetEquipmentSlot, Logic))
    {
        Logic->RemoveOwnerLogic();
        OnEquipmentChanged.Broadcast();
        return Logic;
    }
    return nullptr;
}
