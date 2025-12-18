// Fill out your copyright notice in the Description page of Project Settings.

#include "Logic.h"
#include "BFL.h"
#include "GI_Main.h"

void ULogic::LoadingDataTable()
{
    Super::LoadingDataTable();

    if (auto const* Row = LogicRowHandle.DataTable->FindRow<FLogicRow>(LogicRowHandle.RowName, TEXT("")))
    {
        bCanTakeDamage = Row->bCanTakeDamage;
        MaxHealth = Row->MaxHealth;
        CurrentHealth = MaxHealth;
    }
}

void ULogic::BindEvents()
{
    Super::BindEvents();

    if (IsValid(RepresentationActor))
    {
        if (!RepresentationActor->OnTakeAnyDamage.IsAlreadyBound(this, &ULogic::HandleOwnerDamage))
            RepresentationActor->OnTakeAnyDamage.AddDynamic(this, &ULogic::HandleOwnerDamage);
    }
}

void ULogic::UnbindEvents()
{
    Super::UnbindEvents();

    if (IsValid(RepresentationActor))
    {
        if (RepresentationActor->OnTakeAnyDamage.IsAlreadyBound(this, &ULogic::HandleOwnerDamage))
            RepresentationActor->OnTakeAnyDamage.RemoveDynamic(this, &ULogic::HandleOwnerDamage);
    }
}

void ULogic::HandleOwnerDamage(
    AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser)
{
    if (bCanTakeDamage)
        DamageProcess(Damage);
}

void ULogic::DamageProcess(float Damage)
{
    float CheckCurrentHealth = CurrentHealth;
    CurrentHealth -= Damage;
    CurrentHealth = FMath::Clamp(CurrentHealth, 0.f, MaxHealth);

    if (CheckCurrentHealth != CurrentHealth)
        BroadcastOnHealthChange();

    if (CurrentHealth <= 0.f)
        Died();
}

void ULogic::Died()
{
    OnDied.Broadcast();
}

void ULogic::BroadcastOnHealthChange() const
{
    OnHealthChange.Broadcast(MaxHealth, CurrentHealth);
}

void ULogic::BroadcastOnTeamChange() const
{
    OnTeamChange.Broadcast(Team);
}

void ULogic::SetTeam(ETeam NewTeam)
{
    if (Team != NewTeam)
    {
        Team = NewTeam;
        BroadcastOnTeamChange();
    }
}

void ULogic::BroadcastOnSelectedChange() const
{
    OnSelectedChange.Broadcast(bIsSelected);
}

void ULogic::SetSelected(bool bNewSelected)
{
    if (bIsSelected != bNewSelected)
    {
        bIsSelected = bNewSelected;
        BroadcastOnSelectedChange();
    }

}
