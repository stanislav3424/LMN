// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LMN/PC_Main.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePC_Main() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
LMN_API UClass* Z_Construct_UClass_AHUD_Main_NoRegister();
LMN_API UClass* Z_Construct_UClass_APC_Main();
LMN_API UClass* Z_Construct_UClass_APC_Main_NoRegister();
LMN_API UEnum* Z_Construct_UEnum_LMN_ETypeAIAction();
LMN_API UFunction* Z_Construct_UDelegateFunction_LMN_OnActorsSelectedChange__DelegateSignature();
LMN_API UFunction* Z_Construct_UDelegateFunction_LMN_OnInventoryItemRotate__DelegateSignature();
LMN_API UFunction* Z_Construct_UDelegateFunction_LMN_OnTypeAIActionChange__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_LMN();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnActorsSelectedChange ***********************************************
struct Z_Construct_UDelegateFunction_LMN_OnActorsSelectedChange__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PC_Main.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnActorsSelectedChange constinit property declarations ***************
// ********** End Delegate FOnActorsSelectedChange constinit property declarations *****************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_LMN_OnActorsSelectedChange__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_LMN, nullptr, "OnActorsSelectedChange__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LMN_OnActorsSelectedChange__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LMN_OnActorsSelectedChange__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_LMN_OnActorsSelectedChange__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LMN_OnActorsSelectedChange__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnActorsSelectedChange_DelegateWrapper(const FMulticastScriptDelegate& OnActorsSelectedChange)
{
	OnActorsSelectedChange.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnActorsSelectedChange *************************************************

// ********** Begin Delegate FOnTypeAIActionChange *************************************************
struct Z_Construct_UDelegateFunction_LMN_OnTypeAIActionChange__DelegateSignature_Statics
{
	struct _Script_LMN_eventOnTypeAIActionChange_Parms
	{
		ETypeAIAction TypeAIAction;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PC_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypeAIAction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnTypeAIActionChange constinit property declarations *****************
	static const UECodeGen_Private::FBytePropertyParams NewProp_TypeAIAction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TypeAIAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnTypeAIActionChange constinit property declarations *******************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnTypeAIActionChange Property Definitions ****************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_LMN_OnTypeAIActionChange__DelegateSignature_Statics::NewProp_TypeAIAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_LMN_OnTypeAIActionChange__DelegateSignature_Statics::NewProp_TypeAIAction = { "TypeAIAction", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LMN_eventOnTypeAIActionChange_Parms, TypeAIAction), Z_Construct_UEnum_LMN_ETypeAIAction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypeAIAction_MetaData), NewProp_TypeAIAction_MetaData) }; // 3285316341
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LMN_OnTypeAIActionChange__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LMN_OnTypeAIActionChange__DelegateSignature_Statics::NewProp_TypeAIAction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LMN_OnTypeAIActionChange__DelegateSignature_Statics::NewProp_TypeAIAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LMN_OnTypeAIActionChange__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnTypeAIActionChange Property Definitions ******************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_LMN_OnTypeAIActionChange__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_LMN, nullptr, "OnTypeAIActionChange__DelegateSignature", 	Z_Construct_UDelegateFunction_LMN_OnTypeAIActionChange__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LMN_OnTypeAIActionChange__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_LMN_OnTypeAIActionChange__DelegateSignature_Statics::_Script_LMN_eventOnTypeAIActionChange_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LMN_OnTypeAIActionChange__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LMN_OnTypeAIActionChange__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_LMN_OnTypeAIActionChange__DelegateSignature_Statics::_Script_LMN_eventOnTypeAIActionChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_LMN_OnTypeAIActionChange__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LMN_OnTypeAIActionChange__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnTypeAIActionChange_DelegateWrapper(const FMulticastScriptDelegate& OnTypeAIActionChange, ETypeAIAction const& TypeAIAction)
{
	struct _Script_LMN_eventOnTypeAIActionChange_Parms
	{
		ETypeAIAction TypeAIAction;
	};
	_Script_LMN_eventOnTypeAIActionChange_Parms Parms;
	Parms.TypeAIAction=TypeAIAction;
	OnTypeAIActionChange.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnTypeAIActionChange ***************************************************

// ********** Begin Delegate FOnInventoryItemRotate ************************************************
struct Z_Construct_UDelegateFunction_LMN_OnInventoryItemRotate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PC_Main.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnInventoryItemRotate constinit property declarations ****************
// ********** End Delegate FOnInventoryItemRotate constinit property declarations ******************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_LMN_OnInventoryItemRotate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_LMN, nullptr, "OnInventoryItemRotate__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LMN_OnInventoryItemRotate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LMN_OnInventoryItemRotate__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_LMN_OnInventoryItemRotate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LMN_OnInventoryItemRotate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnInventoryItemRotate_DelegateWrapper(const FMulticastScriptDelegate& OnInventoryItemRotate)
{
	OnInventoryItemRotate.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnInventoryItemRotate **************************************************

// ********** Begin Class APC_Main *****************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_APC_Main;
UClass* APC_Main::GetPrivateStaticClass()
{
	using TClass = APC_Main;
	if (!Z_Registration_Info_UClass_APC_Main.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PC_Main"),
			Z_Registration_Info_UClass_APC_Main.InnerSingleton,
			StaticRegisterNativesAPC_Main,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_APC_Main.InnerSingleton;
}
UClass* Z_Construct_UClass_APC_Main_NoRegister()
{
	return APC_Main::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APC_Main_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "PC_Main.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "PC_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HUD_Main_MetaData[] = {
		{ "ModuleRelativePath", "PC_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorsSelected_MetaData[] = {
		{ "ModuleRelativePath", "PC_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddActorsSelected_MetaData[] = {
		{ "ModuleRelativePath", "PC_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemoveActorsSelected_MetaData[] = {
		{ "ModuleRelativePath", "PC_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultInputMappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "PC_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftClickInputAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "PC_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightClickInputAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "PC_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AIActionInputMappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "PC_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AIMoveToInputAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "PC_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AIAssaultInputAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "PC_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AIFootholdPositionInputAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "PC_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryInputMappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "PC_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryItemRotateInputAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "PC_Main.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class APC_Main constinit property declarations *********************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HUD_Main;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsSelected_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ActorsSelected;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AddActorsSelected_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_AddActorsSelected;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RemoveActorsSelected_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_RemoveActorsSelected;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultInputMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftClickInputAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightClickInputAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AIActionInputMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AIMoveToInputAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AIAssaultInputAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AIFootholdPositionInputAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryInputMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryItemRotateInputAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class APC_Main constinit property declarations ***********************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APC_Main>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_APC_Main_Statics

// ********** Begin Class APC_Main Property Definitions ********************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APC_Main_Statics::NewProp_HUD_Main = { "HUD_Main", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APC_Main, HUD_Main), Z_Construct_UClass_AHUD_Main_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HUD_Main_MetaData), NewProp_HUD_Main_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APC_Main_Statics::NewProp_ActorsSelected_ElementProp = { "ActorsSelected", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_APC_Main_Statics::NewProp_ActorsSelected = { "ActorsSelected", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APC_Main, ActorsSelected), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorsSelected_MetaData), NewProp_ActorsSelected_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APC_Main_Statics::NewProp_AddActorsSelected_ElementProp = { "AddActorsSelected", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_APC_Main_Statics::NewProp_AddActorsSelected = { "AddActorsSelected", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APC_Main, AddActorsSelected), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddActorsSelected_MetaData), NewProp_AddActorsSelected_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APC_Main_Statics::NewProp_RemoveActorsSelected_ElementProp = { "RemoveActorsSelected", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_APC_Main_Statics::NewProp_RemoveActorsSelected = { "RemoveActorsSelected", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APC_Main, RemoveActorsSelected), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemoveActorsSelected_MetaData), NewProp_RemoveActorsSelected_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APC_Main_Statics::NewProp_DefaultInputMappingContext = { "DefaultInputMappingContext", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APC_Main, DefaultInputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultInputMappingContext_MetaData), NewProp_DefaultInputMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APC_Main_Statics::NewProp_LeftClickInputAction = { "LeftClickInputAction", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APC_Main, LeftClickInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftClickInputAction_MetaData), NewProp_LeftClickInputAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APC_Main_Statics::NewProp_RightClickInputAction = { "RightClickInputAction", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APC_Main, RightClickInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightClickInputAction_MetaData), NewProp_RightClickInputAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APC_Main_Statics::NewProp_AIActionInputMappingContext = { "AIActionInputMappingContext", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APC_Main, AIActionInputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AIActionInputMappingContext_MetaData), NewProp_AIActionInputMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APC_Main_Statics::NewProp_AIMoveToInputAction = { "AIMoveToInputAction", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APC_Main, AIMoveToInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AIMoveToInputAction_MetaData), NewProp_AIMoveToInputAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APC_Main_Statics::NewProp_AIAssaultInputAction = { "AIAssaultInputAction", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APC_Main, AIAssaultInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AIAssaultInputAction_MetaData), NewProp_AIAssaultInputAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APC_Main_Statics::NewProp_AIFootholdPositionInputAction = { "AIFootholdPositionInputAction", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APC_Main, AIFootholdPositionInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AIFootholdPositionInputAction_MetaData), NewProp_AIFootholdPositionInputAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APC_Main_Statics::NewProp_InventoryInputMappingContext = { "InventoryInputMappingContext", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APC_Main, InventoryInputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryInputMappingContext_MetaData), NewProp_InventoryInputMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APC_Main_Statics::NewProp_InventoryItemRotateInputAction = { "InventoryItemRotateInputAction", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APC_Main, InventoryItemRotateInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryItemRotateInputAction_MetaData), NewProp_InventoryItemRotateInputAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APC_Main_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APC_Main_Statics::NewProp_HUD_Main,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APC_Main_Statics::NewProp_ActorsSelected_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APC_Main_Statics::NewProp_ActorsSelected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APC_Main_Statics::NewProp_AddActorsSelected_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APC_Main_Statics::NewProp_AddActorsSelected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APC_Main_Statics::NewProp_RemoveActorsSelected_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APC_Main_Statics::NewProp_RemoveActorsSelected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APC_Main_Statics::NewProp_DefaultInputMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APC_Main_Statics::NewProp_LeftClickInputAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APC_Main_Statics::NewProp_RightClickInputAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APC_Main_Statics::NewProp_AIActionInputMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APC_Main_Statics::NewProp_AIMoveToInputAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APC_Main_Statics::NewProp_AIAssaultInputAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APC_Main_Statics::NewProp_AIFootholdPositionInputAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APC_Main_Statics::NewProp_InventoryInputMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APC_Main_Statics::NewProp_InventoryItemRotateInputAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APC_Main_Statics::PropPointers) < 2048);
// ********** End Class APC_Main Property Definitions **********************************************
UObject* (*const Z_Construct_UClass_APC_Main_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_LMN,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APC_Main_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APC_Main_Statics::ClassParams = {
	&APC_Main::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APC_Main_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APC_Main_Statics::PropPointers),
	0,
	0x009002A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APC_Main_Statics::Class_MetaDataParams), Z_Construct_UClass_APC_Main_Statics::Class_MetaDataParams)
};
void APC_Main::StaticRegisterNativesAPC_Main()
{
}
UClass* Z_Construct_UClass_APC_Main()
{
	if (!Z_Registration_Info_UClass_APC_Main.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APC_Main.OuterSingleton, Z_Construct_UClass_APC_Main_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APC_Main.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, APC_Main);
APC_Main::~APC_Main() {}
// ********** End Class APC_Main *******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_PC_Main_h__Script_LMN_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APC_Main, APC_Main::StaticClass, TEXT("APC_Main"), &Z_Registration_Info_UClass_APC_Main, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APC_Main), 149583368U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_PC_Main_h__Script_LMN_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_PC_Main_h__Script_LMN_2970060707{
	TEXT("/Script/LMN"),
	Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_PC_Main_h__Script_LMN_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_PC_Main_h__Script_LMN_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
