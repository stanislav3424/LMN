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
}

void UCharacterLogic::RepresentationChanged()
{
    SetMovementState(EMovementState::Idle);
    //SetTypeMovementState(ETypeMovementState::Unarmed);
    SetTypeAction(ETypeAction::Idle);

    if (RepresentationActor)
        if (auto Character = Cast<ACharacter>(RepresentationActor))
            CharacterMovementComponentRef = Character->GetCharacterMovement();
}

void UCharacterLogic::SetMovementState(EMovementState NewMovementState)
{
    if (!IsValid(RepresentationActor))
        return;

    MovementState = NewMovementState;
    
    if (CharacterMovementComponentRef)
        CharacterMovementComponentRef->MaxWalkSpeed = MovementState == EMovementState::Run ? MaxRunSpeed : MaxWalkSpeed;

    OnMovementStateChanged.Broadcast(MovementState);
}

//void UCharacterLogic::SetTypeMovementState(ETypeMovementState NewTypeMovementState)
//{
//    TypeMovementState = NewTypeMovementState;
//    OnTypeMovementStateChanged.Broadcast(TypeMovementState);
//}

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

void UCharacterLogic::CommandReloadWeaponCompleted()
{
}

void UCharacterLogic::CommandTurnTarget(FRotator const& Rotator)
{
}

void UCharacterLogic::CommandMove()
{
    if (MovementState == EMovementState::Idle && TypeAction != ETypeAction::Equipment &&
        TypeAction != ETypeAction::Interaction)
        SetMovementState(EMovementState::Walk);
}

void UCharacterLogic::CommandMoveCompleted()
{
    if (MovementState == EMovementState::Walk || MovementState == EMovementState::Run)
        SetMovementState(EMovementState::Idle);
}

void UCharacterLogic::CommandRun()
{
    if (CurrentStamina >= MinStaminaToRun)
        if (MovementState == EMovementState::Walk)
        {
            if (TypeAction == ETypeAction::Reloading)
                CommandReloadWeaponCompleted();
            else if (TypeAction == ETypeAction::Shooting)
                CommandShootCompleted();

            SetMovementState(EMovementState::Run);
        }
}

void UCharacterLogic::CommandRunCompleted()
{
    if (MovementState == EMovementState::Run)
        SetMovementState(EMovementState::Walk);
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
            SetMovementState(EMovementState::Walk);
    }
    if (OldStamina != CurrentStamina)
        BroadcastOnStaminaChanged();
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
