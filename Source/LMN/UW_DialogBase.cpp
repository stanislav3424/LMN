// Fill out your copyright notice in the Description page of Project Settings.

#include "UW_DialogBase.h"
#include "Components/Button.h"
#include "UMG.h"
#include "Animation/WidgetAnimation.h"
#include "BFL.h"

void UUW_DialogBase::NativeConstruct()
{
    Super::NativeConstruct();

    FinishDelegate.BindUFunction(this, FName(TEXT("OnAnimFinished")));
    UUserWidget::BindToAnimationFinished(DialogAnimation, FinishDelegate);

}

void UUW_DialogBase::OnAnimFinished()
{
    bIsAnimating = false;
    bIsOpen      = !bIsOpen;
}

void UUW_DialogBase::OpenDialog()
{
    if (bIsAnimating)
        return;

    if (DialogAnimation)
    {
        bIsAnimating = true;
        PlayAnimation(DialogAnimation);
    }
    else
        bIsOpen = !bIsOpen;
}

void UUW_DialogBase::CloseDialog()
{
    if (bIsAnimating)
        return;

    if (DialogAnimation)
    {
        bIsAnimating = true;
        PlayAnimation(DialogAnimation, 0.f, 1, EUMGSequencePlayMode::Reverse);
    }
    else
        bIsOpen = !bIsOpen;
}

void UUW_DialogBase::Switch()
{
    if (bIsOpen)
        CloseDialog();
    else
        OpenDialog();
}
