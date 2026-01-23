// Fill out your copyright notice in the Description page of Project Settings.

#include "UW_HUD.h"
#include "Components/ListView.h"
#include "PC_Main.h"
#include "BFL.h"
#include "GM_Main.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "UW_DialogBase.h"
#include "AIControllerBase.h"
#include "Components/CanvasPanel.h"
#include "Components/CanvasPanelSlot.h"
#include "DragDropOperation_UW.h"

UUW_HUD::UUW_HUD()
{
    bAutoUpdatedChildWidgets = false;
}

void UUW_HUD::NativeOnInitialized()
{
    Super::NativeOnInitialized();

    if (PC_Main)
    {
        PC_Main->OnActorsSelectedChange.AddUniqueDynamic(this, &UUW_HUD::UpdateListView);
        PC_Main->OnTypeAIActionChange.AddUniqueDynamic(this, &UUW_HUD::TypeAIActionChange);
        PC_Main->BroadcastOnTypeAIActionChange();
    }

    if (MenuButton)
        MenuButton->OnClicked.AddUniqueDynamic(this, &UUW_HUD::OnMenuButtonClicked);
    if (AIMoveToButton)
        AIMoveToButton->OnClicked.AddUniqueDynamic(this, &UUW_HUD::OnAIMoveToButtonClicked);
    if (AIAssaultButton)
        AIAssaultButton->OnClicked.AddUniqueDynamic(this, &UUW_HUD::OnAIAssaultButtonClicked);
    if (AIFootholdPositionButton)
        AIFootholdPositionButton->OnClicked.AddUniqueDynamic(this, &UUW_HUD::OnAIFootholdPositionButtonClicked);
    if (AICancelLogicButton)
        AICancelLogicButton->OnClicked.AddUniqueDynamic(this, &UUW_HUD::OnAICancelLogicButtonClicked);

    CHECK_FIELD(MenuUserWidgetClass);
    if (MenuUserWidgetClass)
        MenuUserWidget = CreateWidget<UUW_DialogBase>(PC_Main, MenuUserWidgetClass);
    CHECK_FIELD(MenuUserWidget);
    if (MenuUserWidget)
        MenuUserWidget->AddToViewport(100);

}

void UUW_HUD::UpdateListView()
{
    if (!PC_Main || !SelectedListView)
        return;
    {
        auto const& Actors = PC_Main->GetAddActorsSelected();
        for (auto const& Actor : Actors)
            if (auto LocalLogic = UBFL::GetLogic(Actor))
                SelectedListView->AddItem(LocalLogic);
    }
    {
        auto const& Actors = PC_Main->GetRemoveActorsSelected();
        for (auto const& Actor : Actors)
            if (auto LocalLogic = UBFL::GetLogic(Actor))
                SelectedListView->RemoveItem(LocalLogic);
    }
}

void UUW_HUD::OnMenuButtonClicked()
{
    /*if (MenuUserWidget)
        MenuUserWidget->Switch();*/
}

void UUW_HUD::OnAIMoveToButtonClicked()
{
    if (PC_Main)
        PC_Main->SetTypeAIAction(ETypeAIAction::MoveTo);
}

void UUW_HUD::OnAIAssaultButtonClicked()
{
    if (PC_Main)
        PC_Main->SetTypeAIAction(ETypeAIAction::Assault);
}

void UUW_HUD::OnAIFootholdPositionButtonClicked()
{
    if (PC_Main)
        PC_Main->SetTypeAIAction(ETypeAIAction::FootholdPosition);
}

void UUW_HUD::OnAICancelLogicButtonClicked()
{
    if (PC_Main)
        PC_Main->SetTypeAIAction(ETypeAIAction::AI);
}

void UUW_HUD::GameStatusChanged()
{
    if (GameStatus == EGameStatus::NotStarted)
        OnMenuButtonClicked();
}

void UUW_HUD::TypeAIActionChange(ETypeAIAction const& NewTypeAIAction)
{
    if (!TypeAIActionTextBlock)
        return;

    auto Enum = StaticEnum<ETypeAIAction>();
    TypeAIActionTextBlock->SetText(FText::FromString(Enum->GetNameStringByValue((int64) NewTypeAIAction)));
}

bool UUW_HUD::NativeOnDrop(
    const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InDragDropOperation)
{
    auto DragDropOperation = Cast<UDragDropOperation_UW>(InDragDropOperation);
    if (!DragDropOperation)
        return false;

    UWidget* DraggedWidget = DragDropOperation->DefaultDragVisual;
    if (!DraggedWidget)
        return false;

    auto CanvasPanelSlot = RootCanvas->AddChildToCanvas(DraggedWidget);
    if (!CanvasPanelSlot)
        return false;
    const FVector2D ScreenPos = InDragDropEvent.GetScreenSpacePosition();
    const FVector2D LocalPos  = RootCanvas->GetCachedGeometry().AbsoluteToLocal(ScreenPos);
    CanvasPanelSlot->SetAutoSize(true);
    CanvasPanelSlot->SetPosition(LocalPos - DragDropOperation->CursorOffset);
    return true;
}
