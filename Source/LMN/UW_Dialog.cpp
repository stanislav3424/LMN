// Fill out your copyright notice in the Description page of Project Settings.

#include "UW_Dialog.h"
#include "Components/Button.h"

void UUW_Dialog::NativeConstruct()
{
    Super::NativeConstruct();

    if (CloseButton)
        CloseButton->OnClicked.AddUniqueDynamic(this, &UUW_Dialog::OnCloseButtonClicked);
}

void UUW_Dialog::OnCloseButtonClicked()
{
    CloseDialog();
}
