// Fill out your copyright notice in the Description page of Project Settings.

#include "UW_Global.h"
#include "PC_Main.h"
#include "GM_Main.h"
#include "BFL.h"

void UUW_Global::NativeOnInitialized()
{
    Super::NativeOnInitialized();

    PC_Main = GetOwningPlayer<APC_Main>();

    if (auto World = GetWorld())
        GM_Main = World->GetAuthGameMode<AGM_Main>();

    CHECK_FIELD(PC_Main);
    CHECK_FIELD(GM_Main);

        if (GM_Main)
    {
            GM_Main->OnGameStatusChanged.AddUniqueDynamic(this, &UUW_Global::OnGameStatusChanged);
        GM_Main->BroadcastOnGameStatusChanged();
    }
}


void UUW_Global::OnGameStatusChanged(EGameStatus NewGameStatus)
{
    GameStatus = NewGameStatus;
    GameStatusChanged();
}

void UUW_Global::GameStatusChanged()
{
}
