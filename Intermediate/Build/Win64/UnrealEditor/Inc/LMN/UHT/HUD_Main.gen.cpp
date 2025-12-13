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
LMN_API UClass* Z_Construct_UClass_AHUD_Main();
LMN_API UClass* Z_Construct_UClass_AHUD_Main_NoRegister();
LMN_API UClass* Z_Construct_UClass_APC_Main_NoRegister();
LMN_API UClass* Z_Construct_UClass_UUW_HUD_NoRegister();
UPackage* Z_Construct_UPackage__Script_LMN();
// ********** End Cross Module References **********************************************************

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
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "HUD_Main.h" },
		{ "ModuleRelativePath", "HUD_Main.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerControllerRef_MetaData[] = {
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
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerControllerRef;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FillColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BorderColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LineThickness;
	static const UECodeGen_Private::FClassPropertyParams NewProp_UW_HUD_Class;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AHUD_Main constinit property declarations **********************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHUD_Main>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AHUD_Main_Statics

// ********** Begin Class AHUD_Main Property Definitions *******************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHUD_Main_Statics::NewProp_PlayerControllerRef = { "PlayerControllerRef", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHUD_Main, PlayerControllerRef), Z_Construct_UClass_APC_Main_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerControllerRef_MetaData), NewProp_PlayerControllerRef_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHUD_Main_Statics::NewProp_FillColor = { "FillColor", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHUD_Main, FillColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FillColor_MetaData), NewProp_FillColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHUD_Main_Statics::NewProp_BorderColor = { "BorderColor", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHUD_Main, BorderColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BorderColor_MetaData), NewProp_BorderColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHUD_Main_Statics::NewProp_LineThickness = { "LineThickness", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHUD_Main, LineThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineThickness_MetaData), NewProp_LineThickness_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AHUD_Main_Statics::NewProp_UW_HUD_Class = { "UW_HUD_Class", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHUD_Main, UW_HUD_Class), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UUW_HUD_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UW_HUD_Class_MetaData), NewProp_UW_HUD_Class_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHUD_Main_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHUD_Main_Statics::NewProp_PlayerControllerRef,
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
	nullptr,
	Z_Construct_UClass_AHUD_Main_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AHUD_Main_Statics::PropPointers),
	0,
	0x009002ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHUD_Main_Statics::Class_MetaDataParams), Z_Construct_UClass_AHUD_Main_Statics::Class_MetaDataParams)
};
void AHUD_Main::StaticRegisterNativesAHUD_Main()
{
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
		{ Z_Construct_UClass_AHUD_Main, AHUD_Main::StaticClass, TEXT("AHUD_Main"), &Z_Registration_Info_UClass_AHUD_Main, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHUD_Main), 305877818U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_HUD_Main_h__Script_LMN_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_HUD_Main_h__Script_LMN_2956511689{
	TEXT("/Script/LMN"),
	Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_HUD_Main_h__Script_LMN_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_HUD_Main_h__Script_LMN_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
