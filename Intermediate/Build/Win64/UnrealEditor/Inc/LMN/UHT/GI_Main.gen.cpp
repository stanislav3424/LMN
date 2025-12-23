// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LMN/GI_Main.h"
#include "Engine/DataTable.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeGI_Main() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
LMN_API UClass* Z_Construct_UClass_UGI_Main();
LMN_API UClass* Z_Construct_UClass_UGI_Main_NoRegister();
LMN_API UClass* Z_Construct_UClass_ULogicBase_NoRegister();
LMN_API UEnum* Z_Construct_UEnum_LMN_EEquipmentSlot();
LMN_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterLogicRow();
LMN_API UScriptStruct* Z_Construct_UScriptStruct_FEquipmentRow();
LMN_API UScriptStruct* Z_Construct_UScriptStruct_FLogicBaseRow();
LMN_API UScriptStruct* Z_Construct_UScriptStruct_FLogicRow();
LMN_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponRow();
UPackage* Z_Construct_UPackage__Script_LMN();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FLogicBaseRow *****************************************************
struct Z_Construct_UScriptStruct_FLogicBaseRow_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FLogicBaseRow); }
	static inline consteval int16 GetStructAlignment() { return alignof(FLogicBaseRow); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "GI_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LogicClass_MetaData[] = {
		{ "Category", "LogicBaseRow" },
		{ "ModuleRelativePath", "GI_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RepresentationActorClass_MetaData[] = {
		{ "Category", "LogicBaseRow" },
		{ "ModuleRelativePath", "GI_Main.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FLogicBaseRow constinit property declarations *********************
	static const UECodeGen_Private::FClassPropertyParams NewProp_LogicClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_RepresentationActorClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FLogicBaseRow constinit property declarations ***********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLogicBaseRow>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FLogicBaseRow_Statics
static_assert(std::is_polymorphic<FLogicBaseRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FLogicBaseRow cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLogicBaseRow;
class UScriptStruct* FLogicBaseRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FLogicBaseRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FLogicBaseRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLogicBaseRow, (UObject*)Z_Construct_UPackage__Script_LMN(), TEXT("LogicBaseRow"));
	}
	return Z_Registration_Info_UScriptStruct_FLogicBaseRow.OuterSingleton;
	}

// ********** Begin ScriptStruct FLogicBaseRow Property Definitions ********************************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FLogicBaseRow_Statics::NewProp_LogicClass = { "LogicClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLogicBaseRow, LogicClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_ULogicBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LogicClass_MetaData), NewProp_LogicClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FLogicBaseRow_Statics::NewProp_RepresentationActorClass = { "RepresentationActorClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLogicBaseRow, RepresentationActorClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RepresentationActorClass_MetaData), NewProp_RepresentationActorClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLogicBaseRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLogicBaseRow_Statics::NewProp_LogicClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLogicBaseRow_Statics::NewProp_RepresentationActorClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLogicBaseRow_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FLogicBaseRow Property Definitions **********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLogicBaseRow_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LMN,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"LogicBaseRow",
	Z_Construct_UScriptStruct_FLogicBaseRow_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLogicBaseRow_Statics::PropPointers),
	sizeof(FLogicBaseRow),
	alignof(FLogicBaseRow),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLogicBaseRow_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLogicBaseRow_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLogicBaseRow()
{
	if (!Z_Registration_Info_UScriptStruct_FLogicBaseRow.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLogicBaseRow.InnerSingleton, Z_Construct_UScriptStruct_FLogicBaseRow_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FLogicBaseRow.InnerSingleton);
}
// ********** End ScriptStruct FLogicBaseRow *******************************************************

// ********** Begin ScriptStruct FLogicRow *********************************************************
struct Z_Construct_UScriptStruct_FLogicRow_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FLogicRow); }
	static inline consteval int16 GetStructAlignment() { return alignof(FLogicRow); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "GI_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanTakeDamage_MetaData[] = {
		{ "Category", "LogicRow" },
		{ "ModuleRelativePath", "GI_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "LogicRow" },
		{ "ModuleRelativePath", "GI_Main.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FLogicRow constinit property declarations *************************
	static void NewProp_bCanTakeDamage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanTakeDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FLogicRow constinit property declarations ***************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLogicRow>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FLogicRow_Statics
static_assert(std::is_polymorphic<FLogicRow>() == std::is_polymorphic<FLogicBaseRow>(), "USTRUCT FLogicRow cannot be polymorphic unless super FLogicBaseRow is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLogicRow;
class UScriptStruct* FLogicRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FLogicRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FLogicRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLogicRow, (UObject*)Z_Construct_UPackage__Script_LMN(), TEXT("LogicRow"));
	}
	return Z_Registration_Info_UScriptStruct_FLogicRow.OuterSingleton;
	}

// ********** Begin ScriptStruct FLogicRow Property Definitions ************************************
void Z_Construct_UScriptStruct_FLogicRow_Statics::NewProp_bCanTakeDamage_SetBit(void* Obj)
{
	((FLogicRow*)Obj)->bCanTakeDamage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLogicRow_Statics::NewProp_bCanTakeDamage = { "bCanTakeDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLogicRow), &Z_Construct_UScriptStruct_FLogicRow_Statics::NewProp_bCanTakeDamage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanTakeDamage_MetaData), NewProp_bCanTakeDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLogicRow_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLogicRow, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLogicRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLogicRow_Statics::NewProp_bCanTakeDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLogicRow_Statics::NewProp_MaxHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLogicRow_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FLogicRow Property Definitions **************************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLogicRow_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LMN,
	Z_Construct_UScriptStruct_FLogicBaseRow,
	&NewStructOps,
	"LogicRow",
	Z_Construct_UScriptStruct_FLogicRow_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLogicRow_Statics::PropPointers),
	sizeof(FLogicRow),
	alignof(FLogicRow),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLogicRow_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLogicRow_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLogicRow()
{
	if (!Z_Registration_Info_UScriptStruct_FLogicRow.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLogicRow.InnerSingleton, Z_Construct_UScriptStruct_FLogicRow_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FLogicRow.InnerSingleton);
}
// ********** End ScriptStruct FLogicRow ***********************************************************

// ********** Begin ScriptStruct FCharacterLogicRow ************************************************
struct Z_Construct_UScriptStruct_FCharacterLogicRow_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FCharacterLogicRow); }
	static inline consteval int16 GetStructAlignment() { return alignof(FCharacterLogicRow); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "GI_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStamina_MetaData[] = {
		{ "Category", "CharacterLogicRow" },
		{ "ModuleRelativePath", "GI_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaminaDrainRate_MetaData[] = {
		{ "Category", "CharacterLogicRow" },
		{ "ModuleRelativePath", "GI_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaminaRegenRate_MetaData[] = {
		{ "Category", "CharacterLogicRow" },
		{ "ModuleRelativePath", "GI_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinStaminaToRun_MetaData[] = {
		{ "Category", "CharacterLogicRow" },
		{ "ModuleRelativePath", "GI_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxWalkSpeed_MetaData[] = {
		{ "Category", "CharacterLogicRow" },
		{ "ModuleRelativePath", "GI_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRunSpeed_MetaData[] = {
		{ "Category", "CharacterLogicRow" },
		{ "ModuleRelativePath", "GI_Main.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FCharacterLogicRow constinit property declarations ****************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxStamina;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StaminaDrainRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StaminaRegenRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinStaminaToRun;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxWalkSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRunSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FCharacterLogicRow constinit property declarations ******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterLogicRow>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FCharacterLogicRow_Statics
static_assert(std::is_polymorphic<FCharacterLogicRow>() == std::is_polymorphic<FLogicRow>(), "USTRUCT FCharacterLogicRow cannot be polymorphic unless super FLogicRow is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCharacterLogicRow;
class UScriptStruct* FCharacterLogicRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCharacterLogicRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCharacterLogicRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterLogicRow, (UObject*)Z_Construct_UPackage__Script_LMN(), TEXT("CharacterLogicRow"));
	}
	return Z_Registration_Info_UScriptStruct_FCharacterLogicRow.OuterSingleton;
	}

// ********** Begin ScriptStruct FCharacterLogicRow Property Definitions ***************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterLogicRow_Statics::NewProp_MaxStamina = { "MaxStamina", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterLogicRow, MaxStamina), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStamina_MetaData), NewProp_MaxStamina_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterLogicRow_Statics::NewProp_StaminaDrainRate = { "StaminaDrainRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterLogicRow, StaminaDrainRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaminaDrainRate_MetaData), NewProp_StaminaDrainRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterLogicRow_Statics::NewProp_StaminaRegenRate = { "StaminaRegenRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterLogicRow, StaminaRegenRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaminaRegenRate_MetaData), NewProp_StaminaRegenRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterLogicRow_Statics::NewProp_MinStaminaToRun = { "MinStaminaToRun", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterLogicRow, MinStaminaToRun), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinStaminaToRun_MetaData), NewProp_MinStaminaToRun_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterLogicRow_Statics::NewProp_MaxWalkSpeed = { "MaxWalkSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterLogicRow, MaxWalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxWalkSpeed_MetaData), NewProp_MaxWalkSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterLogicRow_Statics::NewProp_MaxRunSpeed = { "MaxRunSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterLogicRow, MaxRunSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRunSpeed_MetaData), NewProp_MaxRunSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterLogicRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterLogicRow_Statics::NewProp_MaxStamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterLogicRow_Statics::NewProp_StaminaDrainRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterLogicRow_Statics::NewProp_StaminaRegenRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterLogicRow_Statics::NewProp_MinStaminaToRun,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterLogicRow_Statics::NewProp_MaxWalkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterLogicRow_Statics::NewProp_MaxRunSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterLogicRow_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FCharacterLogicRow Property Definitions *****************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterLogicRow_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LMN,
	Z_Construct_UScriptStruct_FLogicRow,
	&NewStructOps,
	"CharacterLogicRow",
	Z_Construct_UScriptStruct_FCharacterLogicRow_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterLogicRow_Statics::PropPointers),
	sizeof(FCharacterLogicRow),
	alignof(FCharacterLogicRow),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterLogicRow_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCharacterLogicRow_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCharacterLogicRow()
{
	if (!Z_Registration_Info_UScriptStruct_FCharacterLogicRow.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCharacterLogicRow.InnerSingleton, Z_Construct_UScriptStruct_FCharacterLogicRow_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FCharacterLogicRow.InnerSingleton);
}
// ********** End ScriptStruct FCharacterLogicRow **************************************************

// ********** Begin ScriptStruct FEquipmentRow *****************************************************
struct Z_Construct_UScriptStruct_FEquipmentRow_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FEquipmentRow); }
	static inline consteval int16 GetStructAlignment() { return alignof(FEquipmentRow); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "GI_Main.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FEquipmentRow constinit property declarations *********************
// ********** End ScriptStruct FEquipmentRow constinit property declarations ***********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEquipmentRow>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FEquipmentRow_Statics
static_assert(std::is_polymorphic<FEquipmentRow>() == std::is_polymorphic<FLogicRow>(), "USTRUCT FEquipmentRow cannot be polymorphic unless super FLogicRow is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FEquipmentRow;
class UScriptStruct* FEquipmentRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FEquipmentRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FEquipmentRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEquipmentRow, (UObject*)Z_Construct_UPackage__Script_LMN(), TEXT("EquipmentRow"));
	}
	return Z_Registration_Info_UScriptStruct_FEquipmentRow.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEquipmentRow_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LMN,
	Z_Construct_UScriptStruct_FLogicRow,
	&NewStructOps,
	"EquipmentRow",
	nullptr,
	0,
	sizeof(FEquipmentRow),
	alignof(FEquipmentRow),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentRow_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEquipmentRow_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEquipmentRow()
{
	if (!Z_Registration_Info_UScriptStruct_FEquipmentRow.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FEquipmentRow.InnerSingleton, Z_Construct_UScriptStruct_FEquipmentRow_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FEquipmentRow.InnerSingleton);
}
// ********** End ScriptStruct FEquipmentRow *******************************************************

// ********** Begin ScriptStruct FWeaponRow ********************************************************
struct Z_Construct_UScriptStruct_FWeaponRow_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FWeaponRow); }
	static inline consteval int16 GetStructAlignment() { return alignof(FWeaponRow); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "GI_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentSlot_MetaData[] = {
		{ "Category", "WeaponRow" },
		{ "ModuleRelativePath", "GI_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAmmo_MetaData[] = {
		{ "Category", "WeaponRow" },
		{ "ModuleRelativePath", "GI_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RateFire_MetaData[] = {
		{ "Category", "WeaponRow" },
		{ "ModuleRelativePath", "GI_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[] = {
		{ "Category", "WeaponRow" },
		{ "ModuleRelativePath", "GI_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MOARadians_MetaData[] = {
		{ "Category", "WeaponRow" },
		{ "ModuleRelativePath", "GI_Main.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FWeaponRow constinit property declarations ************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_EquipmentSlot_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EquipmentSlot;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAmmo;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RateFire;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MOARadians;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FWeaponRow constinit property declarations **************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeaponRow>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FWeaponRow_Statics
static_assert(std::is_polymorphic<FWeaponRow>() == std::is_polymorphic<FEquipmentRow>(), "USTRUCT FWeaponRow cannot be polymorphic unless super FEquipmentRow is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWeaponRow;
class UScriptStruct* FWeaponRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FWeaponRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FWeaponRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeaponRow, (UObject*)Z_Construct_UPackage__Script_LMN(), TEXT("WeaponRow"));
	}
	return Z_Registration_Info_UScriptStruct_FWeaponRow.OuterSingleton;
	}

// ********** Begin ScriptStruct FWeaponRow Property Definitions ***********************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWeaponRow_Statics::NewProp_EquipmentSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWeaponRow_Statics::NewProp_EquipmentSlot = { "EquipmentSlot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponRow, EquipmentSlot), Z_Construct_UEnum_LMN_EEquipmentSlot, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipmentSlot_MetaData), NewProp_EquipmentSlot_MetaData) }; // 3011498289
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWeaponRow_Statics::NewProp_MaxAmmo = { "MaxAmmo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponRow, MaxAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAmmo_MetaData), NewProp_MaxAmmo_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponRow_Statics::NewProp_RateFire = { "RateFire", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponRow, RateFire), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RateFire_MetaData), NewProp_RateFire_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponRow_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponRow, Damage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damage_MetaData), NewProp_Damage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponRow_Statics::NewProp_MOARadians = { "MOARadians", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponRow, MOARadians), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MOARadians_MetaData), NewProp_MOARadians_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeaponRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponRow_Statics::NewProp_EquipmentSlot_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponRow_Statics::NewProp_EquipmentSlot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponRow_Statics::NewProp_MaxAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponRow_Statics::NewProp_RateFire,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponRow_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponRow_Statics::NewProp_MOARadians,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponRow_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FWeaponRow Property Definitions *************************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeaponRow_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LMN,
	Z_Construct_UScriptStruct_FEquipmentRow,
	&NewStructOps,
	"WeaponRow",
	Z_Construct_UScriptStruct_FWeaponRow_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponRow_Statics::PropPointers),
	sizeof(FWeaponRow),
	alignof(FWeaponRow),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponRow_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWeaponRow_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWeaponRow()
{
	if (!Z_Registration_Info_UScriptStruct_FWeaponRow.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWeaponRow.InnerSingleton, Z_Construct_UScriptStruct_FWeaponRow_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FWeaponRow.InnerSingleton);
}
// ********** End ScriptStruct FWeaponRow **********************************************************

// ********** Begin Class UGI_Main *****************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UGI_Main;
UClass* UGI_Main::GetPrivateStaticClass()
{
	using TClass = UGI_Main;
	if (!Z_Registration_Info_UClass_UGI_Main.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("GI_Main"),
			Z_Registration_Info_UClass_UGI_Main.InnerSingleton,
			StaticRegisterNativesUGI_Main,
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
	return Z_Registration_Info_UClass_UGI_Main.InnerSingleton;
}
UClass* Z_Construct_UClass_UGI_Main_NoRegister()
{
	return UGI_Main::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGI_Main_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GI_Main.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "GI_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataTables_MetaData[] = {
		{ "Category", "DataTable" },
		{ "ModuleRelativePath", "GI_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataTablesCacheByRowName_MetaData[] = {
		{ "ModuleRelativePath", "GI_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RowHandlesCacheByActorClass_MetaData[] = {
		{ "ModuleRelativePath", "GI_Main.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UGI_Main constinit property declarations *********************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataTables_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DataTables;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataTablesCacheByRowName_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DataTablesCacheByRowName_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DataTablesCacheByRowName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RowHandlesCacheByActorClass_ValueProp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_RowHandlesCacheByActorClass_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_RowHandlesCacheByActorClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UGI_Main constinit property declarations ***********************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGI_Main>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UGI_Main_Statics

// ********** Begin Class UGI_Main Property Definitions ********************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGI_Main_Statics::NewProp_DataTables_Inner = { "DataTables", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGI_Main_Statics::NewProp_DataTables = { "DataTables", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGI_Main, DataTables), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataTables_MetaData), NewProp_DataTables_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGI_Main_Statics::NewProp_DataTablesCacheByRowName_ValueProp = { "DataTablesCacheByRowName", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGI_Main_Statics::NewProp_DataTablesCacheByRowName_Key_KeyProp = { "DataTablesCacheByRowName_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGI_Main_Statics::NewProp_DataTablesCacheByRowName = { "DataTablesCacheByRowName", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGI_Main, DataTablesCacheByRowName), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataTablesCacheByRowName_MetaData), NewProp_DataTablesCacheByRowName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGI_Main_Statics::NewProp_RowHandlesCacheByActorClass_ValueProp = { "RowHandlesCacheByActorClass", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(0, nullptr) }; // 395055942
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGI_Main_Statics::NewProp_RowHandlesCacheByActorClass_Key_KeyProp = { "RowHandlesCacheByActorClass_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGI_Main_Statics::NewProp_RowHandlesCacheByActorClass = { "RowHandlesCacheByActorClass", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGI_Main, RowHandlesCacheByActorClass), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RowHandlesCacheByActorClass_MetaData), NewProp_RowHandlesCacheByActorClass_MetaData) }; // 395055942
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGI_Main_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGI_Main_Statics::NewProp_DataTables_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGI_Main_Statics::NewProp_DataTables,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGI_Main_Statics::NewProp_DataTablesCacheByRowName_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGI_Main_Statics::NewProp_DataTablesCacheByRowName_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGI_Main_Statics::NewProp_DataTablesCacheByRowName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGI_Main_Statics::NewProp_RowHandlesCacheByActorClass_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGI_Main_Statics::NewProp_RowHandlesCacheByActorClass_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGI_Main_Statics::NewProp_RowHandlesCacheByActorClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGI_Main_Statics::PropPointers) < 2048);
// ********** End Class UGI_Main Property Definitions **********************************************
UObject* (*const Z_Construct_UClass_UGI_Main_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_LMN,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGI_Main_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGI_Main_Statics::ClassParams = {
	&UGI_Main::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGI_Main_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGI_Main_Statics::PropPointers),
	0,
	0x009000A9u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGI_Main_Statics::Class_MetaDataParams), Z_Construct_UClass_UGI_Main_Statics::Class_MetaDataParams)
};
void UGI_Main::StaticRegisterNativesUGI_Main()
{
}
UClass* Z_Construct_UClass_UGI_Main()
{
	if (!Z_Registration_Info_UClass_UGI_Main.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGI_Main.OuterSingleton, Z_Construct_UClass_UGI_Main_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGI_Main.OuterSingleton;
}
UGI_Main::UGI_Main(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UGI_Main);
UGI_Main::~UGI_Main() {}
// ********** End Class UGI_Main *******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_GI_Main_h__Script_LMN_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLogicBaseRow::StaticStruct, Z_Construct_UScriptStruct_FLogicBaseRow_Statics::NewStructOps, TEXT("LogicBaseRow"),&Z_Registration_Info_UScriptStruct_FLogicBaseRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLogicBaseRow), 1746537740U) },
		{ FLogicRow::StaticStruct, Z_Construct_UScriptStruct_FLogicRow_Statics::NewStructOps, TEXT("LogicRow"),&Z_Registration_Info_UScriptStruct_FLogicRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLogicRow), 2001996462U) },
		{ FCharacterLogicRow::StaticStruct, Z_Construct_UScriptStruct_FCharacterLogicRow_Statics::NewStructOps, TEXT("CharacterLogicRow"),&Z_Registration_Info_UScriptStruct_FCharacterLogicRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCharacterLogicRow), 1225468095U) },
		{ FEquipmentRow::StaticStruct, Z_Construct_UScriptStruct_FEquipmentRow_Statics::NewStructOps, TEXT("EquipmentRow"),&Z_Registration_Info_UScriptStruct_FEquipmentRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEquipmentRow), 4164129779U) },
		{ FWeaponRow::StaticStruct, Z_Construct_UScriptStruct_FWeaponRow_Statics::NewStructOps, TEXT("WeaponRow"),&Z_Registration_Info_UScriptStruct_FWeaponRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWeaponRow), 174078664U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGI_Main, UGI_Main::StaticClass, TEXT("UGI_Main"), &Z_Registration_Info_UClass_UGI_Main, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGI_Main), 1311615001U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_GI_Main_h__Script_LMN_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_GI_Main_h__Script_LMN_2967566852{
	TEXT("/Script/LMN"),
	Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_GI_Main_h__Script_LMN_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_GI_Main_h__Script_LMN_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_GI_Main_h__Script_LMN_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_GI_Main_h__Script_LMN_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
