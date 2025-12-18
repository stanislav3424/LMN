// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "LogicInterface.h"
#include "UW_Base.generated.h"

UCLASS(NotBlueprintable, Abstract)
class LMN_API UUW_Base : public UUserWidget, public ILogicInterface
{
	GENERATED_BODY()
	
	protected:
    // Called in editor and at runtime before Construct; useful to update preview properties
    //virtual void NativePreConstruct() override;

    // Called once after the widget is created; safe for one-time initialization that must happen before Construct
    //virtual void NativeOnInitialized() override;

    // Called when the widget is constructed and its subwidgets are ready; bind delegates and access child widgets here
    //virtual void NativeConstruct() override;

    // Per-frame update; use for lightweight per-frame logic (enable ticking in constructor if needed)
    //virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

    // Called when the widget is being removed/destroyed; cleanup and unbind delegates here
    //virtual void NativeDestruct() override;

    // Mouse input handlers; return FReply to control event propagation
    //virtual FReply NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;
    //virtual FReply NativeOnMouseButtonUp(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;
    //virtual FReply NativeOnMouseMove(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;

    // Mouse enter/leave notifications
    //virtual void NativeOnMouseEnter(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;
    //virtual void NativeOnMouseLeave(const FPointerEvent& InMouseEvent) override;

    // Keyboard focus handlers
    // virtual FReply NativeOnFocusReceived(const FGeometry& InGeometry, const FFocusEvent& InFocusEvent) override;
    // virtual void   NativeOnFocusLost(const FFocusEvent& InFocusEvent) override;

    protected:
        UPROPERTY()
        ULogicBase* LogicBase;

        virtual void ObjectUpdated() {};

        // LogicInterface
    public:
        virtual ULogicBase* GetLogic_Implementation() override;
        virtual void        SetLogic_Implementation(ULogicBase* NewLogic) override;

};
