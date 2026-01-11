// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LMN/HUD_Main.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeHUD_Main() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_AHUD();
LMN_API UClass* Z_Construct_UClass_AGM_Main_NoRegister();
LMN_API UClass* Z_Construct_UClass_AHUD_Main();
LMN_API UClass* Z_Construct_UClass_AHUD_Main_NoRegister();
LMN_API UClass* Z_Construct_UClass_APC_Main_NoRegister();
LMN_API UClass* Z_Construct_UClass_UUW_HUD_NoRegister();
LMN_API UEnum* Z_Construct_UEnum_LMN_EGameStatus();
UPackage* Z_Construct_UPackage__Script_LMN();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AHUD_Main Function OnGameStatusChanged ***********************************
struct Z_Construct_UFunction_AHUD_Main_OnGameStatusChanged_Statics
{
	struct HUD_Main_eventOnGameStatusChanged_Parms
	{
		EGameStatus NewGameStatus;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HUD_Main.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnGameStatusChanged constinit property declarations *******************
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewGameStatus_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewGameStatus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnGameStatusChanged constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnGameStatusChanged Property Definitions ******************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AHUD_Main_OnGameStatusChanged_Statics::NewProp_NewGameStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AHUD_Main_OnGameStatusChanged_Statics::NewProp_NewGameStatus = { "NewGameStatus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HUD_Main_eventOnGameStatusChanged_Parms, NewGameStatus), Z_Construct_UEnum_LMN_EGameStatus, METADATA_PARAMS(0, nullptr) }; // 1834395129
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHUD_Main_OnGameStatusChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_Main_OnGameStatusChanged_Statics::NewProp_NewGameStatus_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_Main_OnGameStatusChanged_Statics::NewProp_NewGameStatus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHUD_Main_OnGameStatusChanged_Statics::PropPointers) < 2048);
// ********** End Function OnGameStatusChanged Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHUD_Main_OnGameStatusChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHUD_Main, nullptr, "OnGameStatusChanged", 	Z_Construct_UFunction_AHUD_Main_OnGameStatusChanged_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AHUD_Main_OnGameStatusChanged_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AHUD_Main_OnGameStatusChanged_Statics::HUD_Main_eventOnGameStatusChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHUD_Main_OnGameStatusChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHUD_Main_OnGameStatusChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AHUD_Main_OnGameStatusChanged_Statics::HUD_Main_eventOnGameStatusChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHUD_Main_OnGameStatusChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHUD_Main_OnGameStatusChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHUD_Main::execOnGameStatusChanged)
{
	P_GET_ENUM(EGameStatus,Z_Param_NewGameStatus);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnGameStatusChanged(EGameStatus(Z_Param_NewGameStatus));
	P_NATIVE_END;
}
// ********** End Class AHUD_Main Function OnGameStatusChanged *************************************

// ********** Begin Class AHUD_Main ****************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AHUD_Main;
UClass* AHUD_Main::GetPrivateStaticClass()
{
	using TClass = AHUD_Main;
	if (!Z_Registration_Info_UClass_AHUD_Main.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("HUD_Main"),
			Z_Registration_Info_UClass_AHUD_Main.InnerSingleton,
			StaticRegisterNativesAHUD_Main,
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
	return Z_Registration_Info_UClass_AHUD_Main.InnerSingleton;
}
UClass* Z_Construct_UClass_AHUD_Main_NoRegister()
{
	return AHUD_Main::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AHUD_Main_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "HUD_Main.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "HUD_Main.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[] = {
		{ "ModuleRelativePath", "HUD_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GM_Main_MetaData[] = {
		{ "ModuleRelativePath", "HUD_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UW_HUD_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FillColor_MetaData[] = {
		{ "Category", "Border" },
		{ "ModuleRelativePath", "HUD_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BorderColor_MetaData[] = {
		{ "Category", "Border" },
		{ "ModuleRelativePath", "HUD_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineThickness_MetaData[] = {
		{ "Category", "Border" },
		{ "ModuleRelativePath", "HUD_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UW_HUD_Class_MetaData[] = {
		{ "Category", "UMG" },
		{ "ModuleRelativePath", "HUD_Main.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AHUD_Main constinit property declarations ********************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GM_Main;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UW_HUD;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FillColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BorderColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LineThickness;
	static const UECodeGen_Private::FClassPropertyParams NewProp_UW_HUD_Class;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AHUD_Main constinit property declarations **********************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("OnGameStatusChanged"), .Pointer = &AHUD_Main::execOnGameStatusChanged },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AHUD_Main_OnGameStatusChanged, "OnGameStatusChanged" }, // 2052105963
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHUD_Main>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AHUD_Main_Statics

// ********** Begin Class AHUD_Main Property Definitions *******************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHUD_Main_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHUD_Main, PlayerController), Z_Construct_UClass_APC_Main_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerController_MetaData), NewProp_PlayerController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHUD_Main_Statics::NewProp_GM_Main = { "GM_Main", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHUD_Main, GM_Main), Z_Construct_UClass_AGM_Main_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GM_Main_MetaData), NewProp_GM_Main_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHUD_Main_Statics::NewProp_UW_HUD = { "UW_HUD", nullptr, (EPropertyFlags)0x0020080000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHUD_Main, UW_HUD), Z_Construct_UClass_UUW_HUD_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UW_HUD_MetaData), NewProp_UW_HUD_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHUD_Main_Statics::NewProp_FillColor = { "FillColor", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHUD_Main, FillColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FillColor_MetaData), NewProp_FillColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHUD_Main_Statics::NewProp_BorderColor = { "BorderColor", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHUD_Main, BorderColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BorderColor_MetaData), NewProp_BorderColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHUD_Main_Statics::NewProp_LineThickness = { "LineThickness", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHUD_Main, LineThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineThickness_MetaData), NewProp_LineThickness_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AHUD_Main_Statics::NewProp_UW_HUD_Class = { "UW_HUD_Class", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHUD_Main, UW_HUD_Class), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UUW_HUD_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UW_HUD_Class_MetaData), NewProp_UW_HUD_Class_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHUD_Main_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHUD_Main_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHUD_Main_Statics::NewProp_GM_Main,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHUD_Main_Statics::NewProp_UW_HUD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHUD_Main_Statics::NewProp_FillColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHUD_Main_Statics::NewProp_BorderColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHUD_Main_Statics::NewProp_LineThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHUD_Main_Statics::NewProp_UW_HUD_Class,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHUD_Main_Statics::PropPointers) < 2048);
// ********** End Class AHUD_Main Property Definitions *********************************************
UObject* (*const Z_Construct_UClass_AHUD_Main_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHUD,
	(UObject* (*)())Z_Construct_UPackage__Script_LMN,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHUD_Main_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHUD_Main_Statics::ClassParams = {
	&AHUD_Main::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AHUD_Main_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AHUD_Main_Statics::PropPointers),
	0,
	0x009002ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHUD_Main_Statics::Class_MetaDataParams), Z_Construct_UClass_AHUD_Main_Statics::Class_MetaDataParams)
};
void AHUD_Main::StaticRegisterNativesAHUD_Main()
{
	UClass* Class = AHUD_Main::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_AHUD_Main_Statics::Funcs));
}
UClass* Z_Construct_UClass_AHUD_Main()
{
	if (!Z_Registration_Info_UClass_AHUD_Main.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHUD_Main.OuterSingleton, Z_Construct_UClass_AHUD_Main_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHUD_Main.OuterSingleton;
}
AHUD_Main::AHUD_Main(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AHUD_Main);
AHUD_Main::~AHUD_Main() {}
// ********** End Class AHUD_Main ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_HUD_Main_h__Script_LMN_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHUD_Main, AHUD_Main::StaticClass, TEXT("AHUD_Main"), &Z_Registration_Info_UClass_AHUD_Main, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHUD_Main), 1643585582U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_HUD_Main_h__Script_LMN_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_HUD_Main_h__Script_LMN_1150204384{
	TEXT("/Script/LMN"),
	Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_HUD_Main_h__Script_LMN_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_HUD_Main_h__Script_LMN_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
