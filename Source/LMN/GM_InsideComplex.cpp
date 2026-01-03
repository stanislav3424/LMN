// Fill out your copyright notice in the Description page of Project Settings.

#include "GM_InsideComplex.h"
#include "GI_Main.h"

void AGM_InsideComplex::BeginPlay()
{
    Super::BeginPlay();

    if (auto GI = GetGameInstance<UGI_Main>())
    {
        auto Arr = GI->GetTransitionalPawns().Array();
    }
        
    
}
