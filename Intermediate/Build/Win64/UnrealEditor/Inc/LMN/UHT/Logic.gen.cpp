// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LMN/Logic.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeLogic() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
LMN_API UClass* Z_Construct_UClass_ULogic();
LMN_API UClass* Z_Construct_UClass_ULogic_NoRegister();
LMN_API UClass* Z_Construct_UClass_ULogicBase();
LMN_API UEnum* Z_Construct_UEnum_LMN_ETeam();
LMN_API UFunction* Z_Construct_UDelegateFunction_LMN_OnDied__DelegateSignature();
LMN_API UFunction* Z_Construct_UDelegateFunction_LMN_OnHealthChange__DelegateSignature();
LMN_API UFunction* Z_Construct_UDelegateFunction_LMN_OnSelectedChange__DelegateSignature();
LMN_API UFunction* Z_Construct_UDelegateFunction_LMN_OnTeamChange__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_LMN();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ETeam *********************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETeam;
static UEnum* ETeam_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETeam.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETeam.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LMN_ETeam, (UObject*)Z_Construct_UPackage__Script_LMN(), TEXT("ETeam"));
	}
	return Z_Registration_Info_UEnum_ETeam.OuterSingleton;
}
template<> LMN_NON_ATTRIBUTED_API UEnum* StaticEnum<ETeam>()
{
	return ETeam_StaticEnum();
}
struct Z_Construct_UEnum_LMN_ETeam_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Enemy.DisplayName", "Enemy" },
		{ "Enemy.Name", "ETeam::Enemy" },
		{ "ModuleRelativePath", "Logic.h" },
		{ "Neutral.DisplayName", "Neutral" },
		{ "Neutral.Name", "ETeam::Neutral" },
		{ "Player.DisplayName", "Player" },
		{ "Player.Name", "ETeam::Player" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETeam::Neutral", (int64)ETeam::Neutral },
		{ "ETeam::Player", (int64)ETeam::Player },
		{ "ETeam::Enemy", (int64)ETeam::Enemy },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_LMN_ETeam_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LMN_ETeam_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LMN,
	nullptr,
	"ETeam",
	"ETeam",
	Z_Construct_UEnum_LMN_ETeam_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LMN_ETeam_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LMN_ETeam_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LMN_ETeam_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LMN_ETeam()
{
	if (!Z_Registration_Info_UEnum_ETeam.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETeam.InnerSingleton, Z_Construct_UEnum_LMN_ETeam_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETeam.InnerSingleton;
}
// ********** End Enum ETeam ***********************************************************************

// ********** Begin Delegate FOnHealthChange *******************************************************
struct Z_Construct_UDelegateFunction_LMN_OnHealthChange__DelegateSignature_Statics
{
	struct _Script_LMN_eventOnHealthChange_Parms
	{
		float MaxHealth;
		float Current;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Logic.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnHealthChange constinit property declarations ***********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Current;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnHealthChange constinit property declarations *************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnHealthChange Property Definitions **********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_LMN_OnHealthChange__DelegateSignature_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LMN_eventOnHealthChange_Parms, MaxHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_LMN_OnHealthChange__DelegateSignature_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LMN_eventOnHealthChange_Parms, Current), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LMN_OnHealthChange__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LMN_OnHealthChange__DelegateSignature_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LMN_OnHealthChange__DelegateSignature_Statics::NewProp_Current,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LMN_OnHealthChange__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnHealthChange Property Definitions ************************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_LMN_OnHealthChange__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_LMN, nullptr, "OnHealthChange__DelegateSignature", 	Z_Construct_UDelegateFunction_LMN_OnHealthChange__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LMN_OnHealthChange__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_LMN_OnHealthChange__DelegateSignature_Statics::_Script_LMN_eventOnHealthChange_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LMN_OnHealthChange__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LMN_OnHealthChange__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_LMN_OnHealthChange__DelegateSignature_Statics::_Script_LMN_eventOnHealthChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_LMN_OnHealthChange__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LMN_OnHealthChange__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnHealthChange_DelegateWrapper(const FMulticastScriptDelegate& OnHealthChange, float MaxHealth, float Current)
{
	struct _Script_LMN_eventOnHealthChange_Parms
	{
		float MaxHealth;
		float Current;
	};
	_Script_LMN_eventOnHealthChange_Parms Parms;
	Parms.MaxHealth=MaxHealth;
	Parms.Current=Current;
	OnHealthChange.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnHealthChange *********************************************************

// ********** Begin Delegate FOnDied ***************************************************************
struct Z_Construct_UDelegateFunction_LMN_OnDied__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Logic.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnDied constinit property declarations *******************************
// ********** End Delegate FOnDied constinit property declarations *********************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_LMN_OnDied__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_LMN, nullptr, "OnDied__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LMN_OnDied__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LMN_OnDied__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_LMN_OnDied__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LMN_OnDied__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDied_DelegateWrapper(const FMulticastScriptDelegate& OnDied)
{
	OnDied.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnDied *****************************************************************

// ********** Begin Delegate FOnTeamChange *********************************************************
struct Z_Construct_UDelegateFunction_LMN_OnTeamChange__DelegateSignature_Statics
{
	struct _Script_LMN_eventOnTeamChange_Parms
	{
		ETeam Team;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Logic.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnTeamChange constinit property declarations *************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Team_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Team;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnTeamChange constinit property declarations ***************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnTeamChange Property Definitions ************************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_LMN_OnTeamChange__DelegateSignature_Statics::NewProp_Team_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_LMN_OnTeamChange__DelegateSignature_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LMN_eventOnTeamChange_Parms, Team), Z_Construct_UEnum_LMN_ETeam, METADATA_PARAMS(0, nullptr) }; // 4252509417
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LMN_OnTeamChange__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LMN_OnTeamChange__DelegateSignature_Statics::NewProp_Team_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LMN_OnTeamChange__DelegateSignature_Statics::NewProp_Team,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LMN_OnTeamChange__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnTeamChange Property Definitions **************************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_LMN_OnTeamChange__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_LMN, nullptr, "OnTeamChange__DelegateSignature", 	Z_Construct_UDelegateFunction_LMN_OnTeamChange__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LMN_OnTeamChange__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_LMN_OnTeamChange__DelegateSignature_Statics::_Script_LMN_eventOnTeamChange_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LMN_OnTeamChange__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LMN_OnTeamChange__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_LMN_OnTeamChange__DelegateSignature_Statics::_Script_LMN_eventOnTeamChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_LMN_OnTeamChange__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LMN_OnTeamChange__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnTeamChange_DelegateWrapper(const FMulticastScriptDelegate& OnTeamChange, ETeam Team)
{
	struct _Script_LMN_eventOnTeamChange_Parms
	{
		ETeam Team;
	};
	_Script_LMN_eventOnTeamChange_Parms Parms;
	Parms.Team=Team;
	OnTeamChange.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnTeamChange ***********************************************************

// ********** Begin Delegate FOnSelectedChange *****************************************************
struct Z_Construct_UDelegateFunction_LMN_OnSelectedChange__DelegateSignature_Statics
{
	struct _Script_LMN_eventOnSelectedChange_Parms
	{
		bool bIsSelected;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Logic.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnSelectedChange constinit property declarations *********************
	static void NewProp_bIsSelected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSelected;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnSelectedChange constinit property declarations ***********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnSelectedChange Property Definitions ********************************
void Z_Construct_UDelegateFunction_LMN_OnSelectedChange__DelegateSignature_Statics::NewProp_bIsSelected_SetBit(void* Obj)
{
	((_Script_LMN_eventOnSelectedChange_Parms*)Obj)->bIsSelected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_LMN_OnSelectedChange__DelegateSignature_Statics::NewProp_bIsSelected = { "bIsSelected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_LMN_eventOnSelectedChange_Parms), &Z_Construct_UDelegateFunction_LMN_OnSelectedChange__DelegateSignature_Statics::NewProp_bIsSelected_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LMN_OnSelectedChange__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LMN_OnSelectedChange__DelegateSignature_Statics::NewProp_bIsSelected,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LMN_OnSelectedChange__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnSelectedChange Property Definitions **********************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_LMN_OnSelectedChange__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_LMN, nullptr, "OnSelectedChange__DelegateSignature", 	Z_Construct_UDelegateFunction_LMN_OnSelectedChange__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LMN_OnSelectedChange__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_LMN_OnSelectedChange__DelegateSignature_Statics::_Script_LMN_eventOnSelectedChange_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LMN_OnSelectedChange__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LMN_OnSelectedChange__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_LMN_OnSelectedChange__DelegateSignature_Statics::_Script_LMN_eventOnSelectedChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_LMN_OnSelectedChange__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LMN_OnSelectedChange__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSelectedChange_DelegateWrapper(const FMulticastScriptDelegate& OnSelectedChange, bool bIsSelected)
{
	struct _Script_LMN_eventOnSelectedChange_Parms
	{
		bool bIsSelected;
	};
	_Script_LMN_eventOnSelectedChange_Parms Parms;
	Parms.bIsSelected=bIsSelected ? true : false;
	OnSelectedChange.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnSelectedChange *******************************************************

// ********** Begin Class ULogic Function HandleOwnerDamage ****************************************
struct Z_Construct_UFunction_ULogic_HandleOwnerDamage_Statics
{
	struct Logic_eventHandleOwnerDamage_Parms
	{
		AActor* DamagedActor;
		float Damage;
		const UDamageType* DamageType;
		AController* InstigatedBy;
		AActor* DamageCauser;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Logic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleOwnerDamage constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleOwnerDamage constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleOwnerDamage Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULogic_HandleOwnerDamage_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Logic_eventHandleOwnerDamage_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULogic_HandleOwnerDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Logic_eventHandleOwnerDamage_Parms, Damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULogic_HandleOwnerDamage_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Logic_eventHandleOwnerDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageType_MetaData), NewProp_DamageType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULogic_HandleOwnerDamage_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Logic_eventHandleOwnerDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULogic_HandleOwnerDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Logic_eventHandleOwnerDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogic_HandleOwnerDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogic_HandleOwnerDamage_Statics::NewProp_DamagedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogic_HandleOwnerDamage_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogic_HandleOwnerDamage_Statics::NewProp_DamageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogic_HandleOwnerDamage_Statics::NewProp_InstigatedBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogic_HandleOwnerDamage_Statics::NewProp_DamageCauser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogic_HandleOwnerDamage_Statics::PropPointers) < 2048);
// ********** End Function HandleOwnerDamage Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogic_HandleOwnerDamage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULogic, nullptr, "HandleOwnerDamage", 	Z_Construct_UFunction_ULogic_HandleOwnerDamage_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULogic_HandleOwnerDamage_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULogic_HandleOwnerDamage_Statics::Logic_eventHandleOwnerDamage_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogic_HandleOwnerDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULogic_HandleOwnerDamage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULogic_HandleOwnerDamage_Statics::Logic_eventHandleOwnerDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULogic_HandleOwnerDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULogic_HandleOwnerDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULogic::execHandleOwnerDamage)
{
	P_GET_OBJECT(AActor,Z_Param_DamagedActor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
	P_GET_OBJECT(UDamageType,Z_Param_DamageType);
	P_GET_OBJECT(AController,Z_Param_InstigatedBy);
	P_GET_OBJECT(AActor,Z_Param_DamageCauser);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleOwnerDamage(Z_Param_DamagedActor,Z_Param_Damage,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser);
	P_NATIVE_END;
}
// ********** End Class ULogic Function HandleOwnerDamage ******************************************

// ********** Begin Class ULogic *******************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ULogic;
UClass* ULogic::GetPrivateStaticClass()
{
	using TClass = ULogic;
	if (!Z_Registration_Info_UClass_ULogic.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("Logic"),
			Z_Registration_Info_UClass_ULogic.InnerSingleton,
			StaticRegisterNativesULogic,
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
	return Z_Registration_Info_UClass_ULogic.InnerSingleton;
}
UClass* Z_Construct_UClass_ULogic_NoRegister()
{
	return ULogic::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ULogic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Logic.h" },
		{ "ModuleRelativePath", "Logic.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ULogic constinit property declarations ***********************************
// ********** End Class ULogic constinit property declarations *************************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("HandleOwnerDamage"), .Pointer = &ULogic::execHandleOwnerDamage },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULogic_HandleOwnerDamage, "HandleOwnerDamage" }, // 3710622538
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULogic>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ULogic_Statics
UObject* (*const Z_Construct_UClass_ULogic_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULogicBase,
	(UObject* (*)())Z_Construct_UPackage__Script_LMN,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULogic_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULogic_Statics::ClassParams = {
	&ULogic::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULogic_Statics::Class_MetaDataParams), Z_Construct_UClass_ULogic_Statics::Class_MetaDataParams)
};
void ULogic::StaticRegisterNativesULogic()
{
	UClass* Class = ULogic::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_ULogic_Statics::Funcs));
}
UClass* Z_Construct_UClass_ULogic()
{
	if (!Z_Registration_Info_UClass_ULogic.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULogic.OuterSingleton, Z_Construct_UClass_ULogic_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULogic.OuterSingleton;
}
ULogic::ULogic(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ULogic);
ULogic::~ULogic() {}
// ********** End Class ULogic *********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_Logic_h__Script_LMN_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETeam_StaticEnum, TEXT("ETeam"), &Z_Registration_Info_UEnum_ETeam, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4252509417U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULogic, ULogic::StaticClass, TEXT("ULogic"), &Z_Registration_Info_UClass_ULogic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULogic), 2362923908U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_Logic_h__Script_LMN_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_Logic_h__Script_LMN_4216927016{
	TEXT("/Script/LMN"),
	Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_Logic_h__Script_LMN_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_Logic_h__Script_LMN_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_Logic_h__Script_LMN_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_Logic_h__Script_LMN_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
