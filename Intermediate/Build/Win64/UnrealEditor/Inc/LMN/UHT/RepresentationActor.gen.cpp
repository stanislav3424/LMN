// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LMN/RepresentationActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRepresentationActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
LMN_API UClass* Z_Construct_UClass_ARepresentationActor();
LMN_API UClass* Z_Construct_UClass_ARepresentationActor_NoRegister();
LMN_API UClass* Z_Construct_UClass_ULogicBase_NoRegister();
LMN_API UClass* Z_Construct_UClass_ULogicInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_LMN();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ARepresentationActor *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ARepresentationActor;
UClass* ARepresentationActor::GetPrivateStaticClass()
{
	using TClass = ARepresentationActor;
	if (!Z_Registration_Info_UClass_ARepresentationActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RepresentationActor"),
			Z_Registration_Info_UClass_ARepresentationActor.InnerSingleton,
			StaticRegisterNativesARepresentationActor,
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
	return Z_Registration_Info_UClass_ARepresentationActor.InnerSingleton;
}
UClass* Z_Construct_UClass_ARepresentationActor_NoRegister()
{
	return ARepresentationActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ARepresentationActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "RepresentationActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "RepresentationActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Logic_MetaData[] = {
		{ "ModuleRelativePath", "RepresentationActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ARepresentationActor constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Logic;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ARepresentationActor constinit property declarations ***********************
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARepresentationActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ARepresentationActor_Statics

// ********** Begin Class ARepresentationActor Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARepresentationActor_Statics::NewProp_Logic = { "Logic", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARepresentationActor, Logic), Z_Construct_UClass_ULogicBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Logic_MetaData), NewProp_Logic_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARepresentationActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARepresentationActor_Statics::NewProp_Logic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARepresentationActor_Statics::PropPointers) < 2048);
// ********** End Class ARepresentationActor Property Definitions **********************************
UObject* (*const Z_Construct_UClass_ARepresentationActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_LMN,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARepresentationActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ARepresentationActor_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_ULogicInterface_NoRegister, (int32)VTABLE_OFFSET(ARepresentationActor, ILogicInterface), false },  // 949278339
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARepresentationActor_Statics::ClassParams = {
	&ARepresentationActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ARepresentationActor_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ARepresentationActor_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARepresentationActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ARepresentationActor_Statics::Class_MetaDataParams)
};
void ARepresentationActor::StaticRegisterNativesARepresentationActor()
{
}
UClass* Z_Construct_UClass_ARepresentationActor()
{
	if (!Z_Registration_Info_UClass_ARepresentationActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARepresentationActor.OuterSingleton, Z_Construct_UClass_ARepresentationActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARepresentationActor.OuterSingleton;
}
ARepresentationActor::ARepresentationActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ARepresentationActor);
ARepresentationActor::~ARepresentationActor() {}
// ********** End Class ARepresentationActor *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_RepresentationActor_h__Script_LMN_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARepresentationActor, ARepresentationActor::StaticClass, TEXT("ARepresentationActor"), &Z_Registration_Info_UClass_ARepresentationActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARepresentationActor), 1245256099U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_RepresentationActor_h__Script_LMN_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_RepresentationActor_h__Script_LMN_2040502157{
	TEXT("/Script/LMN"),
	Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_RepresentationActor_h__Script_LMN_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_RepresentationActor_h__Script_LMN_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
