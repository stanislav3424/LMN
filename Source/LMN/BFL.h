// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LogicBase.h"
#include "BFL.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LMN, Log, All);

//UE_LOG(LMN, Error, TEXT(""))

#define CHECK_FIELD(FieldName)                                                                                         \
    if (!(FieldName))                                                                                                  \
    {                                                                                                                  \
        UE_LOG(LMN, Error, TEXT("%s LINE %d Field '%s' is not set!"), *GetName(), __LINE__, TEXT(#FieldName));       \
    }

class ULogicBase;
enum class ETeam : uint8;

template <typename TypeLogic>
concept LogicDerived = std::derived_from<TypeLogic, ULogicBase>;

class UWidget;

UCLASS()
class LMN_API UBFL : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:

    UFUNCTION(BlueprintCallable, Category = "Logic")
    static void SetLogic(UObject* Object, UObject* Logic);

    UFUNCTION(BlueprintCallable, Category = "Logic")
    static ULogicBase* GetLogic(AActor* Actor);

    template <LogicDerived TypeLogic> static TypeLogic* GetLogic(AActor* Actor)
    {
        return Cast<TypeLogic>(HandleGetLogic(Actor));
    };

    static ULogicBase* HandleGetLogic(AActor* Actor);

    static void ActorActivation(AActor* Actor);

    UFUNCTION(BlueprintCallable, Category = "Logic")
    static ULogicBase* CreateLogicByRowName(UWorld* World, FName const& RowName);

    UFUNCTION(BlueprintCallable, Category = "Logic")
    static ULogicBase* CreateLogicByRowHandle(UWorld* World, FDataTableRowHandle const& RowHandle);

    template <LogicDerived TypeLogic>
    static TypeLogic* CreateLogicByRowHandle(UWorld* World, FDataTableRowHandle const& RowHandle)
    {
        return Cast<TypeLogic>(HandleCreateLogicByRowHandle(World, RowHandle));
    };

    static ULogicBase* HandleCreateLogicByRowHandle(UWorld* World, FDataTableRowHandle const& RowHandle);

    UFUNCTION(BlueprintCallable, Category = "Logic")
    static bool GetTeam(ETeam& TargetTeam, ULogicBase* LogicBase);

    UFUNCTION(BlueprintCallable, Category = "Logic")
    static bool GetTeamActor(ETeam& TargetTeam, AActor* Actor);

    UFUNCTION(BlueprintCallable, Category = "Logic")
    static bool IsTeamsEqual(ULogicBase* LogicA, ULogicBase* LogicB);

    UFUNCTION(BlueprintCallable, Category = "Logic")
    static bool IsTeamsEqualActor(AActor* ActorA, AActor* ActorB);

    UFUNCTION(BlueprintCallable, Category = "Logic")
    static bool EqualTeam(ULogicBase* Logic, ETeam const& Team);

     UFUNCTION(BlueprintCallable, Category = "Logic")
    static bool EqualTeamActor(AActor* Actoc, ETeam const& Team);

    template <typename ElementType>
    static bool AreSetsEqual(TSet<ElementType> const& SetA, TSet<ElementType> const& SetB)
    {
        if (SetA.Num() != SetB.Num())
            return false;
        for (auto const& Elem : SetA)
            if (!SetB.Contains(Elem))
                return false;
        return true;
    }

    UFUNCTION(BlueprintCallable, Category = "Icon")
    static void GetIcon(UObject* Object, UMaterialInstanceDynamic* MID);

    template <typename TypeComponent>
    static TypeComponent* GetActorComponentByName(AActor* Actor, const FName& ComponentName)
    {
        if (!Actor)
            return nullptr;
        TArray<TypeComponent*> Components;
        Actor->GetComponents<TypeComponent>(Components);
        for (auto Component : Components)
            if (Component && Component->GetFName() == ComponentName)
                return Component;
        return nullptr;
    }
};
