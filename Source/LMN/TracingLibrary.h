// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TracingLibrary.generated.h"

UENUM(BlueprintType)
enum class ELevelTrace : uint8
{
    Lower   UMETA(DisplayName = "Lower"),
    Central UMETA(DisplayName = "Central"),
    Top     UMETA(DisplayName = "Top"),
};

UCLASS()
class LMN_API UTracingLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    static bool Trace(UWorld* World, FVector const& Start, FVector const& End, TArray<AActor*> const& IgnoredActors,
        bool bDrawDebug = false);
    static bool LevelTrace(UWorld* World, FVector const& Start, FVector const& End, ELevelTrace const& StartLevelTrace,
        ELevelTrace const& EndLevelTrace, TArray<AActor*> const& IgnoredActors, bool bDrawDebug = false);
    static FVector GetShiftLocation(FVector const& Location, ELevelTrace const& LevelTrace);
    static FVector GetShiftLevelTrace(ELevelTrace const& LevelTrace);
};
