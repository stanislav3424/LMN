// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LMN/EquipmentLogic.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeEquipmentLogic() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
LMN_API UClass* Z_Construct_UClass_UEquipmentLogic();
LMN_API UClass* Z_Construct_UClass_UEquipmentLogic_NoRegister();
LMN_API UClass* Z_Construct_UClass_ULogic();
UPackage* Z_Construct_UPackage__Script_LMN();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UEquipmentLogic **********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UEquipmentLogic;
UClass* UEquipmentLogic::GetPrivateStaticClass()
{
	using TClass = UEquipmentLogic;
	if (!Z_Registration_Info_UClass_UEquipmentLogic.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("EquipmentLogic"),
			Z_Registration_Info_UClass_UEquipmentLogic.InnerSingleton,
			StaticRegisterNativesUEquipmentLogic,
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
	return Z_Registration_Info_UClass_UEquipmentLogic.InnerSingleton;
}
UClass* Z_Construct_UClass_UEquipmentLogic_NoRegister()
{
	return UEquipmentLogic::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEquipmentLogic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EquipmentLogic.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "EquipmentLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentParentCharacter_MetaData[] = {
		{ "ModuleRelativePath", "EquipmentLogic.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UEquipmentLogic constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachmentParentCharacter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UEquipmentLogic constinit property declarations ****************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEquipmentLogic>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UEquipmentLogic_Statics

// ********** Begin Class UEquipmentLogic Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEquipmentLogic_Statics::NewProp_AttachmentParentCharacter = { "AttachmentParentCharacter", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEquipmentLogic, AttachmentParentCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachmentParentCharacter_MetaData), NewProp_AttachmentParentCharacter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEquipmentLogic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentLogic_Statics::NewProp_AttachmentParentCharacter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentLogic_Statics::PropPointers) < 2048);
// ********** End Class UEquipmentLogic Property Definitions ***************************************
UObject* (*const Z_Construct_UClass_UEquipmentLogic_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULogic,
	(UObject* (*)())Z_Construct_UPackage__Script_LMN,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentLogic_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEquipmentLogic_Statics::ClassParams = {
	&UEquipmentLogic::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEquipmentLogic_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentLogic_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentLogic_Statics::Class_MetaDataParams), Z_Construct_UClass_UEquipmentLogic_Statics::Class_MetaDataParams)
};
void UEquipmentLogic::StaticRegisterNativesUEquipmentLogic()
{
}
UClass* Z_Construct_UClass_UEquipmentLogic()
{
	if (!Z_Registration_Info_UClass_UEquipmentLogic.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEquipmentLogic.OuterSingleton, Z_Construct_UClass_UEquipmentLogic_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEquipmentLogic.OuterSingleton;
}
UEquipmentLogic::UEquipmentLogic(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UEquipmentLogic);
UEquipmentLogic::~UEquipmentLogic() {}
// ********** End Class UEquipmentLogic ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_EquipmentLogic_h__Script_LMN_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEquipmentLogic, UEquipmentLogic::StaticClass, TEXT("UEquipmentLogic"), &Z_Registration_Info_UClass_UEquipmentLogic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEquipmentLogic), 376354754U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_EquipmentLogic_h__Script_LMN_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_EquipmentLogic_h__Script_LMN_3606860750{
	TEXT("/Script/LMN"),
	Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_EquipmentLogic_h__Script_LMN_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_EquipmentLogic_h__Script_LMN_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
