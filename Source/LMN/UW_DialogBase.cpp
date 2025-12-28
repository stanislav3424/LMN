// Fill out your copyright notice in the Description page of Project Settings.

#include "UW_DialogBase.h"
#include "Components/Button.h"
#include "UMG.h"
#include "Animation/WidgetAnimation.h"

void UUW_DialogBase::NativeConstruct()
{
    Super::NativeConstruct();
    
    FinishDelegate.BindUFunction(this, FName(TEXT("OnAnimFinished")));
    UUserWidget::BindToAnimationFinished(DialogAnimation, FinishDelegate);

    OpenDialog();
}

void UUW_DialogBase::OpenDialog()
{
    if (bIsAnimating)
        return;

    if (!IsInViewport())
        AddToViewport();

    if (DialogAnimation)
    {
        bIsAnimating        = true;
        bLastPlayWasReverse = false;
        PlayAnimation(DialogAnimation, 0.f, 1, EUMGSequencePlayMode::Reverse);
    }
    else
    {
        OnOpened();
    }
}

void UUW_DialogBase::CloseDialog()
{
    if (bIsAnimating)
        return;
    if (DialogAnimation)
    {
        bIsAnimating        = true;
        bLastPlayWasReverse = true;
        PlayAnimation(DialogAnimation);
    }
    else
    {
        OnClosed();
    }
}

void UUW_DialogBase::OnAnimFinished()
{
    bIsAnimating = false;
    if (bLastPlayWasReverse)
    {
        OnClosed();
    }
    else
    {
        OnOpened();
    }
}

void UUW_DialogBase::OnOpened()
{
}

void UUW_DialogBase::OnClosed()
{
    UUserWidget::UnbindAllFromAnimationFinished(DialogAnimation);

    RemoveFromParent();
}
