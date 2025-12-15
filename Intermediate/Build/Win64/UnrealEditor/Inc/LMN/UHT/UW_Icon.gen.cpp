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
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
LMN_API UClass* Z_Construct_UClass_UUW_Base();
LMN_API UClass* Z_Construct_UClass_UUW_Icon();
LMN_API UClass* Z_Construct_UClass_UUW_Icon_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UW_Icon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconMID_MetaData[] = {
		{ "ModuleRelativePath", "UW_Icon.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UUW_Icon constinit property declarations *********************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IconImage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IconMID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UUW_Icon constinit property declarations ***********************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUW_Icon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UUW_Icon_Statics

// ********** Begin Class UUW_Icon Property Definitions ********************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUW_Icon_Statics::NewProp_IconImage = { "IconImage", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUW_Icon, IconImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconImage_MetaData), NewProp_IconImage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUW_Icon_Statics::NewProp_IconMID = { "IconMID", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUW_Icon, IconMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconMID_MetaData), NewProp_IconMID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUW_Icon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUW_Icon_Statics::NewProp_IconImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUW_Icon_Statics::NewProp_IconMID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUW_Icon_Statics::PropPointers) < 2048);
// ********** End Class UUW_Icon Property Definitions **********************************************
UObject* (*const Z_Construct_UClass_UUW_Icon_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUW_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_LMN,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUW_Icon_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUW_Icon_Statics::ClassParams = {
	&UUW_Icon::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UUW_Icon_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UUW_Icon_Statics::PropPointers),
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
		{ Z_Construct_UClass_UUW_Icon, UUW_Icon::StaticClass, TEXT("UUW_Icon"), &Z_Registration_Info_UClass_UUW_Icon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUW_Icon), 3852700948U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_UW_Icon_h__Script_LMN_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_UW_Icon_h__Script_LMN_1148587894{
	TEXT("/Script/LMN"),
	Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_UW_Icon_h__Script_LMN_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_UW_Icon_h__Script_LMN_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
