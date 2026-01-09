// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PointsLibrary.generated.h"

class UEnvQuery;

UCLASS()
class LMN_API UPointsLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Grid", meta = (WorldContext = "WorldContextObject"))
	static TArray<FVector> GetPoints(UObject* WorldContextObject, UEnvQuery* QueryTemplate, UObject* Querier, int32 NumPoints);

};
