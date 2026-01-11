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
    auto Canvas = UW_HUD->GetRootCanvas();
    if (!Canvas)
        return;
    Widget->RemoveFromParent();
    auto Slot = Canvas->AddChildToCanvas(Widget);
    if (!Slot)
        return;
    int32 MaxZ = 0;
    for (int32 Index = 0; Index < Canvas->GetChildrenCount(); ++Index)
        if (auto Child = Canvas->GetChildAt(Index))
            if (auto CanvasPanelSlot = Cast<UCanvasPanelSlot>(Child->Slot))
                MaxZ = FMath::Max(MaxZ, CanvasPanelSlot->GetZOrder());

    Slot->SetZOrder(MaxZ + 1);
    Slot->SetAutoSize(true);
    Slot->SetPosition(FVector2D::ZeroVector);
}