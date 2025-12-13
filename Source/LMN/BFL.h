// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LogicBase.h"
#include "BFL.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LMN, Log, All);


#define CHECK_FIELD(FieldName)                                                                                         \
    if (!(FieldName))                                                                                                  \
    {                                                                                                                  \
        UE_LOG(LMN, Error, TEXT("%s LINE %d Field '%s' is not set!"), *GetName(), __LINE__, TEXT(#FieldName));       \
    }

class ULogicBase;
enum class ETeam : uint8;

template <typename TypeLogic>
concept LogicDerived = std::derived_from<TypeLogic, ULogicBase>;

UCLASS()
class LMN_API UBFL : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "Logic")
    static ULogicBase* GetLogic(AActor* AActor);

    template <LogicDerived TypeLogic> static TypeLogic* GetLogic(AActor* AActor)
    {
        return Cast<TypeLogic>(HandleGetLogic(AActor));
    };

    static ULogicBase* HandleGetLogic(AActor* AActor);

    static void ActorActivation(AActor* AActor);

    UFUNCTION(BlueprintCallable, Category = "Logic")
    static ULogicBase* CreateLogicByRowName(UWorld* World, FName RowName);

    UFUNCTION(BlueprintCallable, Category = "Logic")
    static ULogicBase* CreateLogicByRowHandle(UWorld* World, FDataTableRowHandle RowHandle);

    template <LogicDerived TypeLogic>
    static TypeLogic* CreateLogicByRowHandle(UWorld* World, FDataTableRowHandle RowHandle)
    {
        return Cast<TypeLogic>(HandleCreateLogicByRowHandle(World, RowHandle));
    };

    static ULogicBase* HandleCreateLogicByRowHandle(UWorld* World, FDataTableRowHandle RowHandle);

    UFUNCTION(BlueprintCallable, Category = "Logic")
    static bool GetTeam(ETeam& TargetTeam, ULogicBase* LogicBase);

    UFUNCTION(BlueprintCallable, Category = "Logic")
    static bool GetTeamActor(ETeam& TargetTeam, AActor* Actor);

    UFUNCTION(BlueprintCallable, Category = "Logic")
    static bool IsTeamsEqual(ULogicBase* LogicA, ULogicBase* LogicB);

    UFUNCTION(BlueprintCallable, Category = "Logic")
    static bool IsTeamsEqualActor(AActor* ActorA, AActor* ActorB);

    template <typename ElementType>
    static bool AreSetsEqual(const TSet<ElementType>& SetA, const TSet<ElementType>& SetB)
    {
        if (SetA.Num() != SetB.Num())
            return false;
        for (auto const& Elem : SetA)
            if (!SetB.Contains(Elem))
                return false;
        return true;
    }
};
