// Fill out your copyright notice in the Description page of Project Settings.

#include "GM_InsideComplex.h"
#include "GI_Main.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/TriggerBox.h"
#include "PointsLibrary.h"
#include "LogicBase.h"

void AGM_InsideComplex::BeginPlay()
{
    Super::BeginPlay();

    if (!GetWorld())
        return;
    TArray<AActor*> Actors;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ATriggerBox::StaticClass(), Actors);

    for (auto Actor : Actors)
        if (IsValid(Actor))
        {
            if (Actor->ActorHasTag(InPlayerSpawnTag))
            {
                TunnelTriggerBox = Cast<ATriggerBox>(Actor);
            }
        }

    if (auto GI = GetGameInstance<UGI_Main>())
    {
        auto Arr      = GI->GetTransitionalPawns().Array();
        auto PointArr = UPointsLibrary::GetPoints(this, EnvQuery, TunnelTriggerBox, Arr.Num());
        for (int32 Index = 0; Index < Arr.Num(); ++Index)
            if (IsValid(Arr[Index]) && PointArr.IsValidIndex(Index))
                if (auto Logic = Cast<ULogicBase>(Arr[Index]))
                    Logic->SpawnRepresentationActor(PointArr[Index], FRotator::ZeroRotator);
    }
}
