// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LMN/SceneComponentBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSceneComponentBase() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
LMN_API UClass* Z_Construct_UClass_USceneComponentBase();
LMN_API UClass* Z_Construct_UClass_USceneComponentBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_LMN();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USceneComponentBase ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USceneComponentBase;
UClass* USceneComponentBase::GetPrivateStaticClass()
{
	using TClass = USceneComponentBase;
	if (!Z_Registration_Info_UClass_USceneComponentBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SceneComponentBase"),
			Z_Registration_Info_UClass_USceneComponentBase.InnerSingleton,
			StaticRegisterNativesUSceneComponentBase,
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
	return Z_Registration_Info_UClass_USceneComponentBase.InnerSingleton;
}
UClass* Z_Construct_UClass_USceneComponentBase_NoRegister()
{
	return USceneComponentBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USceneComponentBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "SceneComponentBase.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "SceneComponentBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[] = {
		{ "ModuleRelativePath", "SceneComponentBase.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USceneComponentBase constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USceneComponentBase constinit property declarations ************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USceneComponentBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USceneComponentBase_Statics

// ********** Begin Class USceneComponentBase Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USceneComponentBase_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USceneComponentBase, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Object_MetaData), NewProp_Object_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USceneComponentBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneComponentBase_Statics::NewProp_Object,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USceneComponentBase_Statics::PropPointers) < 2048);
// ********** End Class USceneComponentBase Property Definitions ***********************************
UObject* (*const Z_Construct_UClass_USceneComponentBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_LMN,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USceneComponentBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USceneComponentBase_Statics::ClassParams = {
	&USceneComponentBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USceneComponentBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USceneComponentBase_Statics::PropPointers),
	0,
	0x00B000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USceneComponentBase_Statics::Class_MetaDataParams), Z_Construct_UClass_USceneComponentBase_Statics::Class_MetaDataParams)
};
void USceneComponentBase::StaticRegisterNativesUSceneComponentBase()
{
}
UClass* Z_Construct_UClass_USceneComponentBase()
{
	if (!Z_Registration_Info_UClass_USceneComponentBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USceneComponentBase.OuterSingleton, Z_Construct_UClass_USceneComponentBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USceneComponentBase.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USceneComponentBase);
USceneComponentBase::~USceneComponentBase() {}
// ********** End Class USceneComponentBase ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_SceneComponentBase_h__Script_LMN_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USceneComponentBase, USceneComponentBase::StaticClass, TEXT("USceneComponentBase"), &Z_Registration_Info_UClass_USceneComponentBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USceneComponentBase), 2188301320U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_SceneComponentBase_h__Script_LMN_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_SceneComponentBase_h__Script_LMN_368023050{
	TEXT("/Script/LMN"),
	Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_SceneComponentBase_h__Script_LMN_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_SceneComponentBase_h__Script_LMN_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
