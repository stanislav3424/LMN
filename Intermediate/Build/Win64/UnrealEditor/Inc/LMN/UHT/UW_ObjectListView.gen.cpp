// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LMN/UW_ObjectListView.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeUW_ObjectListView() {}

// ********** Begin Cross Module References ********************************************************
LMN_API UClass* Z_Construct_UClass_UUW_Base();
LMN_API UClass* Z_Construct_UClass_UUW_HealthProgressBar_NoRegister();
LMN_API UClass* Z_Construct_UClass_UUW_Icon_NoRegister();
LMN_API UClass* Z_Construct_UClass_UUW_ObjectListView();
LMN_API UClass* Z_Construct_UClass_UUW_ObjectListView_NoRegister();
LMN_API UClass* Z_Construct_UClass_UUW_StaminaProgressBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserObjectListEntry_NoRegister();
UPackage* Z_Construct_UPackage__Script_LMN();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UUW_ObjectListView *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UUW_ObjectListView;
UClass* UUW_ObjectListView::GetPrivateStaticClass()
{
	using TClass = UUW_ObjectListView;
	if (!Z_Registration_Info_UClass_UUW_ObjectListView.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("UW_ObjectListView"),
			Z_Registration_Info_UClass_UUW_ObjectListView.InnerSingleton,
			StaticRegisterNativesUUW_ObjectListView,
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
	return Z_Registration_Info_UClass_UUW_ObjectListView.InnerSingleton;
}
UClass* Z_Construct_UClass_UUW_ObjectListView_NoRegister()
{
	return UUW_ObjectListView::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UUW_ObjectListView_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UW_ObjectListView.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "UW_ObjectListView.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaminaProgressBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UW_ObjectListView.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthProgressBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UW_ObjectListView.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UW_Icon_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UW_ObjectListView.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UUW_ObjectListView constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaminaProgressBar;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthProgressBar;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UW_Icon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UUW_ObjectListView constinit property declarations *************************
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUW_ObjectListView>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UUW_ObjectListView_Statics

// ********** Begin Class UUW_ObjectListView Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUW_ObjectListView_Statics::NewProp_StaminaProgressBar = { "StaminaProgressBar", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUW_ObjectListView, StaminaProgressBar), Z_Construct_UClass_UUW_StaminaProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaminaProgressBar_MetaData), NewProp_StaminaProgressBar_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUW_ObjectListView_Statics::NewProp_HealthProgressBar = { "HealthProgressBar", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUW_ObjectListView, HealthProgressBar), Z_Construct_UClass_UUW_HealthProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthProgressBar_MetaData), NewProp_HealthProgressBar_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUW_ObjectListView_Statics::NewProp_UW_Icon = { "UW_Icon", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUW_ObjectListView, UW_Icon), Z_Construct_UClass_UUW_Icon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UW_Icon_MetaData), NewProp_UW_Icon_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUW_ObjectListView_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUW_ObjectListView_Statics::NewProp_StaminaProgressBar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUW_ObjectListView_Statics::NewProp_HealthProgressBar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUW_ObjectListView_Statics::NewProp_UW_Icon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUW_ObjectListView_Statics::PropPointers) < 2048);
// ********** End Class UUW_ObjectListView Property Definitions ************************************
UObject* (*const Z_Construct_UClass_UUW_ObjectListView_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUW_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_LMN,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUW_ObjectListView_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UUW_ObjectListView_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UUserObjectListEntry_NoRegister, (int32)VTABLE_OFFSET(UUW_ObjectListView, IUserObjectListEntry), false },  // 1012633399
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUW_ObjectListView_Statics::ClassParams = {
	&UUW_ObjectListView::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UUW_ObjectListView_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UUW_ObjectListView_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUW_ObjectListView_Statics::Class_MetaDataParams), Z_Construct_UClass_UUW_ObjectListView_Statics::Class_MetaDataParams)
};
void UUW_ObjectListView::StaticRegisterNativesUUW_ObjectListView()
{
}
UClass* Z_Construct_UClass_UUW_ObjectListView()
{
	if (!Z_Registration_Info_UClass_UUW_ObjectListView.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUW_ObjectListView.OuterSingleton, Z_Construct_UClass_UUW_ObjectListView_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUW_ObjectListView.OuterSingleton;
}
UUW_ObjectListView::UUW_ObjectListView(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UUW_ObjectListView);
UUW_ObjectListView::~UUW_ObjectListView() {}
// ********** End Class UUW_ObjectListView *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_UW_ObjectListView_h__Script_LMN_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUW_ObjectListView, UUW_ObjectListView::StaticClass, TEXT("UUW_ObjectListView"), &Z_Registration_Info_UClass_UUW_ObjectListView, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUW_ObjectListView), 1858710977U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_UW_ObjectListView_h__Script_LMN_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_UW_ObjectListView_h__Script_LMN_1110860751{
	TEXT("/Script/LMN"),
	Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_UW_ObjectListView_h__Script_LMN_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_UW_ObjectListView_h__Script_LMN_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
