// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LMN/UW_ProgressBar.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeUW_ProgressBar() {}

// ********** Begin Cross Module References ********************************************************
LMN_API UClass* Z_Construct_UClass_UUW_Base();
LMN_API UClass* Z_Construct_UClass_UUW_ProgressBar();
LMN_API UClass* Z_Construct_UClass_UUW_ProgressBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
UPackage* Z_Construct_UPackage__Script_LMN();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UUW_ProgressBar Function SetPercent **************************************
struct Z_Construct_UFunction_UUW_ProgressBar_SetPercent_Statics
{
	struct UW_ProgressBar_eventSetPercent_Parms
	{
		float Current;
		float Max;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UW_ProgressBar.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetPercent constinit property declarations ****************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Current;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Max;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetPercent constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetPercent Property Definitions ***************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUW_ProgressBar_SetPercent_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW_ProgressBar_eventSetPercent_Parms, Current), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUW_ProgressBar_SetPercent_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW_ProgressBar_eventSetPercent_Parms, Max), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUW_ProgressBar_SetPercent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUW_ProgressBar_SetPercent_Statics::NewProp_Current,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUW_ProgressBar_SetPercent_Statics::NewProp_Max,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUW_ProgressBar_SetPercent_Statics::PropPointers) < 2048);
// ********** End Function SetPercent Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUW_ProgressBar_SetPercent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUW_ProgressBar, nullptr, "SetPercent", 	Z_Construct_UFunction_UUW_ProgressBar_SetPercent_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUW_ProgressBar_SetPercent_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUW_ProgressBar_SetPercent_Statics::UW_ProgressBar_eventSetPercent_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUW_ProgressBar_SetPercent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUW_ProgressBar_SetPercent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUW_ProgressBar_SetPercent_Statics::UW_ProgressBar_eventSetPercent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUW_ProgressBar_SetPercent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUW_ProgressBar_SetPercent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUW_ProgressBar::execSetPercent)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Current);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Max);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPercent(Z_Param_Current,Z_Param_Max);
	P_NATIVE_END;
}
// ********** End Class UUW_ProgressBar Function SetPercent ****************************************

// ********** Begin Class UUW_ProgressBar **********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UUW_ProgressBar;
UClass* UUW_ProgressBar::GetPrivateStaticClass()
{
	using TClass = UUW_ProgressBar;
	if (!Z_Registration_Info_UClass_UUW_ProgressBar.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("UW_ProgressBar"),
			Z_Registration_Info_UClass_UUW_ProgressBar.InnerSingleton,
			StaticRegisterNativesUUW_ProgressBar,
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
	return Z_Registration_Info_UClass_UUW_ProgressBar.InnerSingleton;
}
UClass* Z_Construct_UClass_UUW_ProgressBar_NoRegister()
{
	return UUW_ProgressBar::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UUW_ProgressBar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UW_ProgressBar.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "UW_ProgressBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProgressBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UW_ProgressBar.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UUW_ProgressBar constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProgressBar;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UUW_ProgressBar constinit property declarations ****************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("SetPercent"), .Pointer = &UUW_ProgressBar::execSetPercent },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUW_ProgressBar_SetPercent, "SetPercent" }, // 1144373260
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUW_ProgressBar>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UUW_ProgressBar_Statics

// ********** Begin Class UUW_ProgressBar Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUW_ProgressBar_Statics::NewProp_ProgressBar = { "ProgressBar", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUW_ProgressBar, ProgressBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProgressBar_MetaData), NewProp_ProgressBar_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUW_ProgressBar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUW_ProgressBar_Statics::NewProp_ProgressBar,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUW_ProgressBar_Statics::PropPointers) < 2048);
// ********** End Class UUW_ProgressBar Property Definitions ***************************************
UObject* (*const Z_Construct_UClass_UUW_ProgressBar_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUW_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_LMN,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUW_ProgressBar_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUW_ProgressBar_Statics::ClassParams = {
	&UUW_ProgressBar::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UUW_ProgressBar_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UUW_ProgressBar_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUW_ProgressBar_Statics::Class_MetaDataParams), Z_Construct_UClass_UUW_ProgressBar_Statics::Class_MetaDataParams)
};
void UUW_ProgressBar::StaticRegisterNativesUUW_ProgressBar()
{
	UClass* Class = UUW_ProgressBar::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UUW_ProgressBar_Statics::Funcs));
}
UClass* Z_Construct_UClass_UUW_ProgressBar()
{
	if (!Z_Registration_Info_UClass_UUW_ProgressBar.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUW_ProgressBar.OuterSingleton, Z_Construct_UClass_UUW_ProgressBar_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUW_ProgressBar.OuterSingleton;
}
UUW_ProgressBar::UUW_ProgressBar(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UUW_ProgressBar);
UUW_ProgressBar::~UUW_ProgressBar() {}
// ********** End Class UUW_ProgressBar ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_UW_ProgressBar_h__Script_LMN_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUW_ProgressBar, UUW_ProgressBar::StaticClass, TEXT("UUW_ProgressBar"), &Z_Registration_Info_UClass_UUW_ProgressBar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUW_ProgressBar), 3669366275U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_UW_ProgressBar_h__Script_LMN_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_UW_ProgressBar_h__Script_LMN_1352159588{
	TEXT("/Script/LMN"),
	Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_UW_ProgressBar_h__Script_LMN_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_UW_ProgressBar_h__Script_LMN_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
