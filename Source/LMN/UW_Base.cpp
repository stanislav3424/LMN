// Fill out your copyright notice in the Description page of Project Settings.

#include "UW_Base.h"
#include "BFL.h"

void UUW_Base::SetObject(UObject* NewObject)
{
    if (NewObject)
        Object = NewObject;
    CHECK_FIELD(Object);
}