// Fill out your copyright notice in the Description page of Project Settings.

#include "GM_Main.h"
#include "IconRendering.h"
#include "BFL.h"
#include "GlobalVisibility.h"
#include "GI_Main.h"

void AGM_Main::BeginPlay()
{
    CHECK_FIELD(IconRenderingClass);
    if (IconRenderingClass)
        if (auto World = GetWorld())
        {
            FActorSpawnParameters ActorSpawnParameters;
            ActorSpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
            IconRendering                                       = World->SpawnActor<AIconRendering>(
                IconRenderingClass, FVector(), FRotator(), ActorSpawnParameters);
        }
    CHECK_FIELD(IconRendering);

    if (auto World = GetWorld())
    {
        FActorSpawnParameters ActorSpawnParameters;
        ActorSpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
        GlobalVisibility                                    = World->SpawnActor<AGlobalVisibility>(
            AGlobalVisibility::StaticClass(), FVector(), FRotator(), ActorSpawnParameters);
    }
    CHECK_FIELD(GlobalVisibility);
}

void AGM_Main::StartGame()
{
    OnStartGameGroup();

    GameStatus = EGameStatus::Started;
    BroadcastOnGameStatusChanged();
}

void AGM_Main::EndGame()
{

    GameStatus = EGameStatus::Ended;
    BroadcastOnGameStatusChanged();
}

void AGM_Main::OnStartGameGroup()
{
}

void AGM_Main::BroadcastOnGameStatusChanged() const
{
    OnGameStatusChanged.Broadcast(GameStatus);
}
