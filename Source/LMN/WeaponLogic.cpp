// Fill out your copyright notice in the Description page of Project Settings.

#include "WeaponLogic.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "GameFramework/Character.h"
#include "Animation/AnimInstance.h"
#include "CharacterLogic.h"
#include "NiagaraFunctionLibrary.h"
#include "NiagaraSystem.h"
#include "Kismet/GameplayStatics.h"
#include "GI_Main.h"
#include "BFL.h"

void UWeaponLogic::LoadingDataTable()
{
    Super::LoadingDataTable();
    if (auto const* Row = LogicRowHandle.DataTable->FindRow<FWeaponRow>(LogicRowHandle.RowName, TEXT("")))
    {
        EquipmentSlot = Row->EquipmentSlot;
        MaxAmmo       = Row->MaxAmmo;
        RateFire      = Row->RateFire;
        Damage        = Row->Damage;
        MOARadians    = Row->MOARadians;
    }

    CurrentAmmo        = MaxAmmo;
    CurrentWeaponState = EWeaponState::Idle;
    bIsInputBlocked    = false;
}

void UWeaponLogic::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void UWeaponLogic::EndPlay()
{
    StopShooting();
    CancelReload();
    Super::EndPlay();
}

void UWeaponLogic::OwnerLogicChanged()
{
    AttachmentParentCharacter = nullptr;

    if (OwnerLogic)
    {
        if (auto Character = Cast<ACharacter>(OwnerLogic->GetRepresentationActor()))
            AttachmentParentCharacter = Character;
    }
    if (IsValid(RepresentationActor))
        if (AttachmentParentCharacter)
            if (auto Mesh = AttachmentParentCharacter->GetMesh())
            {
                //RepresentationActor->SetActorTransform(UBFL::GetSocketTransformFromEnum(EquipmentSlot, Mesh));
                RepresentationActor->SetActorLocation(FVector(0.f, 0.f, 0.f));
                /*RepresentationActor->AttachToComponent(Mesh, FAttachmentTransformRules::SnapToTargetNotIncludingScale,
                    UBFL::GetSocketNameFromEnum(EquipmentSlot));*/
                RepresentationActor->AttachToComponent(Mesh, FAttachmentTransformRules::SnapToTargetNotIncludingScale, "123");
            }
}

void UWeaponLogic::BroadcastOnAmmoChanged()
{
    OnAmmoChanged.Broadcast(CurrentAmmo, MaxAmmo);
}

void UWeaponLogic::BroadcastOnAmmoEmpty()
{
    OnAmmoEmpty.Broadcast();
}

bool UWeaponLogic::ShootStarted()
{
    if (bIsInputBlocked || CurrentWeaponState == EWeaponState::Reloading)
        return false;

    if (CurrentWeaponState == EWeaponState::Shooting)
        return true;

    CurrentWeaponState = EWeaponState::Shooting;

    PerformShoot();

    if (auto World = GetWorld())
        World->GetTimerManager().SetTimer(ShootTimerHandle, this, &UWeaponLogic::ShootTimerElapsed, RateFire, true);

    return true;
}

bool UWeaponLogic::ShootCompleted()
{
    if (CurrentWeaponState != EWeaponState::Shooting)
        return false;

    StopShooting();
    return true;
}

bool UWeaponLogic::CanShoot() const
{
    return CurrentAmmo > 0 &&
           (CurrentWeaponState == EWeaponState::Idle || CurrentWeaponState == EWeaponState::Shooting) &&
           !bIsInputBlocked;
}

void UWeaponLogic::PerformShoot()
{
    if (CurrentAmmo <= 0)
    {
        StopShooting();
        return;
    }

    FVector StartLocation;
    FVector EndLocation;

    PlayShootAnimation();
    CalculateShotDirection(StartLocation, EndLocation);
    SpawnBulletEffect(StartLocation, EndLocation);

    FHitResult HitResult;
    if (PerformLineTrace(StartLocation, EndLocation, HitResult))
    {
        ApplyDamage(HitResult, StartLocation, EndLocation);
    }

    HandleAmmo();
}

void UWeaponLogic::PlayShootAnimation()
{
    if (IsValid(AttachmentParentCharacter) && ShootAnimMontage)
        if (auto MeshComponent = AttachmentParentCharacter->GetMesh())
            if (auto AnimInstance = MeshComponent->GetAnimInstance())
                AnimInstance->Montage_Play(ShootAnimMontage);
}

void UWeaponLogic::SpawnBulletEffect(FVector const& StartLocation, FVector const& EndLocation)
{
    if (IsValid(AttachmentParentCharacter))
        if (auto MeshComponent = AttachmentParentCharacter->GetMesh())
        {
            auto     Transform = MeshComponent->GetSocketTransform(TEXT("weapon_r_muzzle"));
            FRotator Rotator   = (EndLocation - StartLocation).Rotation();

            if (BulletEffect)
            {
                UNiagaraFunctionLibrary::SpawnSystemAtLocation(
                    GetWorld(), BulletEffect, Transform.GetLocation(), Rotator);
            }
        }
}

void UWeaponLogic::CalculateShotDirection(FVector& StartLocation, FVector& EndLocation)
{
    if (IsValid(AttachmentParentCharacter))
        if (auto MeshComponent = AttachmentParentCharacter->GetMesh())
        {
            auto Transform = MeshComponent->GetSocketTransform(TEXT("weapon_r_muzzle"));
            StartLocation  = Transform.GetLocation();

            FVector Forward               = AttachmentParentCharacter->GetActorRotation().Vector();
            FVector StartAttachmentParent = AttachmentParentCharacter->GetActorLocation();

            FVector RandomSpread = FMath::VRandCone(Forward, MOARadians);

            EndLocation = StartAttachmentParent + RandomSpread * 2000.0f + FVector(0.f, 0.f, 150.f);
        }
}

bool UWeaponLogic::PerformLineTrace(FVector const& StartLocation, FVector const& EndLocation, FHitResult& OutHit)
{
    if (auto World = GetWorld())
    {
        FCollisionQueryParams Params;
        bool bHit = World->LineTraceSingleByChannel(OutHit, StartLocation, EndLocation, ECC_Visibility, Params);

        FColor TraceColor = bHit ? FColor::Red : FColor::Green;
        // DrawDebugLine(World, Start, bHit ? OutHit.Location : End, TraceColor, false, 1.0f);

        // if (bHit)DrawDebugPoint(World, OutHit.Location, 10.0f, FColor::Red, false, 1.0f);

        return bHit;
    }
    return false;
}

void UWeaponLogic::ApplyDamage(FHitResult const& Hit, FVector const& Start, FVector const& End)
{
    auto HitActor = Hit.GetActor();
    if (HitActor && HitActor != AttachmentParentCharacter)
    {
        const FVector ShotDirection = (End - Start).GetSafeNormal();
        UGameplayStatics::ApplyPointDamage(
            HitActor, Damage, ShotDirection, Hit, nullptr, AttachmentParentCharacter, UDamageType::StaticClass());
    }
}

void UWeaponLogic::HandleAmmo()
{
    --CurrentAmmo;
    BroadcastOnAmmoChanged();

    if (CurrentAmmo <= 0)
    {
        StopShooting();
        BroadcastOnAmmoEmpty();
    }
}

void UWeaponLogic::ShootTimerElapsed()
{
    if (CurrentWeaponState == EWeaponState::Shooting && CanShoot())
        PerformShoot();
    else
        StopShooting();
}

void UWeaponLogic::StopShooting()
{
    if (CurrentWeaponState == EWeaponState::Shooting)
        CurrentWeaponState = EWeaponState::Idle;

    if (auto World = GetWorld())
        World->GetTimerManager().ClearTimer(ShootTimerHandle);
}

bool UWeaponLogic::CanReload() const
{
    return CurrentWeaponState != EWeaponState::Reloading && CurrentAmmo < MaxAmmo && !bIsInputBlocked;
}

bool UWeaponLogic::ReloadWeapon()
{
    if (!CanReload())
        return false;

    StartReload();
    return true;
}

void UWeaponLogic::StartReload()
{
    StopShooting();

    CurrentWeaponState = EWeaponState::Reloading;
    bIsInputBlocked    = true;

    float ReloadDuration = 2.0f;
    if (IsValid(AttachmentParentCharacter) && ReloadAnimMontage)
        if (auto MeshComponent = AttachmentParentCharacter->GetMesh())
            if (auto AnimInstance = MeshComponent->GetAnimInstance())
                ReloadDuration = AnimInstance->Montage_Play(ReloadAnimMontage);

    if (auto World = GetWorld())
        World->GetTimerManager().SetTimer(ReloadTimerHandle, this, &UWeaponLogic::FinishReload, ReloadDuration, false);
}

void UWeaponLogic::FinishReload()
{
    CurrentAmmo        = MaxAmmo;
    CurrentWeaponState = EWeaponState::Idle;
    bIsInputBlocked    = false;

    OnAmmoChanged.Broadcast(CurrentAmmo, MaxAmmo);

    if (auto World = GetWorld())
        World->GetTimerManager().ClearTimer(ReloadTimerHandle);
}

void UWeaponLogic::CancelReload()
{
    if (CurrentWeaponState == EWeaponState::Reloading)
    {
        CurrentWeaponState = EWeaponState::Idle;
        bIsInputBlocked    = false;

        if (IsValid(AttachmentParentCharacter) && ReloadAnimMontage)
            if (auto MeshComponent = AttachmentParentCharacter->GetMesh())
                if (auto AnimInstance = MeshComponent->GetAnimInstance())
                    AnimInstance->Montage_Stop(0.2f, ReloadAnimMontage);

        if (auto World = GetWorld())
            World->GetTimerManager().ClearTimer(ReloadTimerHandle);
    }
}

