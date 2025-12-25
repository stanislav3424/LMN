// Fill out your copyright notice in the Description page of Project Settings.

#include "VisibilitySceneComponent.h"
#include "Components/SphereComponent.h"
#include "GM_Main.h"
#include "GlobalVisibility.h"
#include "BFL.h"

UVisibilitySceneComponent::UVisibilitySceneComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UVisibilitySceneComponent::BeginPlay()
{
    Super::BeginPlay();

    if (InteractionCollision)
    {
        InteractionCollision->OnComponentBeginOverlap.AddUniqueDynamic(
            this, &UVisibilitySceneComponent::OnInteractionBeginOverlap);
        InteractionCollision->OnComponentEndOverlap.AddUniqueDynamic(
            this, &UVisibilitySceneComponent::OnInteractionEndOverlap);
    }
}

void UVisibilitySceneComponent::OnRegister()
{
    Super::OnRegister();

    auto Owner = GetOwner();
    if (!Owner)
        return;

    if (!InteractionCollision)
    {
        InteractionCollision = NewObject<USphereComponent>(Owner, TEXT("InteractionCollision"));
        if (InteractionCollision)
        {
            InteractionCollision->AttachToComponent(this, FAttachmentTransformRules::KeepRelativeTransform);
            InteractionCollision->RegisterComponent();
            InteractionCollision->bUseAttachParentBound = true;
            InteractionCollision->SetMobility(EComponentMobility::Movable);
            InteractionCollision->SetSphereRadius(1000.f);
            InteractionCollision->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
            InteractionCollision->SetGenerateOverlapEvents(true);
            InteractionCollision->SetCollisionObjectType(ECC_WorldDynamic);
            InteractionCollision->SetCollisionResponseToAllChannels(ECR_Overlap);
        }
    }
}

void UVisibilitySceneComponent::OnUnregister()
{
    if (InteractionCollision)
    {
        InteractionCollision->DestroyComponent();
        InteractionCollision = nullptr;
    }

    Super::OnUnregister();
}

void UVisibilitySceneComponent::OnInteractionBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
    UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    if (!GlobalVisibility)
        if (auto World = GetWorld())
            if (auto GM = World->GetAuthGameMode<AGM_Main>())
                GlobalVisibility = GM->GetGlobalVisibility();
    CHECK_FIELD(GlobalVisibility);
    if (GlobalVisibility)
        GlobalVisibility->RegisterPrimitiveComponent(GetOwner(), OtherComponent);
}

void UVisibilitySceneComponent::OnInteractionEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
    UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex)
{
    if (GlobalVisibility)
        GlobalVisibility->UnregisterPrimitiveComponent(GetOwner(), OtherComponent);
}

