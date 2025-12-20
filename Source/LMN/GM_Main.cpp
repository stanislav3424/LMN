// Fill out your copyright notice in the Description page of Project Settings.

#include "GM_Main.h"
#include "IconRendering.h"
#include "BFL.h"

void AGM_Main::BeginPlay()
{
    CHECK_FIELD(IconRenderingClass);
    if (IconRenderingClass)
        if (auto World = GetWorld())
        {
            FActorSpawnParameters ActorSpawnParameters;
            ActorSpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
            IconRendering                                       = World->SpawnActor<AIconRendering>(
                IconRenderingClass, FVector(0.f, 0.f, 0.f), FRotator(), ActorSpawnParameters);
        }
}

void AGM_Main::StartGame()
{

    OnStartGame.Broadcast();
}

void AGM_Main::EndGame()
{

    OnEndGame.Broadcast();
}
