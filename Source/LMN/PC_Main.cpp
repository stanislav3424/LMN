// Fill out your copyright notice in the Description page of Project Settings.

#include "PC_Main.h"
#include "BFL.h"
#include "InputAction.h"
#include "InputMappingContext.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "HUD_Main.h"

APC_Main::APC_Main()
{
    PrimaryActorTick.bCanEverTick = true;
}

void APC_Main::BeginPlay()
{
    Super::BeginPlay();

    bShowMouseCursor = true;
}

void APC_Main::SetupInputComponent()
{
    Super::SetupInputComponent();

    if (auto LocalPlayer = GetLocalPlayer())
        if (auto EnhancedInputLocalPlayerSubsystem =
                ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(LocalPlayer))
            if (DefaultInputMappingContext)
                EnhancedInputLocalPlayerSubsystem->AddMappingContext(DefaultInputMappingContext, 0);

    if (auto EnhancedInputComponent = Cast<UEnhancedInputComponent>(InputComponent))
    {
        if (LeftClickInputAction)
        {
            EnhancedInputComponent->BindAction(LeftClickInputAction, ETriggerEvent::Started, this, &APC_Main::OnLeftPressed);
            EnhancedInputComponent->BindAction(LeftClickInputAction, ETriggerEvent::Completed, this, &APC_Main::OnLeftReleased);
        }

        if (RightClickInputAction)
        {
            EnhancedInputComponent->BindAction(
                RightClickInputAction, ETriggerEvent::Started, this, &APC_Main::OnRightPressed);
            EnhancedInputComponent->BindAction(
                RightClickInputAction, ETriggerEvent::Completed, this, &APC_Main::OnRightReleased);
        }
    }
}

void APC_Main::Tick(float DeltaSeconds)
{
    Super::Tick(DeltaSeconds);

    if (!HUD_Main)
        HUD_Main = Cast<AHUD_Main>(GetHUD());

    if (bLeftDown && !bIsDraggingSelection)
    {
        FVector2D CurrentPosition;
        if (GetMousePosition(CurrentPosition.X, CurrentPosition.Y))
            if (FVector2D::DistSquared(CurrentPosition, MouseDownPosition) > DragThreshold * DragThreshold)
            {
                bIsDraggingSelection = true;
                if (HUD_Main)
                    HUD_Main->StartSelection();
            }
    }
}

void APC_Main::OnLeftPressed(const FInputActionValue& Value)
{
    bLeftDown = true;
    if (GetMousePosition(MouseDownPosition.X, MouseDownPosition.Y))
        bIsDraggingSelection = false;
}

void APC_Main::OnLeftReleased(const FInputActionValue& Value)
{
    bLeftDown = false;
    if (bIsDraggingSelection)
    {
        bIsDraggingSelection = false;
        if (HUD_Main)
            HUD_Main->EndSelection();
    }
    else
    {
        FHitResult HitResult;
        GetHitResultUnderCursorByChannel(ETraceTypeQuery::TraceTypeQuery1, true, HitResult);
        TArray<AActor*> NewSelection;
        if (HitResult.bBlockingHit && HitResult.GetActor())
            NewSelection.Add(HitResult.GetActor());
        UpdateActorsSelected(NewSelection);
    }
}

void APC_Main::OnRightPressed(const FInputActionValue& Value)
{
}

void APC_Main::OnRightReleased(const FInputActionValue& Value)
{
}

void APC_Main::UpdateActorsSelected(const TArray<AActor*>& NewActorsSelected)
{
    TSet<AActor*> NewSet(NewActorsSelected);
    if (UBFL::AreSetsEqual(NewSet, ActorsSelected))
        return;

    AddActorsSelected    = NewSet.Difference(ActorsSelected);
    RemoveActorsSelected = ActorsSelected.Difference(NewSet);
    ActorsSelected       = MoveTemp(NewSet);

     /*UE_LOG(LogTemp, Error, TEXT("ActorsSelected size: %d; Added: %d; Removed: %d"), ActorsSelected.Num(),
        AddActorsSelected.Num(), RemoveActorsSelected.Num());*/

    OnActorsSelectedChange.Broadcast();
}
