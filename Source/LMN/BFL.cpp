// Fill out your copyright notice in the Description page of Project Settings.

#include "BFL.h"
#include "LogicInterface.h"
#include "GI_Main.h"
#include "Logic.h"
#include "GM_Main.h"
#include "Blueprint/UserWidget.h"
#include "Components/PanelWidget.h"
#include "Blueprint/WidgetTree.h"
#include "Components/ContentWidget.h"
#include "Kismet/GameplayStatics.h"
#include "CharacterLogic.h"
#include "TeamLibrary.h"

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

ULogicBase* UBFL::GetLogic(UObject* Object)
{
    return HandleGetLogic(Object);
}

ULogicBase* UBFL::HandleGetLogic(AActor* Actor)
{
    if (Actor)
        if (Actor->Implements<ULogicInterface>())
            if (auto Logic = ILogicInterface::Execute_GetLogic(Actor))
                return Logic;
    return nullptr;
}

ULogicBase* UBFL::HandleGetLogic(UObject* Object)
{
    if (Object)
        if (Object->Implements<ULogicInterface>())
            if (auto Logic = ILogicInterface::Execute_GetLogic(Object))
                return Logic;
    return nullptr;
}

void UBFL::ActorActivationLogic(AActor* Actor)
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
        auto Inventory = UBFL::SpawnActorTeamByRowHandle(World, Row->InventoryRowHandle, SpawnLocation, SpawRotator, Team);

        if (auto Logic = UBFL::GetLogic<UCharacterLogic>(Character))
        {
            Logic->EquipItem(Weapon, EEquipmentSlot::Hands);
            Logic->EquipItem(Inventory, EEquipmentSlot::Backpack);
        }
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