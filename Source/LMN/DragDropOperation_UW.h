// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/DragDropOperation.h"
#include "DragDropOperation_UW.generated.h"

UCLASS()
class LMN_API UDragDropOperation_UW : public UDragDropOperation
{
    GENERATED_BODY()
public:
    FVector2D CursorOffset;
};
