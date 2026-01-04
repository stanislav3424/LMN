// Fill out your copyright notice in the Description page of Project Settings.

#include "TracingLibrary.h"

bool UTracingLibrary::Trace(UWorld* World, FVector const& Start, FVector const& End, TArray<AActor*> const& IgnoredActors, bool bDrawDebug)
{
    if (!World)
        return false;
    FHitResult            HitResult;
    FCollisionQueryParams TraceParams(SCENE_QUERY_STAT(EQS_VisibilityTrace), true);
    TraceParams.AddIgnoredActors(IgnoredActors);
    World->LineTraceSingleByChannel(HitResult, Start, End, ECC_Visibility, TraceParams);

    bool Result = true;
    if (HitResult.bBlockingHit)
    Result = HitResult.Location.Equals(End, 10.0f);
    if (bDrawDebug)
    {
        if (HitResult.bBlockingHit && !Result)
        {
            DrawDebugLine(World, Start, HitResult.Location, FColor::Red, false, 1.5f, 0, 2.0f);
            DrawDebugPoint(World, HitResult.Location, 5.0f, FColor::Red, false, 1.5f, 0);
        }
        else
        {
            DrawDebugLine(World, Start, End, Result ? FColor::Green : FColor::Red, false, 1.5f, 0, 2.0f);
        }
    }
    return Result;
}

bool UTracingLibrary::LevelTrace(UWorld* World, FVector const& Start, FVector const& End,
    ELevelTrace const& StartLevelTrace, ELevelTrace const& EndLevelTrace, TArray<AActor*> const& IgnoredActors,
    bool bDrawDebug)
{
    return UTracingLibrary::Trace(World, GetShiftLocation(Start, StartLevelTrace), GetShiftLocation(End, EndLevelTrace),
        IgnoredActors, bDrawDebug);
}

FVector UTracingLibrary::GetShiftLocation(FVector const& Location, ELevelTrace const& LevelTrace)
{
    return Location + GetShiftLevelTrace(LevelTrace);
}

FVector UTracingLibrary::GetShiftLevelTrace(ELevelTrace const& LevelTrace)
{
    switch (LevelTrace)
    {
        case (ELevelTrace::Lower):
            return FVector(0.f, 0.f, 50.f);
        case (ELevelTrace::Central):
            return FVector(0.f, 0.f, 100.f);
        case (ELevelTrace::Top):
            return FVector(0.f, 0.f, 150.f);
    }
    return FVector::ZeroVector;
}
