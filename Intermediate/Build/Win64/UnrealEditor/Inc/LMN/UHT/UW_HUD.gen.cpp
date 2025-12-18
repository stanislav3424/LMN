// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LMN/UW_HUD.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeUW_HUD() {}

// ********** Begin Cross Module References ********************************************************
LMN_API UClass* Z_Construct_UClass_APC_Main_NoRegister();
LMN_API UClass* Z_Construct_UClass_UUW_Base();
LMN_API UClass* Z_Construct_UClass_UUW_HUD();
LMN_API UClass* Z_Construct_UClass_UUW_HUD_NoRegister();
UMG_API UClass* Z_Construct_UClass_UListView_NoRegister();
UPackage* Z_Construct_UPackage__Script_LMN();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UUW_HUD Function UpdateListView ******************************************
struct Z_Construct_UFunction_UUW_HUD_UpdateListView_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UW_HUD.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function UpdateListView constinit property declarations ************************
// ********** End Function UpdateListView constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUW_HUD_UpdateListView_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUW_HUD, nullptr, "UpdateListView", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUW_HUD_UpdateListView_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUW_HUD_UpdateListView_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UUW_HUD_UpdateListView()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUW_HUD_UpdateListView_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUW_HUD::execUpdateListView)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateListView();
	P_NATIVE_END;
}
// ********** End Class UUW_HUD Function UpdateListView ********************************************

// ********** Begin Class UUW_HUD ******************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UUW_HUD;
UClass* UUW_HUD::GetPrivateStaticClass()
{
	using TClass = UUW_HUD;
	if (!Z_Registration_Info_UClass_UUW_HUD.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("UW_HUD"),
			Z_Registration_Info_UClass_UUW_HUD.InnerSingleton,
			StaticRegisterNativesUUW_HUD,
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
	return Z_Registration_Info_UClass_UUW_HUD.InnerSingleton;
}
UClass* Z_Construct_UClass_UUW_HUD_NoRegister()
{
	return UUW_HUD::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UUW_HUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UW_HUD.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "UW_HUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PC_Main_MetaData[] = {
		{ "ModuleRelativePath", "UW_HUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedListView_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UW_HUD.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UUW_HUD constinit property declarations **********************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PC_Main;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedListView;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UUW_HUD constinit property declarations ************************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("UpdateListView"), .Pointer = &UUW_HUD::execUpdateListView },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUW_HUD_UpdateListView, "UpdateListView" }, // 4146830831
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUW_HUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UUW_HUD_Statics

// ********** Begin Class UUW_HUD Property Definitions *********************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUW_HUD_Statics::NewProp_PC_Main = { "PC_Main", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUW_HUD, PC_Main), Z_Construct_UClass_APC_Main_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PC_Main_MetaData), NewProp_PC_Main_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUW_HUD_Statics::NewProp_SelectedListView = { "SelectedListView", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUW_HUD, SelectedListView), Z_Construct_UClass_UListView_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedListView_MetaData), NewProp_SelectedListView_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUW_HUD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUW_HUD_Statics::NewProp_PC_Main,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUW_HUD_Statics::NewProp_SelectedListView,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUW_HUD_Statics::PropPointers) < 2048);
// ********** End Class UUW_HUD Property Definitions ***********************************************
UObject* (*const Z_Construct_UClass_UUW_HUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUW_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_LMN,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUW_HUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUW_HUD_Statics::ClassParams = {
	&UUW_HUD::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UUW_HUD_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UUW_HUD_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUW_HUD_Statics::Class_MetaDataParams), Z_Construct_UClass_UUW_HUD_Statics::Class_MetaDataParams)
};
void UUW_HUD::StaticRegisterNativesUUW_HUD()
{
	UClass* Class = UUW_HUD::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UUW_HUD_Statics::Funcs));
}
UClass* Z_Construct_UClass_UUW_HUD()
{
	if (!Z_Registration_Info_UClass_UUW_HUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUW_HUD.OuterSingleton, Z_Construct_UClass_UUW_HUD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUW_HUD.OuterSingleton;
}
UUW_HUD::UUW_HUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UUW_HUD);
UUW_HUD::~UUW_HUD() {}
// ********** End Class UUW_HUD ********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_UW_HUD_h__Script_LMN_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUW_HUD, UUW_HUD::StaticClass, TEXT("UUW_HUD"), &Z_Registration_Info_UClass_UUW_HUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUW_HUD), 603577725U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_UW_HUD_h__Script_LMN_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_UW_HUD_h__Script_LMN_109101077{
	TEXT("/Script/LMN"),
	Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_UW_HUD_h__Script_LMN_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_UW_HUD_h__Script_LMN_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
