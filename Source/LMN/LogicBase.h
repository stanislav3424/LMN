// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LogicBase.generated.h"

UCLASS()
class LMN_API ULogicBase : public UObject
{
    GENERATED_BODY()

    // Logic
public:
    void Initialization(FDataTableRowHandle RowHandle);

protected:
    FDataTableRowHandle LogicRowHandle;

    UPROPERTY(Transient)
    ULogicBase* OwnerLogic;

public:
    void                SetOwnerLogic(ULogicBase* NewOwnerLogic) { OwnerLogic = NewOwnerLogic; };
    ULogicBase*         GetOwnerLogic() { return OwnerLogic; };
    void                RemoveOwnerLogic() { OwnerLogic = nullptr; };
    FDataTableRowHandle GetLogicRowHandle() { return LogicRowHandle; };

protected:
    virtual void LoadingDataTable();
    virtual void CheckField();
    virtual void BeginPlay();

public:
    virtual void Tick(float DeltaTime);

protected:
    virtual void BindEvents();
    virtual void UnbindEvents();
    virtual void RepresentationChanged();
    void         SetRepresentationActor(AActor* Actor);

    //
protected:
    UPROPERTY(Transient)
    AActor*             RepresentationActor;
    TSubclassOf<AActor> RepresentationActorClass;

public:
    void                HardSetRepresentationActor(AActor* Actor);
    AActor*             GetRepresentationActor() const;
    TSubclassOf<AActor> GetRepresentationActorClass() const { return RepresentationActorClass; };
    void                DestroyRepresentationActor();
    AActor*             SpawnRepresentationActor(FVector SpawnLocation, FRotator SpawRotator);
};
