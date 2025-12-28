// Fill out your copyright notice in the Description page of Project Settings.

#include "UW_DialogSelection.h"
#include "Components/Button.h"

void UUW_DialogSelection::NativeConstruct()
{
    Super::NativeConstruct();

    if (AcceptButton)
        AcceptButton->OnClicked.AddUniqueDynamic(this, &UUW_DialogSelection::OnAcceptButtonClicked);

    if (CancelButton)
        CancelButton->OnClicked.AddUniqueDynamic(this, &UUW_DialogSelection::OnCancelButtonClicked);
}

void UUW_DialogSelection::OnAcceptButtonClicked()
{
    CloseDialog();
    OnResultClick.Broadcast(true);
}

void UUW_DialogSelection::OnCancelButtonClicked()
{
    CloseDialog();
    OnResultClick.Broadcast(false);
}
