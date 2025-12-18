// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LMN/UW_Overhead.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeUW_Overhead() {}

// ********** Begin Cross Module References ********************************************************
LMN_API UClass* Z_Construct_UClass_UUW_Base();
LMN_API UClass* Z_Construct_UClass_UUW_Overhead();
LMN_API UClass* Z_Construct_UClass_UUW_Overhead_NoRegister();
UPackage* Z_Construct_UPackage__Script_LMN();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UUW_Overhead *************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UUW_Overhead;
UClass* UUW_Overhead::GetPrivateStaticClass()
{
	using TClass = UUW_Overhead;
	if (!Z_Registration_Info_UClass_UUW_Overhead.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("UW_Overhead"),
			Z_Registration_Info_UClass_UUW_Overhead.InnerSingleton,
			StaticRegisterNativesUUW_Overhead,
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
	return Z_Registration_Info_UClass_UUW_Overhead.InnerSingleton;
}
UClass* Z_Construct_UClass_UUW_Overhead_NoRegister()
{
	return UUW_Overhead::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UUW_Overhead_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UW_Overhead.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "UW_Overhead.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UUW_Overhead constinit property declarations *****************************
// ********** End Class UUW_Overhead constinit property declarations *******************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUW_Overhead>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UUW_Overhead_Statics
UObject* (*const Z_Construct_UClass_UUW_Overhead_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUW_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_LMN,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUW_Overhead_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUW_Overhead_Statics::ClassParams = {
	&UUW_Overhead::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUW_Overhead_Statics::Class_MetaDataParams), Z_Construct_UClass_UUW_Overhead_Statics::Class_MetaDataParams)
};
void UUW_Overhead::StaticRegisterNativesUUW_Overhead()
{
}
UClass* Z_Construct_UClass_UUW_Overhead()
{
	if (!Z_Registration_Info_UClass_UUW_Overhead.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUW_Overhead.OuterSingleton, Z_Construct_UClass_UUW_Overhead_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUW_Overhead.OuterSingleton;
}
UUW_Overhead::UUW_Overhead(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UUW_Overhead);
UUW_Overhead::~UUW_Overhead() {}
// ********** End Class UUW_Overhead ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_UW_Overhead_h__Script_LMN_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUW_Overhead, UUW_Overhead::StaticClass, TEXT("UUW_Overhead"), &Z_Registration_Info_UClass_UUW_Overhead, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUW_Overhead), 3400320071U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_UW_Overhead_h__Script_LMN_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_UW_Overhead_h__Script_LMN_3614429606{
	TEXT("/Script/LMN"),
	Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_UW_Overhead_h__Script_LMN_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_UW_Overhead_h__Script_LMN_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
