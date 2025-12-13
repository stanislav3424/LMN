// Fill out your copyright notice in the Description page of Project Settings.

#include "HUD_Main.h"
#include "GameFramework/PlayerController.h"
#include "Engine/Canvas.h"
#include "PC_Main.h"
#include "BFL.h"
#include "RepresentationCharacter.h"
#include "UW_HUD.h"

void AHUD_Main::BeginPlay()
{
    Super::BeginPlay();

    PlayerControllerRef = Cast<APC_Main>(GetOwningPlayerController());

    CHECK_FIELD(UW_HUD_Class);

    if (UW_HUD_Class)
        if (auto UW_HUD = CreateWidget(PlayerControllerRef, UW_HUD_Class))
            UW_HUD->AddToViewport();
}

void AHUD_Main::StartSelection()
{
    if (!PlayerControllerRef)
        return;
    FHitResult HitResult;
    PlayerControllerRef->GetHitResultUnderCursorByChannel(ETraceTypeQuery::TraceTypeQuery1, true, HitResult);
    if (HitResult.bBlockingHit)
    {
        SelectionStartWorld = HitResult.Location;
        bIsSelecting        = true;
    }
}

void AHUD_Main::EndSelection()
{
    bIsSelecting = false;
}

void AHUD_Main::DrawHUD()
{
    Super::DrawHUD();

    if (!bIsSelecting || !Canvas || !PlayerControllerRef)
        return;
    
    FHitResult HitResult;
    PlayerControllerRef->GetHitResultUnderCursorByChannel(ETraceTypeQuery::TraceTypeQuery1, true, HitResult);
    if (HitResult.bBlockingHit)
    {
        PlayerControllerRef->ProjectWorldLocationToScreen(SelectionStartWorld, ScreenStart, true);
        PlayerControllerRef->ProjectWorldLocationToScreen(HitResult.Location, ScreenCurrent, true);
    }

    FVector2D TopLeft(FMath::Min(ScreenStart.X, ScreenCurrent.X), FMath::Min(ScreenStart.Y, ScreenCurrent.Y));
    FVector2D Size(FMath::Abs(ScreenStart.X - ScreenCurrent.X), FMath::Abs(ScreenStart.Y - ScreenCurrent.Y));
    FVector2D BottomRight(TopLeft + Size);

    DrawRect(FillColor, TopLeft.X, TopLeft.Y, Size.X, Size.Y);
    DrawLine(TopLeft.X, TopLeft.Y, TopLeft.X, BottomRight.Y, BorderColor, LineThickness);
    DrawLine(TopLeft.X, TopLeft.Y, BottomRight.X, TopLeft.Y, BorderColor, LineThickness);
    DrawLine(BottomRight.X, BottomRight.Y, TopLeft.X, BottomRight.Y, BorderColor, LineThickness);
    DrawLine(BottomRight.X, BottomRight.Y, BottomRight.X, TopLeft.Y, BorderColor, LineThickness);

    TArray<AActor*> Actors;
    GetActorsInSelectionRectangle(ARepresentationCharacter::StaticClass(), TopLeft, BottomRight, Actors);
    PlayerControllerRef->UpdateActorsSelected(Actors);
}
