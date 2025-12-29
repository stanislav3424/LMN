// Fill out your copyright notice in the Description page of Project Settings.

#include "HUD_Main.h"
#include "GameFramework/PlayerController.h"
#include "Engine/Canvas.h"
#include "PC_Main.h"
#include "BFL.h"
#include "RepresentationCharacter.h"
#include "UW_HUD.h"
#include "GM_Main.h"

void AHUD_Main::BeginPlay()
{
    Super::BeginPlay();

    PlayerController = Cast<APC_Main>(GetOwningPlayerController());

    if (auto World = GetWorld())
        GM_Main = World->GetAuthGameMode<AGM_Main>();

    CHECK_FIELD(PlayerController);
    CHECK_FIELD(GM_Main);
    CHECK_FIELD(UW_HUD_Class);

    if (UW_HUD_Class)
    {
        UW_HUD = CreateWidget(PlayerController, UW_HUD_Class);
        if (UW_HUD)
            UW_HUD->AddToViewport();
    }


    if (GM_Main)
    {
        GM_Main->OnGameStatusChanged.AddUniqueDynamic(this, &AHUD_Main::OnGameStatusChanged);
        GM_Main->BroadcastOnGameStatusChanged();
    }
}

void AHUD_Main::StartSelection()
{
    if (!PlayerController)
        return;
    FHitResult HitResult;
    PlayerController->GetHitResultUnderCursorByChannel(ETraceTypeQuery::TraceTypeQuery1, true, HitResult);
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

void AHUD_Main::OnGameStatusChanged(EGameStatus NewGameStatus)
{
    GameStatus = NewGameStatus;
    if (NewGameStatus == EGameStatus::NotStarted)
    {
    }
    else if (NewGameStatus == EGameStatus::Started)
    {
        
    }
    else if (NewGameStatus == EGameStatus::Ended)
    {
    }
}

void AHUD_Main::DrawHUD()
{
    Super::DrawHUD();

    if (GameStatus != EGameStatus::Started)
        return;

    if (!bIsSelecting || !Canvas || !PlayerController)
        return;

    FHitResult HitResult;
    PlayerController->GetHitResultUnderCursorByChannel(ETraceTypeQuery::TraceTypeQuery1, true, HitResult);
    if (HitResult.bBlockingHit)
    {
        PlayerController->ProjectWorldLocationToScreen(SelectionStartWorld, ScreenStart, true);
        PlayerController->ProjectWorldLocationToScreen(HitResult.Location, ScreenCurrent, true);
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
    GetActorsInSelectionRectangle(ARepresentationCharacter::StaticClass(), TopLeft, BottomRight, Actors, false, false);
    PlayerController->UpdateActorsSelected(Actors);
}
