// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LMN/CharacterLogic.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCharacterLogic() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
LMN_API UClass* Z_Construct_UClass_UCharacterLogic();
LMN_API UClass* Z_Construct_UClass_UCharacterLogic_NoRegister();
LMN_API UClass* Z_Construct_UClass_UEquipmentLogic_NoRegister();
LMN_API UClass* Z_Construct_UClass_ULogic();
LMN_API UEnum* Z_Construct_UEnum_LMN_EEquipmentSlot();
LMN_API UEnum* Z_Construct_UEnum_LMN_EMovementState();
LMN_API UEnum* Z_Construct_UEnum_LMN_ETypeAction();
LMN_API UEnum* Z_Construct_UEnum_LMN_ETypeMovementState();
LMN_API UFunction* Z_Construct_UDelegateFunction_LMN_OnEquipmentChanged__DelegateSignature();
LMN_API UFunction* Z_Construct_UDelegateFunction_LMN_OnMovementStateChanged__DelegateSignature();
LMN_API UFunction* Z_Construct_UDelegateFunction_LMN_OnStaminaChanged__DelegateSignature();
LMN_API UFunction* Z_Construct_UDelegateFunction_LMN_OnTypeActionChanged__DelegateSignature();
LMN_API UFunction* Z_Construct_UDelegateFunction_LMN_OnTypeMovementStateChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_LMN();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EMovementState ************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMovementState;
static UEnum* EMovementState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMovementState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMovementState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LMN_EMovementState, (UObject*)Z_Construct_UPackage__Script_LMN(), TEXT("EMovementState"));
	}
	return Z_Registration_Info_UEnum_EMovementState.OuterSingleton;
}
template<> LMN_NON_ATTRIBUTED_API UEnum* StaticEnum<EMovementState>()
{
	return EMovementState_StaticEnum();
}
struct Z_Construct_UEnum_LMN_EMovementState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Idle.DisplayName", "Idle" },
		{ "Idle.Name", "EMovementState::Idle" },
		{ "ModuleRelativePath", "CharacterLogic.h" },
		{ "Run.DisplayName", "Run" },
		{ "Run.Name", "EMovementState::Run" },
		{ "Walk.DisplayName", "Walk" },
		{ "Walk.Name", "EMovementState::Walk" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMovementState::Idle", (int64)EMovementState::Idle },
		{ "EMovementState::Walk", (int64)EMovementState::Walk },
		{ "EMovementState::Run", (int64)EMovementState::Run },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_LMN_EMovementState_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LMN_EMovementState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LMN,
	nullptr,
	"EMovementState",
	"EMovementState",
	Z_Construct_UEnum_LMN_EMovementState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LMN_EMovementState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LMN_EMovementState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LMN_EMovementState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LMN_EMovementState()
{
	if (!Z_Registration_Info_UEnum_EMovementState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMovementState.InnerSingleton, Z_Construct_UEnum_LMN_EMovementState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMovementState.InnerSingleton;
}
// ********** End Enum EMovementState **************************************************************

// ********** Begin Enum ETypeMovementState ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETypeMovementState;
static UEnum* ETypeMovementState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETypeMovementState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETypeMovementState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LMN_ETypeMovementState, (UObject*)Z_Construct_UPackage__Script_LMN(), TEXT("ETypeMovementState"));
	}
	return Z_Registration_Info_UEnum_ETypeMovementState.OuterSingleton;
}
template<> LMN_NON_ATTRIBUTED_API UEnum* StaticEnum<ETypeMovementState>()
{
	return ETypeMovementState_StaticEnum();
}
struct Z_Construct_UEnum_LMN_ETypeMovementState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "CharacterLogic.h" },
		{ "Pistol.DisplayName", "Pistol" },
		{ "Pistol.Name", "ETypeMovementState::Pistol" },
		{ "Rifle.DisplayName", "Rifle" },
		{ "Rifle.Name", "ETypeMovementState::Rifle" },
		{ "Unarmed.DisplayName", "Unarmed" },
		{ "Unarmed.Name", "ETypeMovementState::Unarmed" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETypeMovementState::Unarmed", (int64)ETypeMovementState::Unarmed },
		{ "ETypeMovementState::Rifle", (int64)ETypeMovementState::Rifle },
		{ "ETypeMovementState::Pistol", (int64)ETypeMovementState::Pistol },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_LMN_ETypeMovementState_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LMN_ETypeMovementState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LMN,
	nullptr,
	"ETypeMovementState",
	"ETypeMovementState",
	Z_Construct_UEnum_LMN_ETypeMovementState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LMN_ETypeMovementState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LMN_ETypeMovementState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LMN_ETypeMovementState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LMN_ETypeMovementState()
{
	if (!Z_Registration_Info_UEnum_ETypeMovementState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETypeMovementState.InnerSingleton, Z_Construct_UEnum_LMN_ETypeMovementState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETypeMovementState.InnerSingleton;
}
// ********** End Enum ETypeMovementState **********************************************************

// ********** Begin Enum ETypeAction ***************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETypeAction;
static UEnum* ETypeAction_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETypeAction.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETypeAction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LMN_ETypeAction, (UObject*)Z_Construct_UPackage__Script_LMN(), TEXT("ETypeAction"));
	}
	return Z_Registration_Info_UEnum_ETypeAction.OuterSingleton;
}
template<> LMN_NON_ATTRIBUTED_API UEnum* StaticEnum<ETypeAction>()
{
	return ETypeAction_StaticEnum();
}
struct Z_Construct_UEnum_LMN_ETypeAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Equipment.DisplayName", "Equipment" },
		{ "Equipment.Name", "ETypeAction::Equipment" },
		{ "Idle.DisplayName", "Idle" },
		{ "Idle.Name", "ETypeAction::Idle" },
		{ "Interaction.DisplayName", "Interaction" },
		{ "Interaction.Name", "ETypeAction::Interaction" },
		{ "ModuleRelativePath", "CharacterLogic.h" },
		{ "Reloading.DisplayName", "Reloading" },
		{ "Reloading.Name", "ETypeAction::Reloading" },
		{ "Shooting.DisplayName", "Shooting" },
		{ "Shooting.Name", "ETypeAction::Shooting" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETypeAction::Idle", (int64)ETypeAction::Idle },
		{ "ETypeAction::Shooting", (int64)ETypeAction::Shooting },
		{ "ETypeAction::Reloading", (int64)ETypeAction::Reloading },
		{ "ETypeAction::Interaction", (int64)ETypeAction::Interaction },
		{ "ETypeAction::Equipment", (int64)ETypeAction::Equipment },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_LMN_ETypeAction_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LMN_ETypeAction_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LMN,
	nullptr,
	"ETypeAction",
	"ETypeAction",
	Z_Construct_UEnum_LMN_ETypeAction_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LMN_ETypeAction_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LMN_ETypeAction_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LMN_ETypeAction_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LMN_ETypeAction()
{
	if (!Z_Registration_Info_UEnum_ETypeAction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETypeAction.InnerSingleton, Z_Construct_UEnum_LMN_ETypeAction_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETypeAction.InnerSingleton;
}
// ********** End Enum ETypeAction *****************************************************************

// ********** Begin Enum EEquipmentSlot ************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEquipmentSlot;
static UEnum* EEquipmentSlot_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEquipmentSlot.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEquipmentSlot.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LMN_EEquipmentSlot, (UObject*)Z_Construct_UPackage__Script_LMN(), TEXT("EEquipmentSlot"));
	}
	return Z_Registration_Info_UEnum_EEquipmentSlot.OuterSingleton;
}
template<> LMN_NON_ATTRIBUTED_API UEnum* StaticEnum<EEquipmentSlot>()
{
	return EEquipmentSlot_StaticEnum();
}
struct Z_Construct_UEnum_LMN_EEquipmentSlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Backpack.DisplayName", "Backpack" },
		{ "Backpack.Name", "EEquipmentSlot::Backpack" },
		{ "BlueprintType", "true" },
		{ "Hands.DisplayName", "Hands" },
		{ "Hands.Name", "EEquipmentSlot::Hands" },
		{ "ModuleRelativePath", "CharacterLogic.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EEquipmentSlot::Hands", (int64)EEquipmentSlot::Hands },
		{ "EEquipmentSlot::Backpack", (int64)EEquipmentSlot::Backpack },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_LMN_EEquipmentSlot_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LMN_EEquipmentSlot_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LMN,
	nullptr,
	"EEquipmentSlot",
	"EEquipmentSlot",
	Z_Construct_UEnum_LMN_EEquipmentSlot_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LMN_EEquipmentSlot_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LMN_EEquipmentSlot_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LMN_EEquipmentSlot_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LMN_EEquipmentSlot()
{
	if (!Z_Registration_Info_UEnum_EEquipmentSlot.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEquipmentSlot.InnerSingleton, Z_Construct_UEnum_LMN_EEquipmentSlot_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEquipmentSlot.InnerSingleton;
}
// ********** End Enum EEquipmentSlot **************************************************************

// ********** Begin Delegate FOnStaminaChanged *****************************************************
struct Z_Construct_UDelegateFunction_LMN_OnStaminaChanged__DelegateSignature_Statics
{
	struct _Script_LMN_eventOnStaminaChanged_Parms
	{
		float CurrentStamina;
		float MaxStamina;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CharacterLogic.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnStaminaChanged constinit property declarations *********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentStamina;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxStamina;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnStaminaChanged constinit property declarations ***********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnStaminaChanged Property Definitions ********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_LMN_OnStaminaChanged__DelegateSignature_Statics::NewProp_CurrentStamina = { "CurrentStamina", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LMN_eventOnStaminaChanged_Parms, CurrentStamina), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_LMN_OnStaminaChanged__DelegateSignature_Statics::NewProp_MaxStamina = { "MaxStamina", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LMN_eventOnStaminaChanged_Parms, MaxStamina), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LMN_OnStaminaChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LMN_OnStaminaChanged__DelegateSignature_Statics::NewProp_CurrentStamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LMN_OnStaminaChanged__DelegateSignature_Statics::NewProp_MaxStamina,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LMN_OnStaminaChanged__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnStaminaChanged Property Definitions **********************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_LMN_OnStaminaChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_LMN, nullptr, "OnStaminaChanged__DelegateSignature", 	Z_Construct_UDelegateFunction_LMN_OnStaminaChanged__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LMN_OnStaminaChanged__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_LMN_OnStaminaChanged__DelegateSignature_Statics::_Script_LMN_eventOnStaminaChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LMN_OnStaminaChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LMN_OnStaminaChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_LMN_OnStaminaChanged__DelegateSignature_Statics::_Script_LMN_eventOnStaminaChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_LMN_OnStaminaChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LMN_OnStaminaChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnStaminaChanged_DelegateWrapper(const FMulticastScriptDelegate& OnStaminaChanged, float CurrentStamina, float MaxStamina)
{
	struct _Script_LMN_eventOnStaminaChanged_Parms
	{
		float CurrentStamina;
		float MaxStamina;
	};
	_Script_LMN_eventOnStaminaChanged_Parms Parms;
	Parms.CurrentStamina=CurrentStamina;
	Parms.MaxStamina=MaxStamina;
	OnStaminaChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnStaminaChanged *******************************************************

// ********** Begin Delegate FOnMovementStateChanged ***********************************************
struct Z_Construct_UDelegateFunction_LMN_OnMovementStateChanged__DelegateSignature_Statics
{
	struct _Script_LMN_eventOnMovementStateChanged_Parms
	{
		EMovementState MovementState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CharacterLogic.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnMovementStateChanged constinit property declarations ***************
	static const UECodeGen_Private::FBytePropertyParams NewProp_MovementState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MovementState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnMovementStateChanged constinit property declarations *****************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnMovementStateChanged Property Definitions **************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_LMN_OnMovementStateChanged__DelegateSignature_Statics::NewProp_MovementState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_LMN_OnMovementStateChanged__DelegateSignature_Statics::NewProp_MovementState = { "MovementState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LMN_eventOnMovementStateChanged_Parms, MovementState), Z_Construct_UEnum_LMN_EMovementState, METADATA_PARAMS(0, nullptr) }; // 842955467
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LMN_OnMovementStateChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LMN_OnMovementStateChanged__DelegateSignature_Statics::NewProp_MovementState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LMN_OnMovementStateChanged__DelegateSignature_Statics::NewProp_MovementState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LMN_OnMovementStateChanged__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnMovementStateChanged Property Definitions ****************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_LMN_OnMovementStateChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_LMN, nullptr, "OnMovementStateChanged__DelegateSignature", 	Z_Construct_UDelegateFunction_LMN_OnMovementStateChanged__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LMN_OnMovementStateChanged__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_LMN_OnMovementStateChanged__DelegateSignature_Statics::_Script_LMN_eventOnMovementStateChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LMN_OnMovementStateChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LMN_OnMovementStateChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_LMN_OnMovementStateChanged__DelegateSignature_Statics::_Script_LMN_eventOnMovementStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_LMN_OnMovementStateChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LMN_OnMovementStateChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMovementStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnMovementStateChanged, EMovementState MovementState)
{
	struct _Script_LMN_eventOnMovementStateChanged_Parms
	{
		EMovementState MovementState;
	};
	_Script_LMN_eventOnMovementStateChanged_Parms Parms;
	Parms.MovementState=MovementState;
	OnMovementStateChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnMovementStateChanged *************************************************

// ********** Begin Delegate FOnTypeMovementStateChanged *******************************************
struct Z_Construct_UDelegateFunction_LMN_OnTypeMovementStateChanged__DelegateSignature_Statics
{
	struct _Script_LMN_eventOnTypeMovementStateChanged_Parms
	{
		ETypeMovementState TypeMovementState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CharacterLogic.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnTypeMovementStateChanged constinit property declarations ***********
	static const UECodeGen_Private::FBytePropertyParams NewProp_TypeMovementState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TypeMovementState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnTypeMovementStateChanged constinit property declarations *************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnTypeMovementStateChanged Property Definitions **********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_LMN_OnTypeMovementStateChanged__DelegateSignature_Statics::NewProp_TypeMovementState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_LMN_OnTypeMovementStateChanged__DelegateSignature_Statics::NewProp_TypeMovementState = { "TypeMovementState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LMN_eventOnTypeMovementStateChanged_Parms, TypeMovementState), Z_Construct_UEnum_LMN_ETypeMovementState, METADATA_PARAMS(0, nullptr) }; // 2486633701
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LMN_OnTypeMovementStateChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LMN_OnTypeMovementStateChanged__DelegateSignature_Statics::NewProp_TypeMovementState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LMN_OnTypeMovementStateChanged__DelegateSignature_Statics::NewProp_TypeMovementState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LMN_OnTypeMovementStateChanged__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnTypeMovementStateChanged Property Definitions ************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_LMN_OnTypeMovementStateChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_LMN, nullptr, "OnTypeMovementStateChanged__DelegateSignature", 	Z_Construct_UDelegateFunction_LMN_OnTypeMovementStateChanged__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LMN_OnTypeMovementStateChanged__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_LMN_OnTypeMovementStateChanged__DelegateSignature_Statics::_Script_LMN_eventOnTypeMovementStateChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LMN_OnTypeMovementStateChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LMN_OnTypeMovementStateChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_LMN_OnTypeMovementStateChanged__DelegateSignature_Statics::_Script_LMN_eventOnTypeMovementStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_LMN_OnTypeMovementStateChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LMN_OnTypeMovementStateChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnTypeMovementStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnTypeMovementStateChanged, ETypeMovementState TypeMovementState)
{
	struct _Script_LMN_eventOnTypeMovementStateChanged_Parms
	{
		ETypeMovementState TypeMovementState;
	};
	_Script_LMN_eventOnTypeMovementStateChanged_Parms Parms;
	Parms.TypeMovementState=TypeMovementState;
	OnTypeMovementStateChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnTypeMovementStateChanged *********************************************

// ********** Begin Delegate FOnTypeActionChanged **************************************************
struct Z_Construct_UDelegateFunction_LMN_OnTypeActionChanged__DelegateSignature_Statics
{
	struct _Script_LMN_eventOnTypeActionChanged_Parms
	{
		ETypeAction TypeAction;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CharacterLogic.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnTypeActionChanged constinit property declarations ******************
	static const UECodeGen_Private::FBytePropertyParams NewProp_TypeAction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TypeAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnTypeActionChanged constinit property declarations ********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnTypeActionChanged Property Definitions *****************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_LMN_OnTypeActionChanged__DelegateSignature_Statics::NewProp_TypeAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_LMN_OnTypeActionChanged__DelegateSignature_Statics::NewProp_TypeAction = { "TypeAction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LMN_eventOnTypeActionChanged_Parms, TypeAction), Z_Construct_UEnum_LMN_ETypeAction, METADATA_PARAMS(0, nullptr) }; // 349906673
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LMN_OnTypeActionChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LMN_OnTypeActionChanged__DelegateSignature_Statics::NewProp_TypeAction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LMN_OnTypeActionChanged__DelegateSignature_Statics::NewProp_TypeAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LMN_OnTypeActionChanged__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnTypeActionChanged Property Definitions *******************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_LMN_OnTypeActionChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_LMN, nullptr, "OnTypeActionChanged__DelegateSignature", 	Z_Construct_UDelegateFunction_LMN_OnTypeActionChanged__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LMN_OnTypeActionChanged__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_LMN_OnTypeActionChanged__DelegateSignature_Statics::_Script_LMN_eventOnTypeActionChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LMN_OnTypeActionChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LMN_OnTypeActionChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_LMN_OnTypeActionChanged__DelegateSignature_Statics::_Script_LMN_eventOnTypeActionChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_LMN_OnTypeActionChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LMN_OnTypeActionChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnTypeActionChanged_DelegateWrapper(const FMulticastScriptDelegate& OnTypeActionChanged, ETypeAction TypeAction)
{
	struct _Script_LMN_eventOnTypeActionChanged_Parms
	{
		ETypeAction TypeAction;
	};
	_Script_LMN_eventOnTypeActionChanged_Parms Parms;
	Parms.TypeAction=TypeAction;
	OnTypeActionChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnTypeActionChanged ****************************************************

// ********** Begin Delegate FOnEquipmentChanged ***************************************************
struct Z_Construct_UDelegateFunction_LMN_OnEquipmentChanged__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CharacterLogic.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnEquipmentChanged constinit property declarations *******************
// ********** End Delegate FOnEquipmentChanged constinit property declarations *********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_LMN_OnEquipmentChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_LMN, nullptr, "OnEquipmentChanged__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LMN_OnEquipmentChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LMN_OnEquipmentChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_LMN_OnEquipmentChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LMN_OnEquipmentChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnEquipmentChanged_DelegateWrapper(const FMulticastScriptDelegate& OnEquipmentChanged)
{
	OnEquipmentChanged.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnEquipmentChanged *****************************************************

// ********** Begin Class UCharacterLogic **********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UCharacterLogic;
UClass* UCharacterLogic::GetPrivateStaticClass()
{
	using TClass = UCharacterLogic;
	if (!Z_Registration_Info_UClass_UCharacterLogic.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CharacterLogic"),
			Z_Registration_Info_UClass_UCharacterLogic.InnerSingleton,
			StaticRegisterNativesUCharacterLogic,
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
	return Z_Registration_Info_UClass_UCharacterLogic.InnerSingleton;
}
UClass* Z_Construct_UClass_UCharacterLogic_NoRegister()
{
	return UCharacterLogic::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCharacterLogic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CharacterLogic.h" },
		{ "ModuleRelativePath", "CharacterLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterMovementComponentRef_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CharacterLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentMap_MetaData[] = {
		{ "ModuleRelativePath", "CharacterLogic.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UCharacterLogic constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterMovementComponentRef;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipmentMap_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EquipmentMap_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EquipmentMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_EquipmentMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UCharacterLogic constinit property declarations ****************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterLogic>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UCharacterLogic_Statics

// ********** Begin Class UCharacterLogic Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterLogic_Statics::NewProp_CharacterMovementComponentRef = { "CharacterMovementComponentRef", nullptr, (EPropertyFlags)0x0020080000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterLogic, CharacterMovementComponentRef), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterMovementComponentRef_MetaData), NewProp_CharacterMovementComponentRef_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterLogic_Statics::NewProp_EquipmentMap_ValueProp = { "EquipmentMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UEquipmentLogic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCharacterLogic_Statics::NewProp_EquipmentMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCharacterLogic_Statics::NewProp_EquipmentMap_Key_KeyProp = { "EquipmentMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_LMN_EEquipmentSlot, METADATA_PARAMS(0, nullptr) }; // 3011498289
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCharacterLogic_Statics::NewProp_EquipmentMap = { "EquipmentMap", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterLogic, EquipmentMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipmentMap_MetaData), NewProp_EquipmentMap_MetaData) }; // 3011498289
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterLogic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterLogic_Statics::NewProp_CharacterMovementComponentRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterLogic_Statics::NewProp_EquipmentMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterLogic_Statics::NewProp_EquipmentMap_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterLogic_Statics::NewProp_EquipmentMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterLogic_Statics::NewProp_EquipmentMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterLogic_Statics::PropPointers) < 2048);
// ********** End Class UCharacterLogic Property Definitions ***************************************
UObject* (*const Z_Construct_UClass_UCharacterLogic_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULogic,
	(UObject* (*)())Z_Construct_UPackage__Script_LMN,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterLogic_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterLogic_Statics::ClassParams = {
	&UCharacterLogic::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCharacterLogic_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterLogic_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterLogic_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterLogic_Statics::Class_MetaDataParams)
};
void UCharacterLogic::StaticRegisterNativesUCharacterLogic()
{
}
UClass* Z_Construct_UClass_UCharacterLogic()
{
	if (!Z_Registration_Info_UClass_UCharacterLogic.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterLogic.OuterSingleton, Z_Construct_UClass_UCharacterLogic_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterLogic.OuterSingleton;
}
UCharacterLogic::UCharacterLogic(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCharacterLogic);
UCharacterLogic::~UCharacterLogic() {}
// ********** End Class UCharacterLogic ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_CharacterLogic_h__Script_LMN_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMovementState_StaticEnum, TEXT("EMovementState"), &Z_Registration_Info_UEnum_EMovementState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 842955467U) },
		{ ETypeMovementState_StaticEnum, TEXT("ETypeMovementState"), &Z_Registration_Info_UEnum_ETypeMovementState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2486633701U) },
		{ ETypeAction_StaticEnum, TEXT("ETypeAction"), &Z_Registration_Info_UEnum_ETypeAction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 349906673U) },
		{ EEquipmentSlot_StaticEnum, TEXT("EEquipmentSlot"), &Z_Registration_Info_UEnum_EEquipmentSlot, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3011498289U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterLogic, UCharacterLogic::StaticClass, TEXT("UCharacterLogic"), &Z_Registration_Info_UClass_UCharacterLogic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterLogic), 78685163U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_CharacterLogic_h__Script_LMN_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_CharacterLogic_h__Script_LMN_78899634{
	TEXT("/Script/LMN"),
	Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_CharacterLogic_h__Script_LMN_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_CharacterLogic_h__Script_LMN_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_CharacterLogic_h__Script_LMN_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_CharacterLogic_h__Script_LMN_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
