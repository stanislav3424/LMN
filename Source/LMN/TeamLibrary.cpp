// Fill out your copyright notice in the Description page of Project Settings.

#include "TeamLibrary.h"
#include "LogicInterface.h"
#include "Logic.h"
#include "LogicBase.h"

bool UTeamLibrary::GetTeam(ETeam& TargetTeam, ULogicBase* LogicBase)
{
    if (LogicBase)
        if (auto Logic = Cast<ULogic>(LogicBase))
        {
            TargetTeam = Logic->GetTeam();
            return true;
        }
    return false;
}

bool UTeamLibrary::GetTeamActor(ETeam& TargetTeam, AActor* Actor)
{
    return GetTeam(TargetTeam, (Actor && Actor->Implements<ULogicInterface>()) ? ILogicInterface::Execute_GetLogic(Actor) : nullptr);
}

void UTeamLibrary::GetOnlyEnemies(TArray<AActor*>& TargetArr, AActor* Actor)
{
    if (!IsValid(Actor) || TargetArr.IsEmpty())
        return;

    TArray<AActor*> Arr;

    for (auto const& LocalActor : TargetArr)
        if (!IsTeamsEqualActor(Actor, LocalActor))
            Arr.Add(LocalActor);

    TargetArr = Arr;
}

bool UTeamLibrary::IsTeamsEqual(ULogicBase* LogicA, ULogicBase* LogicB)
{
    ETeam TeamA;
    ETeam TeamB;
    if (GetTeam(TeamA, LogicA) && GetTeam(TeamB, LogicB))
        if (TeamA == TeamB)
            return true;
    return false;
}

bool UTeamLibrary::IsTeamsEqualActor(AActor* ActorA, AActor* ActorB)
{
    ULogicBase* LogicA = nullptr;
    ULogicBase* LogicB = nullptr;
    if (ActorA && ActorA->Implements<ULogicInterface>())
        LogicA = ILogicInterface::Execute_GetLogic(ActorA);
    if (ActorB && ActorB->Implements<ULogicInterface>())
        LogicB = ILogicInterface::Execute_GetLogic(ActorB);
    return IsTeamsEqual(LogicA, LogicB);
}

bool UTeamLibrary::EqualTeam(ULogicBase* Logic, const ETeam& Team)
{
    if (Logic)
    {
        ETeam LoaclTeam;
        if (GetTeam(LoaclTeam, Logic))
            return LoaclTeam == Team ? true : false;
    }
    return false;
}

bool UTeamLibrary::EqualTeamActor(AActor* Actor, const ETeam& Team)
{
    ULogicBase* Logic = nullptr;
    if (Actor && Actor->Implements<ULogicInterface>())
        Logic = ILogicInterface::Execute_GetLogic(Actor);
    return EqualTeam(Logic, Team);
}

