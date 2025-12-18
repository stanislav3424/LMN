// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LMN/ProgressBarWidgetComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeProgressBarWidgetComponent() {}

// ********** Begin Cross Module References ********************************************************
LMN_API UClass* Z_Construct_UClass_UProgressBarWidgetComponent();
LMN_API UClass* Z_Construct_UClass_UProgressBarWidgetComponent_NoRegister();
LMN_API UClass* Z_Construct_UClass_UWidgetComponentBase();
UPackage* Z_Construct_UPackage__Script_LMN();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UProgressBarWidgetComponent **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UProgressBarWidgetComponent;
UClass* UProgressBarWidgetComponent::GetPrivateStaticClass()
{
	using TClass = UProgressBarWidgetComponent;
	if (!Z_Registration_Info_UClass_UProgressBarWidgetComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ProgressBarWidgetComponent"),
			Z_Registration_Info_UClass_UProgressBarWidgetComponent.InnerSingleton,
			StaticRegisterNativesUProgressBarWidgetComponent,
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
	return Z_Registration_Info_UClass_UProgressBarWidgetComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UProgressBarWidgetComponent_NoRegister()
{
	return UProgressBarWidgetComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UProgressBarWidgetComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Object Activation Components|Activation Sockets Base Lighting LOD Mesh Mobility Trigger" },
		{ "IncludePath", "ProgressBarWidgetComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "ProgressBarWidgetComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UProgressBarWidgetComponent constinit property declarations **************
// ********** End Class UProgressBarWidgetComponent constinit property declarations ****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProgressBarWidgetComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UProgressBarWidgetComponent_Statics
UObject* (*const Z_Construct_UClass_UProgressBarWidgetComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidgetComponentBase,
	(UObject* (*)())Z_Construct_UPackage__Script_LMN,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProgressBarWidgetComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UProgressBarWidgetComponent_Statics::ClassParams = {
	&UProgressBarWidgetComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProgressBarWidgetComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UProgressBarWidgetComponent_Statics::Class_MetaDataParams)
};
void UProgressBarWidgetComponent::StaticRegisterNativesUProgressBarWidgetComponent()
{
}
UClass* Z_Construct_UClass_UProgressBarWidgetComponent()
{
	if (!Z_Registration_Info_UClass_UProgressBarWidgetComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProgressBarWidgetComponent.OuterSingleton, Z_Construct_UClass_UProgressBarWidgetComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UProgressBarWidgetComponent.OuterSingleton;
}
UProgressBarWidgetComponent::UProgressBarWidgetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UProgressBarWidgetComponent);
UProgressBarWidgetComponent::~UProgressBarWidgetComponent() {}
// ********** End Class UProgressBarWidgetComponent ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_ProgressBarWidgetComponent_h__Script_LMN_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UProgressBarWidgetComponent, UProgressBarWidgetComponent::StaticClass, TEXT("UProgressBarWidgetComponent"), &Z_Registration_Info_UClass_UProgressBarWidgetComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProgressBarWidgetComponent), 2642029540U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_ProgressBarWidgetComponent_h__Script_LMN_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_ProgressBarWidgetComponent_h__Script_LMN_3948715101{
	TEXT("/Script/LMN"),
	Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_ProgressBarWidgetComponent_h__Script_LMN_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_ProgressBarWidgetComponent_h__Script_LMN_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
