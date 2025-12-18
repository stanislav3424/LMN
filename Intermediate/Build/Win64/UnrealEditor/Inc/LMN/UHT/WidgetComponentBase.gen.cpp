// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LMN/WidgetComponentBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWidgetComponentBase() {}

// ********** Begin Cross Module References ********************************************************
LMN_API UClass* Z_Construct_UClass_ULogicBase_NoRegister();
LMN_API UClass* Z_Construct_UClass_ULogicInterface_NoRegister();
LMN_API UClass* Z_Construct_UClass_UWidgetComponentBase();
LMN_API UClass* Z_Construct_UClass_UWidgetComponentBase_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent();
UPackage* Z_Construct_UPackage__Script_LMN();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWidgetComponentBase *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UWidgetComponentBase;
UClass* UWidgetComponentBase::GetPrivateStaticClass()
{
	using TClass = UWidgetComponentBase;
	if (!Z_Registration_Info_UClass_UWidgetComponentBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("WidgetComponentBase"),
			Z_Registration_Info_UClass_UWidgetComponentBase.InnerSingleton,
			StaticRegisterNativesUWidgetComponentBase,
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
	return Z_Registration_Info_UClass_UWidgetComponentBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UWidgetComponentBase_NoRegister()
{
	return UWidgetComponentBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWidgetComponentBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Activation Components|Activation Sockets Base Lighting LOD Mesh Mobility Trigger" },
		{ "IncludePath", "WidgetComponentBase.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "WidgetComponentBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LogicBase_MetaData[] = {
		{ "ModuleRelativePath", "WidgetComponentBase.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UWidgetComponentBase constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LogicBase;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UWidgetComponentBase constinit property declarations ***********************
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetComponentBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UWidgetComponentBase_Statics

// ********** Begin Class UWidgetComponentBase Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidgetComponentBase_Statics::NewProp_LogicBase = { "LogicBase", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidgetComponentBase, LogicBase), Z_Construct_UClass_ULogicBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LogicBase_MetaData), NewProp_LogicBase_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidgetComponentBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponentBase_Statics::NewProp_LogicBase,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetComponentBase_Statics::PropPointers) < 2048);
// ********** End Class UWidgetComponentBase Property Definitions **********************************
UObject* (*const Z_Construct_UClass_UWidgetComponentBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidgetComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_LMN,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetComponentBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UWidgetComponentBase_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_ULogicInterface_NoRegister, (int32)VTABLE_OFFSET(UWidgetComponentBase, ILogicInterface), false },  // 949278339
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidgetComponentBase_Statics::ClassParams = {
	&UWidgetComponentBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWidgetComponentBase_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetComponentBase_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetComponentBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UWidgetComponentBase_Statics::Class_MetaDataParams)
};
void UWidgetComponentBase::StaticRegisterNativesUWidgetComponentBase()
{
}
UClass* Z_Construct_UClass_UWidgetComponentBase()
{
	if (!Z_Registration_Info_UClass_UWidgetComponentBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidgetComponentBase.OuterSingleton, Z_Construct_UClass_UWidgetComponentBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWidgetComponentBase.OuterSingleton;
}
UWidgetComponentBase::UWidgetComponentBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UWidgetComponentBase);
UWidgetComponentBase::~UWidgetComponentBase() {}
// ********** End Class UWidgetComponentBase *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_WidgetComponentBase_h__Script_LMN_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWidgetComponentBase, UWidgetComponentBase::StaticClass, TEXT("UWidgetComponentBase"), &Z_Registration_Info_UClass_UWidgetComponentBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidgetComponentBase), 2684006499U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_WidgetComponentBase_h__Script_LMN_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_WidgetComponentBase_h__Script_LMN_2788126340{
	TEXT("/Script/LMN"),
	Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_WidgetComponentBase_h__Script_LMN_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_WidgetComponentBase_h__Script_LMN_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
