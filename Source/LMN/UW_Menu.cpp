// Fill out your copyright notice in the Description page of Project Settings.

#include "UW_Menu.h"
#include "Components/Button.h"
#include "GM_Main.h"
#include "Kismet/KismetSystemLibrary.h"
#include "GI_Main.h"

void UUW_Menu::NativeOnInitialized()
{
    Super::NativeOnInitialized();

    if (StartButton)
        StartButton->OnClicked.AddUniqueDynamic(this, &UUW_Menu::OnStartButtonClicked);
    if (RestartButton)
        RestartButton->OnClicked.AddUniqueDynamic(this, &UUW_Menu::OnRestartButtonClicked);
    if (SettingButton)
        SettingButton->OnClicked.AddUniqueDynamic(this, &UUW_Menu::OnSettingButtonClicked);
    if (QuitGameButton)
        QuitGameButton->OnClicked.AddUniqueDynamic(this, &UUW_Menu::OnQuitGameButtonClicked);
}

void UUW_Menu::GameStatusChanged()
{
    Super::GameStatusChanged();

    if (!StartButton || !RestartButton)
        return;

    if (GameStatus == EGameStatus::NotStarted)
    {
        StartButton->SetVisibility(ESlateVisibility::Visible);
        RestartButton->SetVisibility(ESlateVisibility::Collapsed);
    }
    else if (GameStatus == EGameStatus::Started)
    {
        StartButton->SetVisibility(ESlateVisibility::Collapsed);
        RestartButton->SetVisibility(ESlateVisibility::Visible);
    }
    else if (GameStatus == EGameStatus::Ended)
    {
        StartButton->SetVisibility(ESlateVisibility::Collapsed);
        RestartButton->SetVisibility(ESlateVisibility::Collapsed);
    }
}

void UUW_Menu::OnStartButtonClicked()
{
    CloseDialog();
    if (GM_Main)
        GM_Main->StartGame();
}

void UUW_Menu::OnRestartButtonClicked()
{
    if (auto World = GetWorld())
        if (auto GI = World->GetGameInstance<UGI_Main>())
            GI->RestartGame();
}

void UUW_Menu::OnSettingButtonClicked()
{
}

void UUW_Menu::OnQuitGameButtonClicked()
{
    UKismetSystemLibrary::QuitGame(GetWorld(), GetOwningPlayer(), EQuitPreference::Quit, true);
}
