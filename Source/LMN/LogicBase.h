// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LogicBase.generated.h"

UCLASS()
class LMN_API ULogicBase : public UObject
{
    GENERATED_BODY()

public:
    void Initialization(FDataTableRowHandle RowHandle);

protected:
    FDataTableRowHandle LogicRowHandle;

    UPROPERTY(Transient)
    ULogicBase* OwnerLogic;

public:
    void                SetOwnerLogic(ULogicBase* NewOwnerLogic);
    ULogicBase*         GetOwnerLogic();
    void                RemoveOwnerLogic();
    FDataTableRowHandle GetLogicRowHandle();

protected:
    virtual void OwnerLogicChanged();

protected:
    virtual void LoadingDataTable();
    virtual void CheckField();
    virtual void BeginPlay();
    virtual void EndPlay();

public:
    virtual void Tick(float DeltaTime);

protected:
    virtual void BindEvents();
    virtual void UnbindEvents();
    virtual void RepresentationChanged();
    void         SetRepresentationActor(AActor* Actor);

protected:
    UPROPERTY(Transient)
    AActor*             RepresentationActor;
    TSubclassOf<AActor> RepresentationActorClass;

public:
    void                HardSetRepresentationActor(AActor* Actor);
    AActor*             GetRepresentationActor() const;
    TSubclassOf<AActor> GetRepresentationActorClass() const ;
    void                DestroyRepresentationActor();
    AActor*             SpawnRepresentationActor(FVector SpawnLocation, FRotator SpawRotator);
};
