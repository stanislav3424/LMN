// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LMN/UW_Base.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeUW_Base() {}

// ********** Begin Cross Module References ********************************************************
LMN_API UClass* Z_Construct_UClass_ULogicBase_NoRegister();
LMN_API UClass* Z_Construct_UClass_ULogicInterface_NoRegister();
LMN_API UClass* Z_Construct_UClass_UUW_Base();
LMN_API UClass* Z_Construct_UClass_UUW_Base_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_LMN();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UUW_Base *****************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UUW_Base;
UClass* UUW_Base::GetPrivateStaticClass()
{
	using TClass = UUW_Base;
	if (!Z_Registration_Info_UClass_UUW_Base.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("UW_Base"),
			Z_Registration_Info_UClass_UUW_Base.InnerSingleton,
			StaticRegisterNativesUUW_Base,
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
	return Z_Registration_Info_UClass_UUW_Base.InnerSingleton;
}
UClass* Z_Construct_UClass_UUW_Base_NoRegister()
{
	return UUW_Base::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UUW_Base_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UW_Base.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "UW_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LogicBase_MetaData[] = {
		{ "ModuleRelativePath", "UW_Base.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UUW_Base constinit property declarations *********************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LogicBase;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UUW_Base constinit property declarations ***********************************
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUW_Base>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UUW_Base_Statics

// ********** Begin Class UUW_Base Property Definitions ********************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUW_Base_Statics::NewProp_LogicBase = { "LogicBase", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUW_Base, LogicBase), Z_Construct_UClass_ULogicBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LogicBase_MetaData), NewProp_LogicBase_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUW_Base_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUW_Base_Statics::NewProp_LogicBase,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUW_Base_Statics::PropPointers) < 2048);
// ********** End Class UUW_Base Property Definitions **********************************************
UObject* (*const Z_Construct_UClass_UUW_Base_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_LMN,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUW_Base_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UUW_Base_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_ULogicInterface_NoRegister, (int32)VTABLE_OFFSET(UUW_Base, ILogicInterface), false },  // 949278339
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUW_Base_Statics::ClassParams = {
	&UUW_Base::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UUW_Base_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UUW_Base_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUW_Base_Statics::Class_MetaDataParams), Z_Construct_UClass_UUW_Base_Statics::Class_MetaDataParams)
};
void UUW_Base::StaticRegisterNativesUUW_Base()
{
}
UClass* Z_Construct_UClass_UUW_Base()
{
	if (!Z_Registration_Info_UClass_UUW_Base.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUW_Base.OuterSingleton, Z_Construct_UClass_UUW_Base_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUW_Base.OuterSingleton;
}
UUW_Base::UUW_Base(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UUW_Base);
UUW_Base::~UUW_Base() {}
// ********** End Class UUW_Base *******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_UW_Base_h__Script_LMN_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUW_Base, UUW_Base::StaticClass, TEXT("UUW_Base"), &Z_Registration_Info_UClass_UUW_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUW_Base), 2448387001U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_UW_Base_h__Script_LMN_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_UW_Base_h__Script_LMN_4109470696{
	TEXT("/Script/LMN"),
	Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_UW_Base_h__Script_LMN_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_UW_Base_h__Script_LMN_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
