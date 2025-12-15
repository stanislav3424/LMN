// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IconRendering.generated.h"

class USceneCaptureComponent2D;

UCLASS(Blueprintable, Abstract)
class LMN_API AIconRendering : public AActor
{
    GENERATED_BODY()

public:
    AIconRendering();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaSeconds) override;

protected:
    UPROPERTY(VisibleAnywhere)
    USceneCaptureComponent2D* SceneCapture;

    UPROPERTY(EditDefaultsOnly, Category = "IconRendering")
    FName MIDTextureParameterName = TEXT("IconTexture");

    UPROPERTY(EditDefaultsOnly, Category = "IconRendering")
    FName MIDTextureReadyParameterName = TEXT("IsTextureReady");

    UPROPERTY()
    AActor* SpawnedRepresentationActor;

    TMap<FName, TPair<UTextureRenderTarget2D*, bool>> Textures;
    TMap<UTextureRenderTarget2D*, TArray<UMaterialInstanceDynamic*>> MIDs;
    TQueue<TPair<FDataTableRowHandle, UTextureRenderTarget2D*>> Queue;

    void Render(TPair<FDataTableRowHandle, UTextureRenderTarget2D*>& Pair);

public:
    void RenderObjectToMID(UObject* Object, UMaterialInstanceDynamic* MID);
};
