// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LMN/UW_StaminaProgressBar.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeUW_StaminaProgressBar() {}

// ********** Begin Cross Module References ********************************************************
LMN_API UClass* Z_Construct_UClass_UUW_ProgressBar();
LMN_API UClass* Z_Construct_UClass_UUW_StaminaProgressBar();
LMN_API UClass* Z_Construct_UClass_UUW_StaminaProgressBar_NoRegister();
UPackage* Z_Construct_UPackage__Script_LMN();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UUW_StaminaProgressBar ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UUW_StaminaProgressBar;
UClass* UUW_StaminaProgressBar::GetPrivateStaticClass()
{
	using TClass = UUW_StaminaProgressBar;
	if (!Z_Registration_Info_UClass_UUW_StaminaProgressBar.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("UW_StaminaProgressBar"),
			Z_Registration_Info_UClass_UUW_StaminaProgressBar.InnerSingleton,
			StaticRegisterNativesUUW_StaminaProgressBar,
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
	return Z_Registration_Info_UClass_UUW_StaminaProgressBar.InnerSingleton;
}
UClass* Z_Construct_UClass_UUW_StaminaProgressBar_NoRegister()
{
	return UUW_StaminaProgressBar::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UUW_StaminaProgressBar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UW_StaminaProgressBar.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "UW_StaminaProgressBar.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UUW_StaminaProgressBar constinit property declarations *******************
// ********** End Class UUW_StaminaProgressBar constinit property declarations *********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUW_StaminaProgressBar>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UUW_StaminaProgressBar_Statics
UObject* (*const Z_Construct_UClass_UUW_StaminaProgressBar_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUW_ProgressBar,
	(UObject* (*)())Z_Construct_UPackage__Script_LMN,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUW_StaminaProgressBar_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUW_StaminaProgressBar_Statics::ClassParams = {
	&UUW_StaminaProgressBar::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUW_StaminaProgressBar_Statics::Class_MetaDataParams), Z_Construct_UClass_UUW_StaminaProgressBar_Statics::Class_MetaDataParams)
};
void UUW_StaminaProgressBar::StaticRegisterNativesUUW_StaminaProgressBar()
{
}
UClass* Z_Construct_UClass_UUW_StaminaProgressBar()
{
	if (!Z_Registration_Info_UClass_UUW_StaminaProgressBar.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUW_StaminaProgressBar.OuterSingleton, Z_Construct_UClass_UUW_StaminaProgressBar_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUW_StaminaProgressBar.OuterSingleton;
}
UUW_StaminaProgressBar::UUW_StaminaProgressBar(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UUW_StaminaProgressBar);
UUW_StaminaProgressBar::~UUW_StaminaProgressBar() {}
// ********** End Class UUW_StaminaProgressBar *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_UW_StaminaProgressBar_h__Script_LMN_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUW_StaminaProgressBar, UUW_StaminaProgressBar::StaticClass, TEXT("UUW_StaminaProgressBar"), &Z_Registration_Info_UClass_UUW_StaminaProgressBar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUW_StaminaProgressBar), 3164692306U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_UW_StaminaProgressBar_h__Script_LMN_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_UW_StaminaProgressBar_h__Script_LMN_1346328373{
	TEXT("/Script/LMN"),
	Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_UW_StaminaProgressBar_h__Script_LMN_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_UW_StaminaProgressBar_h__Script_LMN_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
