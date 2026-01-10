// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TeamLibrary.generated.h"

class ULogicBase;
class AActor;

UCLASS()
class LMN_API UTeamLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "Team")
    static bool GetTeam(ETeam& TargetTeam, ULogicBase* LogicBase);

    UFUNCTION(BlueprintCallable, Category = "Team")
    static bool GetTeamActor(ETeam& TargetTeam, AActor* Actor);

    UFUNCTION(BlueprintCallable, Category = "Team")
    static void GetOnlyEnemiesActor(TArray<AActor*>& TargetArr, AActor* Actor);

    UFUNCTION(BlueprintCallable, Category = "Team")
    static bool AreEnemiesActor(AActor* ActorA, AActor* ActorB);

    UFUNCTION(BlueprintCallable, Category = "Team")
    static bool IsTeamsEqual(ULogicBase* LogicA, ULogicBase* LogicB);

    UFUNCTION(BlueprintCallable, Category = "Team")
    static bool IsTeamsEqualActor(AActor* ActorA, AActor* ActorB);

    UFUNCTION(BlueprintCallable, Category = "Team")
    static bool EqualTeam(ULogicBase* Logic, const ETeam& Team);

    UFUNCTION(BlueprintCallable, Category = "Team")
    static bool EqualTeamActor(AActor* Actor, const ETeam& Team);
};
