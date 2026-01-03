// Fill out your copyright notice in the Description page of Project Settings.

#include "TracingLibrary.h"

bool UTracingLibrary::Trace(UWorld* World, FVector const& Start, FVector const& End)
{
    if (!World)
        return false;
    FHitResult HitResult;
    World->LineTraceSingleByChannel(HitResult, Start, End, ECC_Visibility);
    return HitResult.Location.Equals(End, 5.0f);
}

bool UTracingLibrary::LevelTrace(UWorld* World, FVector const& Start, FVector const& End,
    ELevelTrace const& StartLevelTrace, ELevelTrace const& EndLevelTrace)
{
    return UTracingLibrary::Trace(World, GetShiftLocation(Start, StartLevelTrace),GetShiftLocation(End, EndLevelTrace));
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

void UTracingLibrary::TraceComplexArr(UWorld* World, TArray<FVector> const& Start, TArray<FVector>& Target)
{
    if (!World || Target.Num() == 0)
        return;

    struct FScoreItem
    {
        FVector Pos;
        int32   Score;
    };

    TArray<FScoreItem> Scores;
    Scores.Reserve(Target.Num());

    for (const FVector& Candidate : Target)
    {
        int32 TotalScore = 0;

        for (const FVector& EnemyPos : Start)
        {
            bool bLegsReach  = LevelTrace(World, EnemyPos, Candidate, ELevelTrace::Top, ELevelTrace::Lower);
            bool bWaistReach = LevelTrace(World, EnemyPos, Candidate, ELevelTrace::Top, ELevelTrace::Central);
            bool bTopReach   = LevelTrace(World, EnemyPos, Candidate, ELevelTrace::Top, ELevelTrace::Top);

            bool bLegsBlocked  = !bLegsReach;
            bool bWaistBlocked = !bWaistReach;
            bool bTopOpen      = bTopReach;

            if (!bTopOpen)
            {
                TotalScore -= 6;
                continue;
            }

            if (bWaistBlocked && bLegsBlocked)
            {
                TotalScore += 6;
            }
            else if (bWaistBlocked)
            {
                TotalScore += 3;
            }
            else if (bLegsBlocked)
            {
                TotalScore += 1;
            }
        }

        Scores.Add({ Candidate, TotalScore });
    }

    Scores.Sort(
        [](const FScoreItem& A, const FScoreItem& B)
        {
            if (A.Score == B.Score)
                return A.Pos.SizeSquared() < B.Pos.SizeSquared();
            return A.Score > B.Score;
        });

    Target.Reset();
    Target.Reserve(Scores.Num());
    for (const FScoreItem& It : Scores)
    {
        Target.Add(It.Pos);
    }
}
