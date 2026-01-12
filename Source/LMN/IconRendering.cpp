// Fill out your copyright notice in the Description page of Project Settings.

#include "IconRendering.h"
#include "Components/SceneCaptureComponent2D.h"
#include "GameFramework/SpringArmComponent.h"
#include "Engine/TextureRenderTarget2D.h"
#include "LogicBase.h"
#include "GI_Main.h"
#include "GM_Main.h"
#include "BFL.h"
#include "Engine/World.h"
#include "EngineUtils.h"

AIconRendering::AIconRendering()
{
    PrimaryActorTick.bCanEverTick = true;
    PrimaryActorTick.TickInterval = 0.1f;

    auto Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    SetRootComponent(Root);

    SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
    SpringArm->SetupAttachment(Root);
    SpringArm->bDoCollisionTest = false;
    SpringArm->bEnableCameraLag = false;

    SceneCapture = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("SceneCapture"));
    SceneCapture->SetupAttachment(SpringArm);
    SceneCapture->bCaptureEveryFrame = false;
    SceneCapture->bCaptureOnMovement = false;
}

void AIconRendering::BeginPlay()
{
    Super::BeginPlay();
    WarmupCapture();
}

void AIconRendering::WarmupCapture()
{
    if (!SceneCapture)
        return;

    SceneCapture->bCaptureEveryFrame = true;
    SceneCapture->bCaptureOnMovement = false;
    WarmupElapsedTime = 0.0f;
    bIsWarmedUp = false;
}

void AIconRendering::CheckWorldReadiness()
{
    if (bIsWarmedUp)
        return;

    auto World = GetWorld();
    if (!World)
        return;

    bool bHasBegunPlay = World->HasBegunPlay();
    bool bActorsInitialized = World->AreActorsInitialized();
    bool bAsyncLoading = IsAsyncLoading();

    if (bHasBegunPlay && bActorsInitialized && !bAsyncLoading)
    {
        if (SceneCapture)
        {
            SceneCapture->CaptureScene();
            SceneCapture->bCaptureEveryFrame = false;
        }
        bIsWarmedUp = true;
        ReadinessCheckTimer = 0.0f;
    }
}

void AIconRendering::Tick(float DeltaSeconds)
{
    Super::Tick(DeltaSeconds);

    if (!bIsWarmedUp)
    {
        WarmupElapsedTime += DeltaSeconds;

        ReadinessCheckTimer += DeltaSeconds;
        if (ReadinessCheckTimer >= ReadinessCheckInterval)
        {
            CheckWorldReadiness();
            ReadinessCheckTimer = 0.0f;
        }

        if (WarmupElapsedTime >= WarmupDuration && SceneCapture)
        {
            SceneCapture->CaptureScene();
            SceneCapture->bCaptureEveryFrame = false;
            bIsWarmedUp = true;
        }

        return;
    }

    TPair<FDataTableRowHandle, UTextureRenderTarget2D*> Pair;
    if (Queue.Dequeue(Pair))
    {
        Render(Pair);
        const FDataTableRowHandle& RowHandle    = Pair.Key;
        UTextureRenderTarget2D*    RenderTarget = Pair.Value;

        if (!RenderTarget)
            return;
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

void AIconRendering::Render(TPair<FDataTableRowHandle, UTextureRenderTarget2D*>& Pair)
{
    if (!SceneCapture)
        return;

    const FDataTableRowHandle& RowHandle    = Pair.Key;
    UTextureRenderTarget2D*    RenderTarget = Pair.Value;
    TSubclassOf<AActor>        Class;

    SceneCapture->TextureTarget = RenderTarget;

    auto World = GetWorld();
    if (!World)
        return;
    auto GameInstance = World->GetGameInstance<UGI_Main>();
    if (!GameInstance)
        return;
    Class = GameInstance->GetRepresentationActorClassByRowHandle(RowHandle);
    if (!Class)
        return;

    FActorSpawnParameters ActorSpawnParameters;
    ActorSpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

    auto Actor = World->SpawnActor<AActor>(Class, GetActorTransform(), ActorSpawnParameters);
    if (!Actor)
        return;
    SettingCamera(Actor);


    SceneCapture->CaptureScene();
    Actor->Destroy();
}

void AIconRendering::SettingCamera(AActor* Actor)
{
    if (!Actor || !SceneCapture)
        return;

    SceneCapture->ShowOnlyActors.Empty();
    SceneCapture->ShowOnlyComponents.Empty();
    SceneCapture->ShowOnlyActorComponents(Actor, true);
    SetLightingChannels(Actor);

    FVector Origin;
    FVector Extent;
    Actor->GetActorBounds(true, Origin, Extent);
    float RequiredOrthoWidth     = FMath::Max(Extent.X, Extent.Y, Extent.Z) * 2.2f;
    SceneCapture->ProjectionType = ECameraProjectionMode::Orthographic;
    SceneCapture->OrthoWidth     = RequiredOrthoWidth;

    FVector Location = this->GetActorLocation();
    FVector Delta    = Location - Origin;
    Actor->SetActorLocation(Location + Delta);
}

void AIconRendering::SetLightingChannels(AActor* Actor)
{
    const bool bChannel0 = false;
    const bool bChannel1 = true;
    const bool bChannel2 = false;

    auto Components = Actor->GetComponents().Array();
    for (auto Component : Components)
        if (auto PrimitiveComponent = Cast<UPrimitiveComponent>(Component))
            PrimitiveComponent->SetLightingChannels(bChannel0, bChannel1, bChannel2);
}

void AIconRendering::RenderObjectToMID(UObject* Object, UMaterialInstanceDynamic* MID)
{
    if (!Object || !MID)
        return;
    auto Logic = Cast<ULogicBase>(Object);
    if (!Logic)
        return;

    auto RowHandle = Logic->GetLogicRowHandle();
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

void AIconRendering::GetIcon(UObject* Object, UMaterialInstanceDynamic* MID)
{
    if (!Object || !MID)
        return;

    if (auto World = Object->GetWorld())
        if (auto GM = World->GetAuthGameMode<AGM_Main>())
            if (auto IconRendering = GM->GetIconRendering())
                IconRendering->RenderObjectToMID(Object, MID);
}

AIconRendering* AIconRendering::Get(UWorld* World)
{
    if (World)
        if (auto GM = World->GetAuthGameMode<AGM_Main>())
            return GM->GetIconRendering();
    return nullptr;
}