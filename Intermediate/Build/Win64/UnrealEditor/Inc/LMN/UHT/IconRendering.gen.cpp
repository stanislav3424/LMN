// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LMN/IconRendering.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeIconRendering() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
LMN_API UClass* Z_Construct_UClass_AIconRendering();
LMN_API UClass* Z_Construct_UClass_AIconRendering_NoRegister();
UPackage* Z_Construct_UPackage__Script_LMN();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AIconRendering ***********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AIconRendering;
UClass* AIconRendering::GetPrivateStaticClass()
{
	using TClass = AIconRendering;
	if (!Z_Registration_Info_UClass_AIconRendering.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("IconRendering"),
			Z_Registration_Info_UClass_AIconRendering.InnerSingleton,
			StaticRegisterNativesAIconRendering,
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
	return Z_Registration_Info_UClass_AIconRendering.InnerSingleton;
}
UClass* Z_Construct_UClass_AIconRendering_NoRegister()
{
	return AIconRendering::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AIconRendering_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "IconRendering.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "IconRendering.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneCapture_MetaData[] = {
		{ "Category", "IconRendering" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "IconRendering.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MIDTextureParameterName_MetaData[] = {
		{ "Category", "IconRendering" },
		{ "ModuleRelativePath", "IconRendering.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MIDTextureReadyParameterName_MetaData[] = {
		{ "Category", "IconRendering" },
		{ "ModuleRelativePath", "IconRendering.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedRepresentationActor_MetaData[] = {
		{ "ModuleRelativePath", "IconRendering.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AIconRendering constinit property declarations ***************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneCapture;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MIDTextureParameterName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MIDTextureReadyParameterName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedRepresentationActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AIconRendering constinit property declarations *****************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIconRendering>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AIconRendering_Statics

// ********** Begin Class AIconRendering Property Definitions **************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIconRendering_Statics::NewProp_SceneCapture = { "SceneCapture", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIconRendering, SceneCapture), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneCapture_MetaData), NewProp_SceneCapture_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AIconRendering_Statics::NewProp_MIDTextureParameterName = { "MIDTextureParameterName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIconRendering, MIDTextureParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MIDTextureParameterName_MetaData), NewProp_MIDTextureParameterName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AIconRendering_Statics::NewProp_MIDTextureReadyParameterName = { "MIDTextureReadyParameterName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIconRendering, MIDTextureReadyParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MIDTextureReadyParameterName_MetaData), NewProp_MIDTextureReadyParameterName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIconRendering_Statics::NewProp_SpawnedRepresentationActor = { "SpawnedRepresentationActor", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIconRendering, SpawnedRepresentationActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnedRepresentationActor_MetaData), NewProp_SpawnedRepresentationActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AIconRendering_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIconRendering_Statics::NewProp_SceneCapture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIconRendering_Statics::NewProp_MIDTextureParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIconRendering_Statics::NewProp_MIDTextureReadyParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIconRendering_Statics::NewProp_SpawnedRepresentationActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIconRendering_Statics::PropPointers) < 2048);
// ********** End Class AIconRendering Property Definitions ****************************************
UObject* (*const Z_Construct_UClass_AIconRendering_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_LMN,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIconRendering_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AIconRendering_Statics::ClassParams = {
	&AIconRendering::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AIconRendering_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AIconRendering_Statics::PropPointers),
	0,
	0x009000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIconRendering_Statics::Class_MetaDataParams), Z_Construct_UClass_AIconRendering_Statics::Class_MetaDataParams)
};
void AIconRendering::StaticRegisterNativesAIconRendering()
{
}
UClass* Z_Construct_UClass_AIconRendering()
{
	if (!Z_Registration_Info_UClass_AIconRendering.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIconRendering.OuterSingleton, Z_Construct_UClass_AIconRendering_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AIconRendering.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AIconRendering);
AIconRendering::~AIconRendering() {}
// ********** End Class AIconRendering *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_IconRendering_h__Script_LMN_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AIconRendering, AIconRendering::StaticClass, TEXT("AIconRendering"), &Z_Registration_Info_UClass_AIconRendering, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIconRendering), 2415844180U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_IconRendering_h__Script_LMN_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_IconRendering_h__Script_LMN_883770886{
	TEXT("/Script/LMN"),
	Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_IconRendering_h__Script_LMN_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_IconRendering_h__Script_LMN_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
