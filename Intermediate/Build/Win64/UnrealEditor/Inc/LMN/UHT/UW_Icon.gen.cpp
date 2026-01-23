// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LMN/UW_Icon.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeUW_Icon() {}

// ********** Begin Cross Module References ********************************************************
LMN_API UClass* Z_Construct_UClass_UUW_Icon();
LMN_API UClass* Z_Construct_UClass_UUW_Icon_NoRegister();
LMN_API UClass* Z_Construct_UClass_UUW_IconBase();
UPackage* Z_Construct_UPackage__Script_LMN();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UUW_Icon *****************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UUW_Icon;
UClass* UUW_Icon::GetPrivateStaticClass()
{
	using TClass = UUW_Icon;
	if (!Z_Registration_Info_UClass_UUW_Icon.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("UW_Icon"),
			Z_Registration_Info_UClass_UUW_Icon.InnerSingleton,
			StaticRegisterNativesUUW_Icon,
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
	return Z_Registration_Info_UClass_UUW_Icon.InnerSingleton;
}
UClass* Z_Construct_UClass_UUW_Icon_NoRegister()
{
	return UUW_Icon::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UUW_Icon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UW_Icon.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "UW_Icon.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UUW_Icon constinit property declarations *********************************
// ********** End Class UUW_Icon constinit property declarations ***********************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUW_Icon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UUW_Icon_Statics
UObject* (*const Z_Construct_UClass_UUW_Icon_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUW_IconBase,
	(UObject* (*)())Z_Construct_UPackage__Script_LMN,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUW_Icon_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUW_Icon_Statics::ClassParams = {
	&UUW_Icon::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUW_Icon_Statics::Class_MetaDataParams), Z_Construct_UClass_UUW_Icon_Statics::Class_MetaDataParams)
};
void UUW_Icon::StaticRegisterNativesUUW_Icon()
{
}
UClass* Z_Construct_UClass_UUW_Icon()
{
	if (!Z_Registration_Info_UClass_UUW_Icon.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUW_Icon.OuterSingleton, Z_Construct_UClass_UUW_Icon_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUW_Icon.OuterSingleton;
}
UUW_Icon::UUW_Icon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UUW_Icon);
UUW_Icon::~UUW_Icon() {}
// ********** End Class UUW_Icon *******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_UW_Icon_h__Script_LMN_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUW_Icon, UUW_Icon::StaticClass, TEXT("UUW_Icon"), &Z_Registration_Info_UClass_UUW_Icon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUW_Icon), 2831072603U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_UW_Icon_h__Script_LMN_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_UW_Icon_h__Script_LMN_2910602163{
	TEXT("/Script/LMN"),
	Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_UW_Icon_h__Script_LMN_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_UW_Icon_h__Script_LMN_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
