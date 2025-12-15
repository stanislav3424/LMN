// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LMN/RepresentationCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRepresentationCharacter() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
LMN_API UClass* Z_Construct_UClass_ARepresentationCharacter();
LMN_API UClass* Z_Construct_UClass_ARepresentationCharacter_NoRegister();
LMN_API UClass* Z_Construct_UClass_ULogicBase_NoRegister();
LMN_API UClass* Z_Construct_UClass_ULogicInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_LMN();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ARepresentationCharacter *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ARepresentationCharacter;
UClass* ARepresentationCharacter::GetPrivateStaticClass()
{
	using TClass = ARepresentationCharacter;
	if (!Z_Registration_Info_UClass_ARepresentationCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RepresentationCharacter"),
			Z_Registration_Info_UClass_ARepresentationCharacter.InnerSingleton,
			StaticRegisterNativesARepresentationCharacter,
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
	return Z_Registration_Info_UClass_ARepresentationCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_ARepresentationCharacter_NoRegister()
{
	return ARepresentationCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ARepresentationCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "RepresentationCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "RepresentationCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Logic_MetaData[] = {
		{ "ModuleRelativePath", "RepresentationCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ARepresentationCharacter constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Logic;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ARepresentationCharacter constinit property declarations *******************
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARepresentationCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ARepresentationCharacter_Statics

// ********** Begin Class ARepresentationCharacter Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARepresentationCharacter_Statics::NewProp_Logic = { "Logic", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARepresentationCharacter, Logic), Z_Construct_UClass_ULogicBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Logic_MetaData), NewProp_Logic_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARepresentationCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARepresentationCharacter_Statics::NewProp_Logic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARepresentationCharacter_Statics::PropPointers) < 2048);
// ********** End Class ARepresentationCharacter Property Definitions ******************************
UObject* (*const Z_Construct_UClass_ARepresentationCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_LMN,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARepresentationCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ARepresentationCharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_ULogicInterface_NoRegister, (int32)VTABLE_OFFSET(ARepresentationCharacter, ILogicInterface), false },  // 949278339
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARepresentationCharacter_Statics::ClassParams = {
	&ARepresentationCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ARepresentationCharacter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ARepresentationCharacter_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARepresentationCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ARepresentationCharacter_Statics::Class_MetaDataParams)
};
void ARepresentationCharacter::StaticRegisterNativesARepresentationCharacter()
{
}
UClass* Z_Construct_UClass_ARepresentationCharacter()
{
	if (!Z_Registration_Info_UClass_ARepresentationCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARepresentationCharacter.OuterSingleton, Z_Construct_UClass_ARepresentationCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARepresentationCharacter.OuterSingleton;
}
ARepresentationCharacter::ARepresentationCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ARepresentationCharacter);
ARepresentationCharacter::~ARepresentationCharacter() {}
// ********** End Class ARepresentationCharacter ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_RepresentationCharacter_h__Script_LMN_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARepresentationCharacter, ARepresentationCharacter::StaticClass, TEXT("ARepresentationCharacter"), &Z_Registration_Info_UClass_ARepresentationCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARepresentationCharacter), 2575947341U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_RepresentationCharacter_h__Script_LMN_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_RepresentationCharacter_h__Script_LMN_855700385{
	TEXT("/Script/LMN"),
	Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_RepresentationCharacter_h__Script_LMN_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_RepresentationCharacter_h__Script_LMN_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
