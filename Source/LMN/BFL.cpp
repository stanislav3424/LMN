// Fill out your copyright notice in the Description page of Project Settings.

#include "BFL.h"
#include "LogicInterface.h"
#include "GI_Main.h"
#include "Logic.h"
#include "GM_Main.h"
#include "IconRendering.h"

DEFINE_LOG_CATEGORY(LMN)

void UBFL::SetLogic(UObject* Object, UObject* Logic)
{
    if (Object && Logic)
        if (auto LogicBase = Cast<ULogicBase>(Logic))
            if (Object->Implements<ULogicInterface>())
                ILogicInterface::Execute_SetLogic(Object, LogicBase);
}

ULogicBase* UBFL::GetLogic(AActor* Actor)
{
    return HandleGetLogic(Actor);
}

ULogicBase* UBFL::HandleGetLogic(AActor* Actor)
{
    if (Actor)
        if (Actor->Implements<ULogicInterface>())
            if (auto Logic = ILogicInterface::Execute_GetLogic(Actor))
                return Logic;
    return nullptr;
}

void UBFL::ActorActivation(AActor* Actor)
{
    if (IsValid(Actor))
        if (auto GameInstance = Actor->GetGameInstance<UGI_Main>())
            GameInstance->ActorActivation(Actor);
}

ULogicBase* UBFL::CreateLogicByRowName(UWorld* World, FName RowName)
{
    if (World)
        if (auto GameInstance = World->GetGameInstance<UGI_Main>())
        {
            auto RowHandle = GameInstance->GetRowHandleByRowName(RowName);
            if (!RowHandle.IsNull())
                return CreateLogicByRowHandle(World, RowHandle);
        }
    return nullptr;
}

ULogicBase* UBFL::CreateLogicByRowHandle(UWorld* World, FDataTableRowHandle RowHandle)
{
    return HandleCreateLogicByRowHandle(World, RowHandle);
}

ULogicBase* UBFL::HandleCreateLogicByRowHandle(UWorld* World, FDataTableRowHandle RowHandle)
{
    if (!RowHandle.IsNull() && World)
        if (auto GameInstance = World->GetGameInstance<UGI_Main>())
            if (auto Logic = GameInstance->CreateLogicByRowHandle(RowHandle))
                return Logic;
    return nullptr;
}

bool UBFL::GetTeam(ETeam& TargetTeam, ULogicBase* LogicBase)
{
    if (LogicBase)
        if (auto Logic = Cast<ULogic>(LogicBase))
        {
            TargetTeam = Logic->GetTeam();
            return true;
        }
    return false;
}

bool UBFL::GetTeamActor(ETeam& TargetTeam, AActor* Actor)
{
    return GetTeam(TargetTeam, UBFL::GetLogic(Actor));
}

bool UBFL::IsTeamsEqual(ULogicBase* LogicA, ULogicBase* LogicB)
{
    ETeam TeamA;
    ETeam TeamB;
    if (GetTeam(TeamA, LogicA) && GetTeam(TeamB, LogicB))
        if (TeamA == TeamB)
            return true;
    return false;
}

bool UBFL::IsTeamsEqualActor(AActor* ActorA, AActor* ActorB)
{
    return IsTeamsEqual(UBFL::GetLogic(ActorA), UBFL::GetLogic(ActorB));
}

void UBFL::GetIcon(UObject* Object, UMaterialInstanceDynamic* MID)
{
    if (Object && MID)
        if (auto World = Object->GetWorld())
            if (auto GM = World->GetAuthGameMode<AGM_Main>())
                if (auto IconRendering = GM->GetIconRendering())
                    IconRendering->RenderObjectToMID(Object, MID);
};