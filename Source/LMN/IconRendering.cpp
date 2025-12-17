// Fill out your copyright notice in the Description page of Project Settings.

#include "IconRendering.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Engine/TextureRenderTarget2D.h"
#include "LogicBase.h"
#include "GI_Main.h"
#include "BFL.h"

AIconRendering::AIconRendering()
{
    PrimaryActorTick.bCanEverTick = true;
    PrimaryActorTick.TickInterval = 0.1f;

    auto Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    SetRootComponent(Root);

    SceneCapture = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("SceneCapture"));
    SceneCapture->SetupAttachment(Root);
    SceneCapture->bCaptureEveryFrame = false;
    SceneCapture->bCaptureOnMovement = false;

    
}

void AIconRendering::BeginPlay()
{
    Super::BeginPlay();
}

void AIconRendering::Tick(float DeltaSeconds)
{
    Super::Tick(DeltaSeconds);

    TPair<FDataTableRowHandle, UTextureRenderTarget2D*> Pair;
    if (Queue.Dequeue(Pair))
    {
        Render(Pair);
        const FDataTableRowHandle& RowHandle    = Pair.Key;
        UTextureRenderTarget2D*    RenderTarget = Pair.Value;

        if (RenderTarget)
        {
            if (auto Found = Textures.Find(RowHandle.RowName))
                Found->Value = true;

            if (auto WaitingMIDs = MIDs.Find(RenderTarget))
            {
                for (auto WaitingMID : *WaitingMIDs)
                    if (WaitingMID)
                        WaitingMID->SetScalarParameterValue(MIDTextureReadyParameterName, 1.f);

                MIDs.Remove(RenderTarget);
            }
        }
    }
}

void AIconRendering::Render(TPair<FDataTableRowHandle, UTextureRenderTarget2D*>& Pair)
{
    if (!SceneCapture)
        return;

    const FDataTableRowHandle& RowHandle    = Pair.Key;
    UTextureRenderTarget2D*    RenderTarget = Pair.Value;
    TSubclassOf<AActor>        Class;

    SceneCapture->TextureTarget = RenderTarget;

    if (auto World = GetWorld())
    {
        if (auto GameInstance = World->GetGameInstance<UGI_Main>())
        {
            Class = GameInstance->GetRepresentationActorClassByRowHandle(RowHandle);
            if (!Class)
                return;

            FActorSpawnParameters ActorSpawnParameters;
            ActorSpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

            auto Actor = World->SpawnActor<AActor>(Class, GetActorTransform(), ActorSpawnParameters);
            if (!Actor)
                return;

            SceneCapture->ShowOnlyActors.Empty();
            SceneCapture->ShowOnlyActors.Add(Actor);

            const bool bChannel0 = false;
            const bool bChannel1 = true;
            const bool bChannel2 = false;

            auto Components = Actor->GetComponents().Array();
            for (auto Component : Components)
            {
                if (auto Prim = Cast<UPrimitiveComponent>(Component))
                {
                    Prim->SetLightingChannels(bChannel0, bChannel1, bChannel2);
                }
            }

            SceneCapture->CaptureScene();
        }
    }
}

void AIconRendering::RenderObjectToMID(UObject* Object, UMaterialInstanceDynamic* MID)
{
    if (!Object || !MID)
        return;


    if (auto Logic = Cast<ULogicBase>(Object))
    {
        auto RowHandle = Logic->GetLogicRowHandle();
        auto Find      = Textures.Find(RowHandle.RowName);
        if (auto* Found = Textures.Find(RowHandle.RowName))
        {
            auto RenderTarget = (*Found).Key;
            bool bReady       = (*Found).Value;

            if (RenderTarget)
            {
                MID->SetTextureParameterValue(MIDTextureParameterName, RenderTarget);

                if (bReady)
                    MID->SetScalarParameterValue(MIDTextureReadyParameterName, 1.f);
                else
                    MIDs.FindOrAdd(RenderTarget).Add(MID);
            }

            return;
        }



        if (auto NewRenderTarget = NewObject<UTextureRenderTarget2D>(this))
        {

            const int32 RTSize = 256;
            NewRenderTarget->InitAutoFormat(RTSize, RTSize);
            NewRenderTarget->ClearColor = FLinearColor(0, 0, 0, 0);
            NewRenderTarget->UpdateResourceImmediate(true);

            Textures.Add(RowHandle.RowName, TPair<UTextureRenderTarget2D*, bool>(NewRenderTarget, false));
            Queue.Enqueue(TPair<FDataTableRowHandle, UTextureRenderTarget2D*>(RowHandle, NewRenderTarget));

            MID->SetTextureParameterValue(MIDTextureParameterName, NewRenderTarget);
            MIDs.FindOrAdd(NewRenderTarget).Add(MID);
        }
    }
}

// RenderTarget = NewObject<UTextureRenderTarget2D>(this);
// RenderTarget->InitAutoFormat(256, 256);
// SceneCapture->TextureTarget = RenderTarget;
// auto Class = Logic->GetRepresentationActorClass();
