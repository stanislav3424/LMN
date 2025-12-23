// Fill out your copyright notice in the Description page of Project Settings.

#include "BFL.h"
#include "LogicInterface.h"
#include "GI_Main.h"
#include "Logic.h"
#include "GM_Main.h"
#include "IconRendering.h"
#include "Blueprint/UserWidget.h"
#include "Components/PanelWidget.h"
#include "Blueprint/WidgetTree.h"
#include "Components/ContentWidget.h"
#include "Kismet/GameplayStatics.h"
#include "CharacterLogic.h"

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

ULogicBase* UBFL::CreateLogicByRowName(UWorld* World, FName const& RowName)
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

ULogicBase* UBFL::CreateLogicByRowHandle(UWorld* World, FDataTableRowHandle const& RowHandle)
{
    return HandleCreateLogicByRowHandle(World, RowHandle);
}

ULogicBase* UBFL::HandleCreateLogicByRowHandle(UWorld* World, FDataTableRowHandle const& RowHandle)
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

bool UBFL::EqualTeam(ULogicBase* Logic, ETeam const& Team)
{
    if (Logic)
    {
        ETeam LoaclTeam;
        if (UBFL::GetTeam(LoaclTeam, Logic))
            return LoaclTeam == Team ? true : false;
    }
    return false;
}

bool UBFL::EqualTeamActor(AActor* Actoc, ETeam const& Team)
{
    return EqualTeam(UBFL::GetLogic(Actoc), Team);
}

void UBFL::GetIcon(UObject* Object, UMaterialInstanceDynamic* MID)
{
    if (Object && MID)
        if (auto World = Object->GetWorld())
            if (auto GM = World->GetAuthGameMode<AGM_Main>())
                if (auto IconRendering = GM->GetIconRendering())
                    IconRendering->RenderObjectToMID(Object, MID);
}

AActor* UBFL::SpawnTemplateCharacter_WorldContext(UObject* WorldContextObject, FDataTableRowHandle const& RowHandle,
    FVector SpawnLocation, FRotator SpawRotator, ETeam Team)
{
    if (GEngine)
        if (auto World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull))
            return SpawnTemplateCharacter(World, RowHandle, SpawnLocation, SpawRotator, Team);
    return nullptr;
}

AActor* UBFL::SpawnTemplateCharacter(
    UWorld* World, FDataTableRowHandle const& RowHandle, FVector SpawnLocation, FRotator SpawRotator, ETeam Team)
{
    if (auto const* Row = RowHandle.DataTable->FindRow<FTemplateCharacterRow>(RowHandle.RowName, TEXT("")))
    {
        auto Character =
            UBFL::SpawnActorTeamByRowHandle(World, Row->CharacterRowHandle, SpawnLocation, SpawRotator, Team);
        auto Weapon = UBFL::SpawnActorTeamByRowHandle(World, Row->WeaponRowHandle, SpawnLocation, SpawRotator, Team);

        if (auto Logic = UBFL::GetLogic<UCharacterLogic>(Character))
            Logic->EquipItem(Weapon, EEquipmentSlot::Hands);
    }

    return nullptr;
}

AActor* UBFL::SpawnActorTeamByRowHandle_WorldContext(UObject* WorldContextObject, FDataTableRowHandle const& RowHandle,
    FVector SpawnLocation, FRotator SpawnRotator, ETeam Team)
{
    if (GEngine)
        if (auto World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull))
            return SpawnActorTeamByRowHandle(World, RowHandle, SpawnLocation, SpawnRotator, Team);
    return nullptr;
}

AActor* UBFL::SpawnActorTeamByRowHandle(
    UWorld* World, FDataTableRowHandle const& RowHandle, FVector SpawnLocation, FRotator SpawnRotator, ETeam Team)
{
    if (World)
        if (auto GameInstance = World->GetGameInstance<UGI_Main>())
            if (auto Logic = Cast<ULogic>(GameInstance->CreateLogicByRowHandle(RowHandle)))
            {
                Logic->SetTeam(Team);
                return Logic->SpawnRepresentationActor(SpawnLocation, SpawnRotator);
            }

    return nullptr;
}

AActor* UBFL::SpawnActorTeamByClass_WorldContext(
    UObject* WorldContextObject, TSubclassOf<AActor> Class, FVector SpawnLocation, FRotator SpawnRotator, ETeam Team)
{
    if (GEngine)
        if (auto World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull))
            return SpawnActorTeamByClass(World, Class, SpawnLocation, SpawnRotator, Team);
    return nullptr;
}

AActor* UBFL::SpawnActorTeamByClass(
    UWorld* World, TSubclassOf<AActor> Class, FVector SpawnLocation, FRotator SpawRotator, ETeam Team)
{
    if (World)
        if (auto GameInstance = World->GetGameInstance<UGI_Main>())
        {
            auto RowHandle = GameInstance->GetRowHandleByActorClass(Class);
            return SpawnActorTeamByRowHandle(World, RowHandle, SpawnLocation, SpawRotator, Team);
        }
    return nullptr;
};
