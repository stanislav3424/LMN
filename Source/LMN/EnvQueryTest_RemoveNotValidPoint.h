// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EnvQueryTest_RemoveNotValidPoint.generated.h"

UCLASS()
class LMN_API UEnvQueryTest_RemoveNotValidPoint : public UEnvQueryTest
{
	GENERATED_BODY()
	
	UEnvQueryTest_RemoveNotValidPoint(const FObjectInitializer& ObjectInitializer);

	virtual void RunTest(FEnvQueryInstance& QueryInstance) const override;

	UPROPERTY(EditAnywhere, Category = "Find")
    float SearchRadius = 1500.f;

	UPROPERTY(EditAnywhere, Category = "Find")
	float ExcludeDistance = 100.f;

    UPROPERTY(EditAnywhere, Category = "Find")
    TSubclassOf<AActor> ActorClass;
};
