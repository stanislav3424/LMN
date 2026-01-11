// Fill out your copyright notice in the Description page of Project Settings.

#include "UMG_Library.h"
#include "HUD_Main.h"
#include "UW_HUD.h"
#include "Components/CanvasPanel.h"
#include "Components/CanvasPanelSlot.h"

void UUMG_Library::AddToMainCanvas(UWorld* World, UUserWidget* Widget)
{
    if (!Widget || !World)
        return;
    auto PC = World->GetFirstPlayerController();
    if (!PC)
        return;
    auto HUD = Cast<AHUD_Main>(PC->GetHUD());
    if (!HUD)
        return;
    auto UW_HUD = HUD->GetUW_HUD();
    if (!UW_HUD)
        return;
    auto CanvasPanel = UW_HUD->GetRootCanvas();
    if (!CanvasPanel)
        return;
    Widget->RemoveFromParent();
    auto CanvasPanelSlot = CanvasPanel->AddChildToCanvas(Widget);
    if (!CanvasPanelSlot)
        return;
    int32 MaxZ = 0;
    for (int32 Index = 0; Index < CanvasPanel->GetChildrenCount(); ++Index)
        if (auto Child = CanvasPanel->GetChildAt(Index))
            if (auto LocalCanvasPanelSlot = Cast<UCanvasPanelSlot>(Child->Slot))
                MaxZ = FMath::Max(MaxZ, LocalCanvasPanelSlot->GetZOrder());

    CanvasPanelSlot->SetAutoSize(true);
    CanvasPanelSlot->SetPosition(FVector2D::ZeroVector);
}