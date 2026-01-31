// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UW_Base.h"
#include "UW_InventoryGrid.generated.h"

class USizeBox;
class UCanvasPanel;
class UImage;
class UMaterialInterface;
class ULogic;

UCLASS(Blueprintable, Abstract)
class LMN_API UUW_InventoryGrid : public UUW_Base
{
    GENERATED_BODY()

    UUW_InventoryGrid();

protected:
    virtual void ObjectUpdated(UObject* OldLogic, UObject* NewLogic);
    virtual bool NativeOnDrop(
        const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation) override;
    virtual void NativeOnDragEnter(
        const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation) override;
    virtual bool NativeOnDragOver(
        const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation) override;
    virtual void NativeOnDragLeave(const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation) override;

    UFUNCTION()
    void OnInventoryChanged();

    UPROPERTY(meta = (BindWidget))
    USizeBox* SizeBox;

    UPROPERTY(meta = (BindWidget))
    UCanvasPanel* CanvasPanel;

    UPROPERTY(EditDefaultsOnly, Category = "ItemWidget")
    TSubclassOf<UUserWidget> ItemWidgetClass;

    FIntVector2 GetAdjustedPositionForItem(const FGeometry& InGeometry, const FVector2D& MousePosition, ULogic* Item) const;
    ULogic* GetItemInPosition(const FGeometry& InGeometry, const FVector2D& MousePosition);
    
    void SetGridPreviewEnabled(bool bEnabled);
    void UpdateGridPreviewPosition(const FGeometry& InGeometry, const FVector2D& MousePosition, ULogic* Item);

    UPROPERTY()
    UImage* GridPreviewImage;

    UPROPERTY(EditDefaultsOnly, Category = "GridPreview")
    UMaterialInterface* GridPreviewMaterial;

    UPROPERTY(EditDefaultsOnly, Category = "GridPreview")
    FName PreviewOverlayParameterName = FName(TEXT("CanPlace"));
};
