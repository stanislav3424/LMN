// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EnvQueryTest_Shelter.generated.h"

UCLASS()
class LMN_API UEnvQueryTest_Shelter : public UEnvQueryTest
{
	GENERATED_BODY()
	
	UEnvQueryTest_Shelter(const FObjectInitializer& ObjectInitializer);

    virtual void RunTest(FEnvQueryInstance& QueryInstance) const override;

	bool bDrawDebug = false;
};
