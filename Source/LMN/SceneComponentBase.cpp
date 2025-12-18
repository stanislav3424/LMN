// Fill out your copyright notice in the Description page of Project Settings.

#include "SceneComponentBase.h"
#include "BFL.h"

USceneComponentBase::USceneComponentBase()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void USceneComponentBase::BeginPlay()
{
	Super::BeginPlay();
}

void USceneComponentBase::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

ULogicBase* USceneComponentBase::GetLogic_Implementation()
{
    return LogicBase;
}

void USceneComponentBase::SetLogic_Implementation(ULogicBase* NewLogic)
{
    if (NewLogic)
        LogicBase = NewLogic;
    CHECK_FIELD(LogicBase);

    LogicUpdated();
}
