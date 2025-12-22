// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LMN/LogicBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeLogicBase() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
LMN_API UClass* Z_Construct_UClass_ULogicBase();
LMN_API UClass* Z_Construct_UClass_ULogicBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_LMN();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ULogicBase ***************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ULogicBase;
UClass* ULogicBase::GetPrivateStaticClass()
{
	using TClass = ULogicBase;
	if (!Z_Registration_Info_UClass_ULogicBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("LogicBase"),
			Z_Registration_Info_UClass_ULogicBase.InnerSingleton,
			StaticRegisterNativesULogicBase,
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
	return Z_Registration_Info_UClass_ULogicBase.InnerSingleton;
}
UClass* Z_Construct_UClass_ULogicBase_NoRegister()
{
	return ULogicBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ULogicBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LogicBase.h" },
		{ "ModuleRelativePath", "LogicBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerLogic_MetaData[] = {
		{ "ModuleRelativePath", "LogicBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RepresentationActor_MetaData[] = {
		{ "ModuleRelativePath", "LogicBase.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ULogicBase constinit property declarations *******************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerLogic;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RepresentationActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ULogicBase constinit property declarations *********************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULogicBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ULogicBase_Statics

// ********** Begin Class ULogicBase Property Definitions ******************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULogicBase_Statics::NewProp_OwnerLogic = { "OwnerLogic", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULogicBase, OwnerLogic), Z_Construct_UClass_ULogicBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerLogic_MetaData), NewProp_OwnerLogic_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULogicBase_Statics::NewProp_RepresentationActor = { "RepresentationActor", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULogicBase, RepresentationActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RepresentationActor_MetaData), NewProp_RepresentationActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULogicBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULogicBase_Statics::NewProp_OwnerLogic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULogicBase_Statics::NewProp_RepresentationActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULogicBase_Statics::PropPointers) < 2048);
// ********** End Class ULogicBase Property Definitions ********************************************
UObject* (*const Z_Construct_UClass_ULogicBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_LMN,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULogicBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULogicBase_Statics::ClassParams = {
	&ULogicBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULogicBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULogicBase_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULogicBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ULogicBase_Statics::Class_MetaDataParams)
};
void ULogicBase::StaticRegisterNativesULogicBase()
{
}
UClass* Z_Construct_UClass_ULogicBase()
{
	if (!Z_Registration_Info_UClass_ULogicBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULogicBase.OuterSingleton, Z_Construct_UClass_ULogicBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULogicBase.OuterSingleton;
}
ULogicBase::ULogicBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ULogicBase);
ULogicBase::~ULogicBase() {}
// ********** End Class ULogicBase *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_LogicBase_h__Script_LMN_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULogicBase, ULogicBase::StaticClass, TEXT("ULogicBase"), &Z_Registration_Info_UClass_ULogicBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULogicBase), 2619874245U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_LogicBase_h__Script_LMN_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_LogicBase_h__Script_LMN_2915503826{
	TEXT("/Script/LMN"),
	Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_LogicBase_h__Script_LMN_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_LogicBase_h__Script_LMN_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
