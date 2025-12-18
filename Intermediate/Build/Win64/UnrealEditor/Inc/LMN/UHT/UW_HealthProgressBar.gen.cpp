// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LMN/UW_HealthProgressBar.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeUW_HealthProgressBar() {}

// ********** Begin Cross Module References ********************************************************
LMN_API UClass* Z_Construct_UClass_UUW_HealthProgressBar();
LMN_API UClass* Z_Construct_UClass_UUW_HealthProgressBar_NoRegister();
LMN_API UClass* Z_Construct_UClass_UUW_ProgressBar();
UPackage* Z_Construct_UPackage__Script_LMN();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UUW_HealthProgressBar ****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UUW_HealthProgressBar;
UClass* UUW_HealthProgressBar::GetPrivateStaticClass()
{
	using TClass = UUW_HealthProgressBar;
	if (!Z_Registration_Info_UClass_UUW_HealthProgressBar.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("UW_HealthProgressBar"),
			Z_Registration_Info_UClass_UUW_HealthProgressBar.InnerSingleton,
			StaticRegisterNativesUUW_HealthProgressBar,
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
	return Z_Registration_Info_UClass_UUW_HealthProgressBar.InnerSingleton;
}
UClass* Z_Construct_UClass_UUW_HealthProgressBar_NoRegister()
{
	return UUW_HealthProgressBar::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UUW_HealthProgressBar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UW_HealthProgressBar.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "UW_HealthProgressBar.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UUW_HealthProgressBar constinit property declarations ********************
// ********** End Class UUW_HealthProgressBar constinit property declarations **********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUW_HealthProgressBar>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UUW_HealthProgressBar_Statics
UObject* (*const Z_Construct_UClass_UUW_HealthProgressBar_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUW_ProgressBar,
	(UObject* (*)())Z_Construct_UPackage__Script_LMN,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUW_HealthProgressBar_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUW_HealthProgressBar_Statics::ClassParams = {
	&UUW_HealthProgressBar::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUW_HealthProgressBar_Statics::Class_MetaDataParams), Z_Construct_UClass_UUW_HealthProgressBar_Statics::Class_MetaDataParams)
};
void UUW_HealthProgressBar::StaticRegisterNativesUUW_HealthProgressBar()
{
}
UClass* Z_Construct_UClass_UUW_HealthProgressBar()
{
	if (!Z_Registration_Info_UClass_UUW_HealthProgressBar.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUW_HealthProgressBar.OuterSingleton, Z_Construct_UClass_UUW_HealthProgressBar_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUW_HealthProgressBar.OuterSingleton;
}
UUW_HealthProgressBar::UUW_HealthProgressBar(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UUW_HealthProgressBar);
UUW_HealthProgressBar::~UUW_HealthProgressBar() {}
// ********** End Class UUW_HealthProgressBar ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_UW_HealthProgressBar_h__Script_LMN_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUW_HealthProgressBar, UUW_HealthProgressBar::StaticClass, TEXT("UUW_HealthProgressBar"), &Z_Registration_Info_UClass_UUW_HealthProgressBar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUW_HealthProgressBar), 2687805501U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_UW_HealthProgressBar_h__Script_LMN_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_UW_HealthProgressBar_h__Script_LMN_1220930986{
	TEXT("/Script/LMN"),
	Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_UW_HealthProgressBar_h__Script_LMN_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_UW_HealthProgressBar_h__Script_LMN_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
