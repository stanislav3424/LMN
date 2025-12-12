// Fill out your copyright notice in the Description page of Project Settings.

#include "CameraPawn.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputMappingContext.h"
#include "InputAction.h"
#include "Kismet/KismetMathLibrary.h"
#include "BFL.h"

ACameraPawn::ACameraPawn()
{
    PrimaryActorTick.bCanEverTick = true;

    Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    SetRootComponent(Root);

    SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
    SpringArm->SetupAttachment(Root);
    SpringArm->bDoCollisionTest         = false;
    SpringArm->bEnableCameraLag         = false;
    SpringArm->bEnableCameraRotationLag = false;
    SpringArm->TargetArmLength          = 1200.f;
    SpringArm->SetRelativeRotation(FRotator(-60.f, 0.f, 0.f));

    Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
    Camera->SetupAttachment(SpringArm, USpringArmComponent::SocketName);

    MovementComponent                   = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("MovementComponent"));
    MovementComponent->UpdatedComponent = Root;

    AutoPossessPlayer = EAutoReceiveInput::Player0;
}

void ACameraPawn::BeginPlay()
{
    Super::BeginPlay();

    CHECK_FIELD(InputMappingContext);
    CHECK_FIELD(MoveInputAction);
    CHECK_FIELD(RotateInputAction);
    CHECK_FIELD(ZoomInputAction);

    TargetArmLength = SpringArm->TargetArmLength;
    TargetYaw       = GetActorRotation().Yaw;

    if (auto PlayerController = Cast<APlayerController>(GetController()))
        if (auto LocalPlayer = PlayerController->GetLocalPlayer())
            if (auto EnhancedInputLocalPlayerSubsystem =
                    LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>())
                EnhancedInputLocalPlayerSubsystem->AddMappingContext(InputMappingContext, 0);
}

void ACameraPawn::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (!FMath::IsNearlyZero(PendingRotateInput))
        TargetYaw += PendingRotateInput * RotateSpeed * DeltaTime;

    FVector Forward = UKismetMathLibrary::GetForwardVector(FRotator(0.f, TargetYaw, 0.f));
    FVector Right   = UKismetMathLibrary::GetRightVector(FRotator(0.f, TargetYaw, 0.f));

    if (!PendingMoveInput.IsNearlyZero())
    {
        AddMovementInput(Forward, PendingMoveInput.Y);
        AddMovementInput(Right, PendingMoveInput.X);
    }

    if (!FMath::IsNearlyZero(PendingZoomInput))
        TargetArmLength = FMath::Clamp(TargetArmLength + (-PendingZoomInput) * ZoomSpeed * DeltaTime, ZoomMin, ZoomMax);

    FVector ActorLocation = GetActorLocation();
    ActorLocation.X       = FMath::Clamp(ActorLocation.X, WorldBoundsMin.X, WorldBoundsMax.X);
    ActorLocation.Y       = FMath::Clamp(ActorLocation.Y, WorldBoundsMin.Y, WorldBoundsMax.Y);
    SetActorLocation(ActorLocation);

    FRotator CurrentRot = GetActorRotation();
    FRotator TargetRot  = FRotator(CurrentRot.Pitch, TargetYaw, CurrentRot.Roll);
    FRotator NewRot     = FMath::RInterpTo(CurrentRot, TargetRot, DeltaTime, 12.f);
    SetActorRotation(NewRot);

    float NewArmLength         = FMath::FInterpTo(SpringArm->TargetArmLength, TargetArmLength, DeltaTime, ZoomSmooth);
    SpringArm->TargetArmLength = NewArmLength;
}

void ACameraPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    if (auto EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
    {
        if (MoveInputAction)
        {
            EnhancedInputComponent->BindAction(MoveInputAction, ETriggerEvent::Started, this, &ACameraPawn::OnMove);
            EnhancedInputComponent->BindAction(MoveInputAction, ETriggerEvent::Triggered, this, &ACameraPawn::OnMove);
            EnhancedInputComponent->BindAction(MoveInputAction, ETriggerEvent::Completed, this, &ACameraPawn::OnMoveEnd);
            EnhancedInputComponent->BindAction(MoveInputAction, ETriggerEvent::Canceled, this, &ACameraPawn::OnMoveEnd);
        }

        if (RotateInputAction)
        {
            EnhancedInputComponent->BindAction(RotateInputAction, ETriggerEvent::Triggered, this, &ACameraPawn::OnRotate);
            EnhancedInputComponent->BindAction(RotateInputAction, ETriggerEvent::Completed, this, &ACameraPawn::OnRotateEnd);
            EnhancedInputComponent->BindAction(RotateInputAction, ETriggerEvent::Canceled, this, &ACameraPawn::OnRotateEnd);
        }

        if (ZoomInputAction)
        {
            EnhancedInputComponent->BindAction(ZoomInputAction, ETriggerEvent::Triggered, this, &ACameraPawn::OnZoom);
            EnhancedInputComponent->BindAction(ZoomInputAction, ETriggerEvent::Completed, this, &ACameraPawn::OnZoomEnd);
            EnhancedInputComponent->BindAction(ZoomInputAction, ETriggerEvent::Canceled, this, &ACameraPawn::OnZoomEnd);
        }
    }
}

void ACameraPawn::OnMove(const FInputActionValue& Value)
{
    PendingMoveInput = Value.Get<FVector2D>();
}

void ACameraPawn::OnMoveEnd(const FInputActionValue& Value)
{
    PendingMoveInput = FVector2D::ZeroVector;
}

void ACameraPawn::OnRotate(const FInputActionValue& Value)
{
    PendingRotateInput = Value.Get<float>();
}

void ACameraPawn::OnRotateEnd(const FInputActionValue& Value)
{
    PendingRotateInput = 0.f;
}

void ACameraPawn::OnZoom(const FInputActionValue& Value)
{
    PendingZoomInput = Value.Get<float>();
}

void ACameraPawn::OnZoomEnd(const FInputActionValue& Value)
{
    PendingZoomInput = 0.f;
}
