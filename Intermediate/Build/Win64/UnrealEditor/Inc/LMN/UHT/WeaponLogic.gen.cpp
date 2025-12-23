// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LMN/WeaponLogic.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWeaponLogic() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
LMN_API UClass* Z_Construct_UClass_UEquipmentLogic();
LMN_API UClass* Z_Construct_UClass_UWeaponLogic();
LMN_API UClass* Z_Construct_UClass_UWeaponLogic_NoRegister();
LMN_API UEnum* Z_Construct_UEnum_LMN_EGanSlot();
LMN_API UEnum* Z_Construct_UEnum_LMN_EWeaponState();
LMN_API UFunction* Z_Construct_UDelegateFunction_LMN_OnAmmoChanged__DelegateSignature();
LMN_API UFunction* Z_Construct_UDelegateFunction_LMN_OnAmmoEmpty__DelegateSignature();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_LMN();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnAmmoChanged ********************************************************
struct Z_Construct_UDelegateFunction_LMN_OnAmmoChanged__DelegateSignature_Statics
{
	struct _Script_LMN_eventOnAmmoChanged_Parms
	{
		int32 CurrentAmmo;
		int32 MaxAmmo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "WeaponLogic.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnAmmoChanged constinit property declarations ************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentAmmo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAmmo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnAmmoChanged constinit property declarations **************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnAmmoChanged Property Definitions ***********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_LMN_OnAmmoChanged__DelegateSignature_Statics::NewProp_CurrentAmmo = { "CurrentAmmo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LMN_eventOnAmmoChanged_Parms, CurrentAmmo), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_LMN_OnAmmoChanged__DelegateSignature_Statics::NewProp_MaxAmmo = { "MaxAmmo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LMN_eventOnAmmoChanged_Parms, MaxAmmo), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LMN_OnAmmoChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LMN_OnAmmoChanged__DelegateSignature_Statics::NewProp_CurrentAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LMN_OnAmmoChanged__DelegateSignature_Statics::NewProp_MaxAmmo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LMN_OnAmmoChanged__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnAmmoChanged Property Definitions *************************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_LMN_OnAmmoChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_LMN, nullptr, "OnAmmoChanged__DelegateSignature", 	Z_Construct_UDelegateFunction_LMN_OnAmmoChanged__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LMN_OnAmmoChanged__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_LMN_OnAmmoChanged__DelegateSignature_Statics::_Script_LMN_eventOnAmmoChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LMN_OnAmmoChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LMN_OnAmmoChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_LMN_OnAmmoChanged__DelegateSignature_Statics::_Script_LMN_eventOnAmmoChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_LMN_OnAmmoChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LMN_OnAmmoChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAmmoChanged_DelegateWrapper(const FMulticastScriptDelegate& OnAmmoChanged, int32 CurrentAmmo, int32 MaxAmmo)
{
	struct _Script_LMN_eventOnAmmoChanged_Parms
	{
		int32 CurrentAmmo;
		int32 MaxAmmo;
	};
	_Script_LMN_eventOnAmmoChanged_Parms Parms;
	Parms.CurrentAmmo=CurrentAmmo;
	Parms.MaxAmmo=MaxAmmo;
	OnAmmoChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnAmmoChanged **********************************************************

// ********** Begin Delegate FOnAmmoEmpty **********************************************************
struct Z_Construct_UDelegateFunction_LMN_OnAmmoEmpty__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "WeaponLogic.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnAmmoEmpty constinit property declarations **************************
// ********** End Delegate FOnAmmoEmpty constinit property declarations ****************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_LMN_OnAmmoEmpty__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_LMN, nullptr, "OnAmmoEmpty__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LMN_OnAmmoEmpty__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LMN_OnAmmoEmpty__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_LMN_OnAmmoEmpty__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LMN_OnAmmoEmpty__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAmmoEmpty_DelegateWrapper(const FMulticastScriptDelegate& OnAmmoEmpty)
{
	OnAmmoEmpty.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnAmmoEmpty ************************************************************

// ********** Begin Enum EGanSlot ******************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGanSlot;
static UEnum* EGanSlot_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGanSlot.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGanSlot.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LMN_EGanSlot, (UObject*)Z_Construct_UPackage__Script_LMN(), TEXT("EGanSlot"));
	}
	return Z_Registration_Info_UEnum_EGanSlot.OuterSingleton;
}
template<> LMN_NON_ATTRIBUTED_API UEnum* StaticEnum<EGanSlot>()
{
	return EGanSlot_StaticEnum();
}
struct Z_Construct_UEnum_LMN_EGanSlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "WeaponLogic.h" },
		{ "Muzzle.DisplayName", "Muzzle" },
		{ "Muzzle.Name", "EGanSlot::Muzzle" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGanSlot::Muzzle", (int64)EGanSlot::Muzzle },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_LMN_EGanSlot_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LMN_EGanSlot_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LMN,
	nullptr,
	"EGanSlot",
	"EGanSlot",
	Z_Construct_UEnum_LMN_EGanSlot_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LMN_EGanSlot_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LMN_EGanSlot_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LMN_EGanSlot_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LMN_EGanSlot()
{
	if (!Z_Registration_Info_UEnum_EGanSlot.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGanSlot.InnerSingleton, Z_Construct_UEnum_LMN_EGanSlot_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGanSlot.InnerSingleton;
}
// ********** End Enum EGanSlot ********************************************************************

// ********** Begin Enum EWeaponState **************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWeaponState;
static UEnum* EWeaponState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWeaponState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWeaponState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LMN_EWeaponState, (UObject*)Z_Construct_UPackage__Script_LMN(), TEXT("EWeaponState"));
	}
	return Z_Registration_Info_UEnum_EWeaponState.OuterSingleton;
}
template<> LMN_NON_ATTRIBUTED_API UEnum* StaticEnum<EWeaponState>()
{
	return EWeaponState_StaticEnum();
}
struct Z_Construct_UEnum_LMN_EWeaponState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Idle.DisplayName", "Idle" },
		{ "Idle.Name", "EWeaponState::Idle" },
		{ "ModuleRelativePath", "WeaponLogic.h" },
		{ "Reloading.DisplayName", "Reloading" },
		{ "Reloading.Name", "EWeaponState::Reloading" },
		{ "Shooting.DisplayName", "Shooting" },
		{ "Shooting.Name", "EWeaponState::Shooting" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWeaponState::Idle", (int64)EWeaponState::Idle },
		{ "EWeaponState::Shooting", (int64)EWeaponState::Shooting },
		{ "EWeaponState::Reloading", (int64)EWeaponState::Reloading },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_LMN_EWeaponState_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LMN_EWeaponState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LMN,
	nullptr,
	"EWeaponState",
	"EWeaponState",
	Z_Construct_UEnum_LMN_EWeaponState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LMN_EWeaponState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LMN_EWeaponState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LMN_EWeaponState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LMN_EWeaponState()
{
	if (!Z_Registration_Info_UEnum_EWeaponState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWeaponState.InnerSingleton, Z_Construct_UEnum_LMN_EWeaponState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWeaponState.InnerSingleton;
}
// ********** End Enum EWeaponState ****************************************************************

// ********** Begin Class UWeaponLogic *************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UWeaponLogic;
UClass* UWeaponLogic::GetPrivateStaticClass()
{
	using TClass = UWeaponLogic;
	if (!Z_Registration_Info_UClass_UWeaponLogic.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("WeaponLogic"),
			Z_Registration_Info_UClass_UWeaponLogic.InnerSingleton,
			StaticRegisterNativesUWeaponLogic,
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
	return Z_Registration_Info_UClass_UWeaponLogic.InnerSingleton;
}
UClass* Z_Construct_UClass_UWeaponLogic_NoRegister()
{
	return UWeaponLogic::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWeaponLogic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WeaponLogic.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "WeaponLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentParentCharacter_MetaData[] = {
		{ "ModuleRelativePath", "WeaponLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShootAnimMontage_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "WeaponLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReloadAnimMontage_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "WeaponLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletEffect_MetaData[] = {
		{ "Category", "FX" },
		{ "ModuleRelativePath", "WeaponLogic.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UWeaponLogic constinit property declarations *****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachmentParentCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShootAnimMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReloadAnimMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BulletEffect;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UWeaponLogic constinit property declarations *******************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeaponLogic>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UWeaponLogic_Statics

// ********** Begin Class UWeaponLogic Property Definitions ****************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponLogic_Statics::NewProp_AttachmentParentCharacter = { "AttachmentParentCharacter", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponLogic, AttachmentParentCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachmentParentCharacter_MetaData), NewProp_AttachmentParentCharacter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponLogic_Statics::NewProp_ShootAnimMontage = { "ShootAnimMontage", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponLogic, ShootAnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShootAnimMontage_MetaData), NewProp_ShootAnimMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponLogic_Statics::NewProp_ReloadAnimMontage = { "ReloadAnimMontage", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponLogic, ReloadAnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReloadAnimMontage_MetaData), NewProp_ReloadAnimMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponLogic_Statics::NewProp_BulletEffect = { "BulletEffect", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponLogic, BulletEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletEffect_MetaData), NewProp_BulletEffect_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeaponLogic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponLogic_Statics::NewProp_AttachmentParentCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponLogic_Statics::NewProp_ShootAnimMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponLogic_Statics::NewProp_ReloadAnimMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponLogic_Statics::NewProp_BulletEffect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponLogic_Statics::PropPointers) < 2048);
// ********** End Class UWeaponLogic Property Definitions ******************************************
UObject* (*const Z_Construct_UClass_UWeaponLogic_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEquipmentLogic,
	(UObject* (*)())Z_Construct_UPackage__Script_LMN,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponLogic_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeaponLogic_Statics::ClassParams = {
	&UWeaponLogic::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWeaponLogic_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponLogic_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponLogic_Statics::Class_MetaDataParams), Z_Construct_UClass_UWeaponLogic_Statics::Class_MetaDataParams)
};
void UWeaponLogic::StaticRegisterNativesUWeaponLogic()
{
}
UClass* Z_Construct_UClass_UWeaponLogic()
{
	if (!Z_Registration_Info_UClass_UWeaponLogic.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWeaponLogic.OuterSingleton, Z_Construct_UClass_UWeaponLogic_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWeaponLogic.OuterSingleton;
}
UWeaponLogic::UWeaponLogic() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UWeaponLogic);
UWeaponLogic::~UWeaponLogic() {}
// ********** End Class UWeaponLogic ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_WeaponLogic_h__Script_LMN_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGanSlot_StaticEnum, TEXT("EGanSlot"), &Z_Registration_Info_UEnum_EGanSlot, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3366262608U) },
		{ EWeaponState_StaticEnum, TEXT("EWeaponState"), &Z_Registration_Info_UEnum_EWeaponState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1124166449U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWeaponLogic, UWeaponLogic::StaticClass, TEXT("UWeaponLogic"), &Z_Registration_Info_UClass_UWeaponLogic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeaponLogic), 3369721927U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_WeaponLogic_h__Script_LMN_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_WeaponLogic_h__Script_LMN_3395496845{
	TEXT("/Script/LMN"),
	Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_WeaponLogic_h__Script_LMN_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_WeaponLogic_h__Script_LMN_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_WeaponLogic_h__Script_LMN_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_WeaponLogic_h__Script_LMN_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
