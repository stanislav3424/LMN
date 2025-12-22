// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "GI_Main.generated.h"

class ULogicBase;

USTRUCT(BlueprintType)
struct FLogicBaseRow : public FTableRowBase
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSubclassOf<ULogicBase> LogicClass;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSubclassOf<AActor> RepresentationActorClass;
};

USTRUCT(BlueprintType)
struct FLogicRow : public FLogicBaseRow
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bCanTakeDamage = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float MaxHealth = 100.f;
};

USTRUCT(BlueprintType)
struct FCharacterLogicRow : public FLogicRow
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float MaxStamina = 100.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float StaminaDrainRate = 10.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float StaminaRegenRate = 5.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float MinStaminaToRun = 25.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float MaxWalkSpeed = 25.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float MaxRunSpeed = 25.f;
};

UCLASS(Blueprintable, Abstract)
class LMN_API UGI_Main : public UGameInstance
{
    GENERATED_BODY()

public:
    virtual void Init() override;

    // DataTable
protected:
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "DataTable")
    TArray<UDataTable*> DataTables;

    UPROPERTY()
    TMap<FName, UDataTable*> DataTablesCacheByRowName;

    UPROPERTY()
    TMap<TSubclassOf<AActor>, FDataTableRowHandle> RowHandlesCacheByActorClass;

public:
    FDataTableRowHandle GetRowHandleByRowName(FName RowName);
    FDataTableRowHandle GetRowHandleByActor(AActor* Actor);
    FDataTableRowHandle GetRowHandleByActorClass(TSubclassOf<AActor> Class);
    ULogicBase*         CreateLogicByRowHandle(FDataTableRowHandle const& RowHandle);
    TSubclassOf<AActor> GetRepresentationActorClassByRowHandle(FDataTableRowHandle const& RowHandle);

public:
    void ActorActivation(AActor* Actor);

};
