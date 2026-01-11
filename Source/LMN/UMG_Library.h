// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UMG_Library.generated.h"

UCLASS()
class LMN_API UUMG_Library : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    static void AddToMainCanvas(UWorld* World, UUserWidget* Widget);
};
