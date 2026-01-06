// Fill out your copyright notice in the Description page of Project Settings.

#include "PC_Main.h"
#include "BFL.h"
#include "InputAction.h"
#include "InputMappingContext.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "HUD_Main.h"
#include "Logic.h"
#include "AIControllerBase.h"
#include "GameFramework/Pawn.h"

APC_Main::APC_Main()
{
    PrimaryActorTick.bCanEverTick = true;
    TypeAIAction                  = ETypeAIAction::MoveTo;
}

void APC_Main::BeginPlay()
{
    Super::BeginPlay();

    bShowMouseCursor = true;
}

void APC_Main::SetupInputComponent()
{
    Super::SetupInputComponent();

    if (auto EnhancedInputLocalPlayerSubsystem =
            ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
    {
        if (DefaultInputMappingContext)
            EnhancedInputLocalPlayerSubsystem->AddMappingContext(DefaultInputMappingContext, 0);
        if (AIActionInputMappingContext)
            EnhancedInputLocalPlayerSubsystem->AddMappingContext(AIActionInputMappingContext, 0);
    }

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
        if (AIMoveToInputAction)
            EnhancedInputComponent->BindAction(
                AIMoveToInputAction, ETriggerEvent::Started, this, &APC_Main::OnAIMoveToPressed);
        if (AIAssaultInputAction)
            EnhancedInputComponent->BindAction(
                AIAssaultInputAction, ETriggerEvent::Started, this, &APC_Main::OnAIAssaultPressed);
        if (AIFootholdPositionInputAction)
            EnhancedInputComponent->BindAction(
                AIFootholdPositionInputAction, ETriggerEvent::Started, this, &APC_Main::OnAIFootholdPositionPressed);
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

void APC_Main::OnLeftPressed(FInputActionValue const& Value)
{
    bLeftDown = true;
    if (GetMousePosition(MouseDownPosition.X, MouseDownPosition.Y))
        bIsDraggingSelection = false;
}

void APC_Main::OnLeftReleased(FInputActionValue const& Value)
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
        GetHitResultUnderCursor(ECollisionChannel::ECC_Visibility, false, HitResult);
        TArray<AActor*> NewSelection;
        if (HitResult.bBlockingHit && HitResult.GetActor())
            NewSelection.Add(HitResult.GetActor());
        UpdateActorsSelected(NewSelection);
    }
}

void APC_Main::OnRightPressed(FInputActionValue const& Value)
{
    CommandAllLocation(TypeAIAction);
}

void APC_Main::CommandAllLocation(ETypeAIAction const& CommandTypeAIAction)
{
    FHitResult HitResult;
    GetHitResultUnderCursor(ECollisionChannel::ECC_Visibility, false, HitResult);
    if (HitResult.bBlockingHit)
        CommandAll(CommandTypeAIAction, HitResult.Location);
}

void APC_Main::CommandAll(ETypeAIAction const& CommandTypeAIAction, FVector const& Location)
{
    for (auto Actor : ActorsSelected)
        if (UBFL::EqualTeamActor(Actor, ETeam::Player))
            if (auto LocalPawn = Cast<APawn>(Actor))
                if (auto AIController = LocalPawn->GetController<AAIControllerBase>())
                    AIController->Command(CommandTypeAIAction, Location);
}

void APC_Main::OnRightReleased(FInputActionValue const& Value)
{
}

void APC_Main::OnAIMoveToPressed(FInputActionValue const& Value)
{
    SetTypeAIAction(ETypeAIAction::MoveTo);
}

void APC_Main::OnAIAssaultPressed(FInputActionValue const& Value)
{
    SetTypeAIAction(ETypeAIAction::Assault);
}

void APC_Main::OnAIFootholdPositionPressed(FInputActionValue const& Value)
{
    SetTypeAIAction(ETypeAIAction::FootholdPosition);
}

void APC_Main::SetTypeAIAction(ETypeAIAction const& NewTypeAIAction)
{
    if (NewTypeAIAction == ETypeAIAction::AI)
    {
        CommandAll(ETypeAIAction::AI, FVector::ZeroVector);
        return;
    }

    if (TypeAIAction == NewTypeAIAction)
        return;

    TypeAIAction = NewTypeAIAction;
    BroadcastOnTypeAIActionChange();
}

void APC_Main::BroadcastOnTypeAIActionChange() const
{
    OnTypeAIActionChange.Broadcast(TypeAIAction);
}

void APC_Main::UpdateActorsSelected(TArray<AActor*> const& NewActorsSelected)
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

    for (auto Actor : GetAddActorsSelected())
        if (auto Logic = Cast<ULogic>(UBFL::GetLogic(Actor)))
            Logic->SetSelected(true);

    for (auto Actor : GetRemoveActorsSelected())
        if (auto Logic = Cast<ULogic>(UBFL::GetLogic(Actor)))
            Logic->SetSelected(false);
}
