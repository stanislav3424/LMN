// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LMN/BFL.h"
#include "Engine/DataTable.h"
#include "UObject/Class.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeBFL() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
LMN_API UClass* Z_Construct_UClass_UBFL();
LMN_API UClass* Z_Construct_UClass_UBFL_NoRegister();
LMN_API UClass* Z_Construct_UClass_ULogicBase_NoRegister();
LMN_API UEnum* Z_Construct_UEnum_LMN_ETeam();
LMN_API UScriptStruct* Z_Construct_UScriptStruct_FTemplateCharacterRow();
UPackage* Z_Construct_UPackage__Script_LMN();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FTemplateCharacterRow *********************************************
struct Z_Construct_UScriptStruct_FTemplateCharacterRow_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FTemplateCharacterRow); }
	static inline consteval int16 GetStructAlignment() { return alignof(FTemplateCharacterRow); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "BFL.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterRowHandle_MetaData[] = {
		{ "Category", "TemplateCharacterRow" },
		{ "ModuleRelativePath", "BFL.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponRowHandle_MetaData[] = {
		{ "Category", "TemplateCharacterRow" },
		{ "ModuleRelativePath", "BFL.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FTemplateCharacterRow constinit property declarations *************
	static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterRowHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WeaponRowHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FTemplateCharacterRow constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTemplateCharacterRow>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FTemplateCharacterRow_Statics
static_assert(std::is_polymorphic<FTemplateCharacterRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FTemplateCharacterRow cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FTemplateCharacterRow;
class UScriptStruct* FTemplateCharacterRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FTemplateCharacterRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FTemplateCharacterRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTemplateCharacterRow, (UObject*)Z_Construct_UPackage__Script_LMN(), TEXT("TemplateCharacterRow"));
	}
	return Z_Registration_Info_UScriptStruct_FTemplateCharacterRow.OuterSingleton;
	}

// ********** Begin ScriptStruct FTemplateCharacterRow Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTemplateCharacterRow_Statics::NewProp_CharacterRowHandle = { "CharacterRowHandle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTemplateCharacterRow, CharacterRowHandle), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterRowHandle_MetaData), NewProp_CharacterRowHandle_MetaData) }; // 395055942
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTemplateCharacterRow_Statics::NewProp_WeaponRowHandle = { "WeaponRowHandle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTemplateCharacterRow, WeaponRowHandle), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponRowHandle_MetaData), NewProp_WeaponRowHandle_MetaData) }; // 395055942
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTemplateCharacterRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTemplateCharacterRow_Statics::NewProp_CharacterRowHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTemplateCharacterRow_Statics::NewProp_WeaponRowHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateCharacterRow_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FTemplateCharacterRow Property Definitions **************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTemplateCharacterRow_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LMN,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"TemplateCharacterRow",
	Z_Construct_UScriptStruct_FTemplateCharacterRow_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateCharacterRow_Statics::PropPointers),
	sizeof(FTemplateCharacterRow),
	alignof(FTemplateCharacterRow),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateCharacterRow_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTemplateCharacterRow_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTemplateCharacterRow()
{
	if (!Z_Registration_Info_UScriptStruct_FTemplateCharacterRow.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FTemplateCharacterRow.InnerSingleton, Z_Construct_UScriptStruct_FTemplateCharacterRow_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FTemplateCharacterRow.InnerSingleton);
}
// ********** End ScriptStruct FTemplateCharacterRow ***********************************************

// ********** Begin Class UBFL Function GetLogic ***************************************************
struct Z_Construct_UFunction_UBFL_GetLogic_Statics
{
	struct BFL_eventGetLogic_Parms
	{
		AActor* Actor;
		ULogicBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Logic" },
		{ "ModuleRelativePath", "BFL.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetLogic constinit property declarations ******************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLogic constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLogic Property Definitions *****************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBFL_GetLogic_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BFL_eventGetLogic_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBFL_GetLogic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BFL_eventGetLogic_Parms, ReturnValue), Z_Construct_UClass_ULogicBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBFL_GetLogic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_GetLogic_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_GetLogic_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBFL_GetLogic_Statics::PropPointers) < 2048);
// ********** End Function GetLogic Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBFL_GetLogic_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBFL, nullptr, "GetLogic", 	Z_Construct_UFunction_UBFL_GetLogic_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UBFL_GetLogic_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UBFL_GetLogic_Statics::BFL_eventGetLogic_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBFL_GetLogic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBFL_GetLogic_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBFL_GetLogic_Statics::BFL_eventGetLogic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBFL_GetLogic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBFL_GetLogic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBFL::execGetLogic)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULogicBase**)Z_Param__Result=UBFL::GetLogic(Z_Param_Actor);
	P_NATIVE_END;
}
// ********** End Class UBFL Function GetLogic *****************************************************

// ********** Begin Class UBFL Function SetLogic ***************************************************
struct Z_Construct_UFunction_UBFL_SetLogic_Statics
{
	struct BFL_eventSetLogic_Parms
	{
		UObject* Object;
		UObject* Logic;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Logic" },
		{ "ModuleRelativePath", "BFL.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetLogic constinit property declarations ******************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Logic;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetLogic constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetLogic Property Definitions *****************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBFL_SetLogic_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BFL_eventSetLogic_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBFL_SetLogic_Statics::NewProp_Logic = { "Logic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BFL_eventSetLogic_Parms, Logic), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBFL_SetLogic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_SetLogic_Statics::NewProp_Object,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_SetLogic_Statics::NewProp_Logic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBFL_SetLogic_Statics::PropPointers) < 2048);
// ********** End Function SetLogic Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBFL_SetLogic_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBFL, nullptr, "SetLogic", 	Z_Construct_UFunction_UBFL_SetLogic_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UBFL_SetLogic_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UBFL_SetLogic_Statics::BFL_eventSetLogic_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBFL_SetLogic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBFL_SetLogic_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBFL_SetLogic_Statics::BFL_eventSetLogic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBFL_SetLogic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBFL_SetLogic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBFL::execSetLogic)
{
	P_GET_OBJECT(UObject,Z_Param_Object);
	P_GET_OBJECT(UObject,Z_Param_Logic);
	P_FINISH;
	P_NATIVE_BEGIN;
	UBFL::SetLogic(Z_Param_Object,Z_Param_Logic);
	P_NATIVE_END;
}
// ********** End Class UBFL Function SetLogic *****************************************************

// ********** Begin Class UBFL Function SpawnActorTeamByClass_WorldContext *************************
struct Z_Construct_UFunction_UBFL_SpawnActorTeamByClass_WorldContext_Statics
{
	struct BFL_eventSpawnActorTeamByClass_WorldContext_Parms
	{
		UObject* WorldContextObject;
		TSubclassOf<AActor> Class;
		FVector SpawnLocation;
		FRotator SpawnRotator;
		ETeam Team;
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spawn" },
		{ "DisplayName", "Spawn Actor Team By Class" },
		{ "ModuleRelativePath", "BFL.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function SpawnActorTeamByClass_WorldContext constinit property declarations ****
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnRotator;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Team_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Team;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SpawnActorTeamByClass_WorldContext constinit property declarations ******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SpawnActorTeamByClass_WorldContext Property Definitions ***************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBFL_SpawnActorTeamByClass_WorldContext_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BFL_eventSpawnActorTeamByClass_WorldContext_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UBFL_SpawnActorTeamByClass_WorldContext_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BFL_eventSpawnActorTeamByClass_WorldContext_Parms, Class), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBFL_SpawnActorTeamByClass_WorldContext_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BFL_eventSpawnActorTeamByClass_WorldContext_Parms, SpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBFL_SpawnActorTeamByClass_WorldContext_Statics::NewProp_SpawnRotator = { "SpawnRotator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BFL_eventSpawnActorTeamByClass_WorldContext_Parms, SpawnRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBFL_SpawnActorTeamByClass_WorldContext_Statics::NewProp_Team_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBFL_SpawnActorTeamByClass_WorldContext_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BFL_eventSpawnActorTeamByClass_WorldContext_Parms, Team), Z_Construct_UEnum_LMN_ETeam, METADATA_PARAMS(0, nullptr) }; // 4252509417
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBFL_SpawnActorTeamByClass_WorldContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BFL_eventSpawnActorTeamByClass_WorldContext_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBFL_SpawnActorTeamByClass_WorldContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_SpawnActorTeamByClass_WorldContext_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_SpawnActorTeamByClass_WorldContext_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_SpawnActorTeamByClass_WorldContext_Statics::NewProp_SpawnLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_SpawnActorTeamByClass_WorldContext_Statics::NewProp_SpawnRotator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_SpawnActorTeamByClass_WorldContext_Statics::NewProp_Team_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_SpawnActorTeamByClass_WorldContext_Statics::NewProp_Team,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_SpawnActorTeamByClass_WorldContext_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBFL_SpawnActorTeamByClass_WorldContext_Statics::PropPointers) < 2048);
// ********** End Function SpawnActorTeamByClass_WorldContext Property Definitions *****************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBFL_SpawnActorTeamByClass_WorldContext_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBFL, nullptr, "SpawnActorTeamByClass_WorldContext", 	Z_Construct_UFunction_UBFL_SpawnActorTeamByClass_WorldContext_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UBFL_SpawnActorTeamByClass_WorldContext_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UBFL_SpawnActorTeamByClass_WorldContext_Statics::BFL_eventSpawnActorTeamByClass_WorldContext_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBFL_SpawnActorTeamByClass_WorldContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBFL_SpawnActorTeamByClass_WorldContext_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBFL_SpawnActorTeamByClass_WorldContext_Statics::BFL_eventSpawnActorTeamByClass_WorldContext_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBFL_SpawnActorTeamByClass_WorldContext()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBFL_SpawnActorTeamByClass_WorldContext_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBFL::execSpawnActorTeamByClass_WorldContext)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UClass,Z_Param_Class);
	P_GET_STRUCT(FVector,Z_Param_SpawnLocation);
	P_GET_STRUCT(FRotator,Z_Param_SpawnRotator);
	P_GET_ENUM(ETeam,Z_Param_Team);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=UBFL::SpawnActorTeamByClass_WorldContext(Z_Param_WorldContextObject,Z_Param_Class,Z_Param_SpawnLocation,Z_Param_SpawnRotator,ETeam(Z_Param_Team));
	P_NATIVE_END;
}
// ********** End Class UBFL Function SpawnActorTeamByClass_WorldContext ***************************

// ********** Begin Class UBFL Function SpawnActorTeamByRowHandle_WorldContext *********************
struct Z_Construct_UFunction_UBFL_SpawnActorTeamByRowHandle_WorldContext_Statics
{
	struct BFL_eventSpawnActorTeamByRowHandle_WorldContext_Parms
	{
		UObject* WorldContextObject;
		FDataTableRowHandle RowHandle;
		FVector SpawnnLocation;
		FRotator SpawRotator;
		ETeam Team;
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spawn" },
		{ "DisplayName", "Spawn Actor Team By RowHandle" },
		{ "ModuleRelativePath", "BFL.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RowHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SpawnActorTeamByRowHandle_WorldContext constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RowHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnnLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawRotator;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Team_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Team;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SpawnActorTeamByRowHandle_WorldContext constinit property declarations **
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SpawnActorTeamByRowHandle_WorldContext Property Definitions ***********
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBFL_SpawnActorTeamByRowHandle_WorldContext_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BFL_eventSpawnActorTeamByRowHandle_WorldContext_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBFL_SpawnActorTeamByRowHandle_WorldContext_Statics::NewProp_RowHandle = { "RowHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BFL_eventSpawnActorTeamByRowHandle_WorldContext_Parms, RowHandle), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RowHandle_MetaData), NewProp_RowHandle_MetaData) }; // 395055942
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBFL_SpawnActorTeamByRowHandle_WorldContext_Statics::NewProp_SpawnnLocation = { "SpawnnLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BFL_eventSpawnActorTeamByRowHandle_WorldContext_Parms, SpawnnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBFL_SpawnActorTeamByRowHandle_WorldContext_Statics::NewProp_SpawRotator = { "SpawRotator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BFL_eventSpawnActorTeamByRowHandle_WorldContext_Parms, SpawRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBFL_SpawnActorTeamByRowHandle_WorldContext_Statics::NewProp_Team_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBFL_SpawnActorTeamByRowHandle_WorldContext_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BFL_eventSpawnActorTeamByRowHandle_WorldContext_Parms, Team), Z_Construct_UEnum_LMN_ETeam, METADATA_PARAMS(0, nullptr) }; // 4252509417
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBFL_SpawnActorTeamByRowHandle_WorldContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BFL_eventSpawnActorTeamByRowHandle_WorldContext_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBFL_SpawnActorTeamByRowHandle_WorldContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_SpawnActorTeamByRowHandle_WorldContext_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_SpawnActorTeamByRowHandle_WorldContext_Statics::NewProp_RowHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_SpawnActorTeamByRowHandle_WorldContext_Statics::NewProp_SpawnnLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_SpawnActorTeamByRowHandle_WorldContext_Statics::NewProp_SpawRotator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_SpawnActorTeamByRowHandle_WorldContext_Statics::NewProp_Team_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_SpawnActorTeamByRowHandle_WorldContext_Statics::NewProp_Team,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_SpawnActorTeamByRowHandle_WorldContext_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBFL_SpawnActorTeamByRowHandle_WorldContext_Statics::PropPointers) < 2048);
// ********** End Function SpawnActorTeamByRowHandle_WorldContext Property Definitions *************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBFL_SpawnActorTeamByRowHandle_WorldContext_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBFL, nullptr, "SpawnActorTeamByRowHandle_WorldContext", 	Z_Construct_UFunction_UBFL_SpawnActorTeamByRowHandle_WorldContext_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UBFL_SpawnActorTeamByRowHandle_WorldContext_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UBFL_SpawnActorTeamByRowHandle_WorldContext_Statics::BFL_eventSpawnActorTeamByRowHandle_WorldContext_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBFL_SpawnActorTeamByRowHandle_WorldContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBFL_SpawnActorTeamByRowHandle_WorldContext_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBFL_SpawnActorTeamByRowHandle_WorldContext_Statics::BFL_eventSpawnActorTeamByRowHandle_WorldContext_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBFL_SpawnActorTeamByRowHandle_WorldContext()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBFL_SpawnActorTeamByRowHandle_WorldContext_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBFL::execSpawnActorTeamByRowHandle_WorldContext)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT_REF(FDataTableRowHandle,Z_Param_Out_RowHandle);
	P_GET_STRUCT(FVector,Z_Param_SpawnnLocation);
	P_GET_STRUCT(FRotator,Z_Param_SpawRotator);
	P_GET_ENUM(ETeam,Z_Param_Team);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=UBFL::SpawnActorTeamByRowHandle_WorldContext(Z_Param_WorldContextObject,Z_Param_Out_RowHandle,Z_Param_SpawnnLocation,Z_Param_SpawRotator,ETeam(Z_Param_Team));
	P_NATIVE_END;
}
// ********** End Class UBFL Function SpawnActorTeamByRowHandle_WorldContext ***********************

// ********** Begin Class UBFL Function SpawnTemplateCharacter_WorldContext ************************
struct Z_Construct_UFunction_UBFL_SpawnTemplateCharacter_WorldContext_Statics
{
	struct BFL_eventSpawnTemplateCharacter_WorldContext_Parms
	{
		UObject* WorldContextObject;
		FDataTableRowHandle RowHandle;
		FVector SpawnLocation;
		FRotator SpawRotator;
		ETeam Team;
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spawn" },
		{ "DisplayName", "Spawn Template Character" },
		{ "ModuleRelativePath", "BFL.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RowHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SpawnTemplateCharacter_WorldContext constinit property declarations ***
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RowHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawRotator;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Team_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Team;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SpawnTemplateCharacter_WorldContext constinit property declarations *****
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SpawnTemplateCharacter_WorldContext Property Definitions **************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBFL_SpawnTemplateCharacter_WorldContext_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BFL_eventSpawnTemplateCharacter_WorldContext_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBFL_SpawnTemplateCharacter_WorldContext_Statics::NewProp_RowHandle = { "RowHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BFL_eventSpawnTemplateCharacter_WorldContext_Parms, RowHandle), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RowHandle_MetaData), NewProp_RowHandle_MetaData) }; // 395055942
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBFL_SpawnTemplateCharacter_WorldContext_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BFL_eventSpawnTemplateCharacter_WorldContext_Parms, SpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBFL_SpawnTemplateCharacter_WorldContext_Statics::NewProp_SpawRotator = { "SpawRotator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BFL_eventSpawnTemplateCharacter_WorldContext_Parms, SpawRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBFL_SpawnTemplateCharacter_WorldContext_Statics::NewProp_Team_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBFL_SpawnTemplateCharacter_WorldContext_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BFL_eventSpawnTemplateCharacter_WorldContext_Parms, Team), Z_Construct_UEnum_LMN_ETeam, METADATA_PARAMS(0, nullptr) }; // 4252509417
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBFL_SpawnTemplateCharacter_WorldContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BFL_eventSpawnTemplateCharacter_WorldContext_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBFL_SpawnTemplateCharacter_WorldContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_SpawnTemplateCharacter_WorldContext_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_SpawnTemplateCharacter_WorldContext_Statics::NewProp_RowHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_SpawnTemplateCharacter_WorldContext_Statics::NewProp_SpawnLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_SpawnTemplateCharacter_WorldContext_Statics::NewProp_SpawRotator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_SpawnTemplateCharacter_WorldContext_Statics::NewProp_Team_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_SpawnTemplateCharacter_WorldContext_Statics::NewProp_Team,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_SpawnTemplateCharacter_WorldContext_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBFL_SpawnTemplateCharacter_WorldContext_Statics::PropPointers) < 2048);
// ********** End Function SpawnTemplateCharacter_WorldContext Property Definitions ****************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBFL_SpawnTemplateCharacter_WorldContext_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBFL, nullptr, "SpawnTemplateCharacter_WorldContext", 	Z_Construct_UFunction_UBFL_SpawnTemplateCharacter_WorldContext_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UBFL_SpawnTemplateCharacter_WorldContext_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UBFL_SpawnTemplateCharacter_WorldContext_Statics::BFL_eventSpawnTemplateCharacter_WorldContext_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBFL_SpawnTemplateCharacter_WorldContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBFL_SpawnTemplateCharacter_WorldContext_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBFL_SpawnTemplateCharacter_WorldContext_Statics::BFL_eventSpawnTemplateCharacter_WorldContext_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBFL_SpawnTemplateCharacter_WorldContext()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBFL_SpawnTemplateCharacter_WorldContext_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBFL::execSpawnTemplateCharacter_WorldContext)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT_REF(FDataTableRowHandle,Z_Param_Out_RowHandle);
	P_GET_STRUCT(FVector,Z_Param_SpawnLocation);
	P_GET_STRUCT(FRotator,Z_Param_SpawRotator);
	P_GET_ENUM(ETeam,Z_Param_Team);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=UBFL::SpawnTemplateCharacter_WorldContext(Z_Param_WorldContextObject,Z_Param_Out_RowHandle,Z_Param_SpawnLocation,Z_Param_SpawRotator,ETeam(Z_Param_Team));
	P_NATIVE_END;
}
// ********** End Class UBFL Function SpawnTemplateCharacter_WorldContext **************************

// ********** Begin Class UBFL *********************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UBFL;
UClass* UBFL::GetPrivateStaticClass()
{
	using TClass = UBFL;
	if (!Z_Registration_Info_UClass_UBFL.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("BFL"),
			Z_Registration_Info_UClass_UBFL.InnerSingleton,
			StaticRegisterNativesUBFL,
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
	return Z_Registration_Info_UClass_UBFL.InnerSingleton;
}
UClass* Z_Construct_UClass_UBFL_NoRegister()
{
	return UBFL::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBFL_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BFL.h" },
		{ "ModuleRelativePath", "BFL.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UBFL constinit property declarations *************************************
// ********** End Class UBFL constinit property declarations ***************************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetLogic"), .Pointer = &UBFL::execGetLogic },
		{ .NameUTF8 = UTF8TEXT("SetLogic"), .Pointer = &UBFL::execSetLogic },
		{ .NameUTF8 = UTF8TEXT("SpawnActorTeamByClass_WorldContext"), .Pointer = &UBFL::execSpawnActorTeamByClass_WorldContext },
		{ .NameUTF8 = UTF8TEXT("SpawnActorTeamByRowHandle_WorldContext"), .Pointer = &UBFL::execSpawnActorTeamByRowHandle_WorldContext },
		{ .NameUTF8 = UTF8TEXT("SpawnTemplateCharacter_WorldContext"), .Pointer = &UBFL::execSpawnTemplateCharacter_WorldContext },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBFL_GetLogic, "GetLogic" }, // 1259971436
		{ &Z_Construct_UFunction_UBFL_SetLogic, "SetLogic" }, // 3900758601
		{ &Z_Construct_UFunction_UBFL_SpawnActorTeamByClass_WorldContext, "SpawnActorTeamByClass_WorldContext" }, // 3192189176
		{ &Z_Construct_UFunction_UBFL_SpawnActorTeamByRowHandle_WorldContext, "SpawnActorTeamByRowHandle_WorldContext" }, // 1509665251
		{ &Z_Construct_UFunction_UBFL_SpawnTemplateCharacter_WorldContext, "SpawnTemplateCharacter_WorldContext" }, // 36370650
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBFL>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UBFL_Statics
UObject* (*const Z_Construct_UClass_UBFL_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_LMN,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBFL_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBFL_Statics::ClassParams = {
	&UBFL::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBFL_Statics::Class_MetaDataParams), Z_Construct_UClass_UBFL_Statics::Class_MetaDataParams)
};
void UBFL::StaticRegisterNativesUBFL()
{
	UClass* Class = UBFL::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UBFL_Statics::Funcs));
}
UClass* Z_Construct_UClass_UBFL()
{
	if (!Z_Registration_Info_UClass_UBFL.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBFL.OuterSingleton, Z_Construct_UClass_UBFL_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBFL.OuterSingleton;
}
UBFL::UBFL(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UBFL);
UBFL::~UBFL() {}
// ********** End Class UBFL ***********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_BFL_h__Script_LMN_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTemplateCharacterRow::StaticStruct, Z_Construct_UScriptStruct_FTemplateCharacterRow_Statics::NewStructOps, TEXT("TemplateCharacterRow"),&Z_Registration_Info_UScriptStruct_FTemplateCharacterRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTemplateCharacterRow), 320033874U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBFL, UBFL::StaticClass, TEXT("UBFL"), &Z_Registration_Info_UClass_UBFL, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBFL), 2806756522U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_BFL_h__Script_LMN_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_BFL_h__Script_LMN_2700814878{
	TEXT("/Script/LMN"),
	Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_BFL_h__Script_LMN_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_BFL_h__Script_LMN_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_BFL_h__Script_LMN_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_BFL_h__Script_LMN_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
