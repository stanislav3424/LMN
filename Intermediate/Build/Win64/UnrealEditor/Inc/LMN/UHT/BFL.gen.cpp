// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LMN/BFL.h"
#include "Engine/DataTable.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeBFL() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
LMN_API UClass* Z_Construct_UClass_UBFL();
LMN_API UClass* Z_Construct_UClass_UBFL_NoRegister();
LMN_API UClass* Z_Construct_UClass_ULogicBase_NoRegister();
LMN_API UEnum* Z_Construct_UEnum_LMN_ETeam();
UPackage* Z_Construct_UPackage__Script_LMN();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBFL Function CreateLogicByRowHandle *************************************
struct Z_Construct_UFunction_UBFL_CreateLogicByRowHandle_Statics
{
	struct BFL_eventCreateLogicByRowHandle_Parms
	{
		UWorld* World;
		FDataTableRowHandle RowHandle;
		ULogicBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Logic" },
		{ "ModuleRelativePath", "BFL.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function CreateLogicByRowHandle constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RowHandle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CreateLogicByRowHandle constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CreateLogicByRowHandle Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBFL_CreateLogicByRowHandle_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BFL_eventCreateLogicByRowHandle_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBFL_CreateLogicByRowHandle_Statics::NewProp_RowHandle = { "RowHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BFL_eventCreateLogicByRowHandle_Parms, RowHandle), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(0, nullptr) }; // 395055942
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBFL_CreateLogicByRowHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BFL_eventCreateLogicByRowHandle_Parms, ReturnValue), Z_Construct_UClass_ULogicBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBFL_CreateLogicByRowHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_CreateLogicByRowHandle_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_CreateLogicByRowHandle_Statics::NewProp_RowHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_CreateLogicByRowHandle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBFL_CreateLogicByRowHandle_Statics::PropPointers) < 2048);
// ********** End Function CreateLogicByRowHandle Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBFL_CreateLogicByRowHandle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBFL, nullptr, "CreateLogicByRowHandle", 	Z_Construct_UFunction_UBFL_CreateLogicByRowHandle_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UBFL_CreateLogicByRowHandle_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UBFL_CreateLogicByRowHandle_Statics::BFL_eventCreateLogicByRowHandle_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBFL_CreateLogicByRowHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBFL_CreateLogicByRowHandle_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBFL_CreateLogicByRowHandle_Statics::BFL_eventCreateLogicByRowHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBFL_CreateLogicByRowHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBFL_CreateLogicByRowHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBFL::execCreateLogicByRowHandle)
{
	P_GET_OBJECT(UWorld,Z_Param_World);
	P_GET_STRUCT(FDataTableRowHandle,Z_Param_RowHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULogicBase**)Z_Param__Result=UBFL::CreateLogicByRowHandle(Z_Param_World,Z_Param_RowHandle);
	P_NATIVE_END;
}
// ********** End Class UBFL Function CreateLogicByRowHandle ***************************************

// ********** Begin Class UBFL Function CreateLogicByRowName ***************************************
struct Z_Construct_UFunction_UBFL_CreateLogicByRowName_Statics
{
	struct BFL_eventCreateLogicByRowName_Parms
	{
		UWorld* World;
		FName RowName;
		ULogicBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Logic" },
		{ "ModuleRelativePath", "BFL.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function CreateLogicByRowName constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RowName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CreateLogicByRowName constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CreateLogicByRowName Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBFL_CreateLogicByRowName_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BFL_eventCreateLogicByRowName_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBFL_CreateLogicByRowName_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BFL_eventCreateLogicByRowName_Parms, RowName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBFL_CreateLogicByRowName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BFL_eventCreateLogicByRowName_Parms, ReturnValue), Z_Construct_UClass_ULogicBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBFL_CreateLogicByRowName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_CreateLogicByRowName_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_CreateLogicByRowName_Statics::NewProp_RowName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_CreateLogicByRowName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBFL_CreateLogicByRowName_Statics::PropPointers) < 2048);
// ********** End Function CreateLogicByRowName Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBFL_CreateLogicByRowName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBFL, nullptr, "CreateLogicByRowName", 	Z_Construct_UFunction_UBFL_CreateLogicByRowName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UBFL_CreateLogicByRowName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UBFL_CreateLogicByRowName_Statics::BFL_eventCreateLogicByRowName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBFL_CreateLogicByRowName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBFL_CreateLogicByRowName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBFL_CreateLogicByRowName_Statics::BFL_eventCreateLogicByRowName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBFL_CreateLogicByRowName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBFL_CreateLogicByRowName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBFL::execCreateLogicByRowName)
{
	P_GET_OBJECT(UWorld,Z_Param_World);
	P_GET_PROPERTY(FNameProperty,Z_Param_RowName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULogicBase**)Z_Param__Result=UBFL::CreateLogicByRowName(Z_Param_World,Z_Param_RowName);
	P_NATIVE_END;
}
// ********** End Class UBFL Function CreateLogicByRowName *****************************************

// ********** Begin Class UBFL Function GetIcon ****************************************************
struct Z_Construct_UFunction_UBFL_GetIcon_Statics
{
	struct BFL_eventGetIcon_Parms
	{
		UObject* Object;
		UMaterialInstanceDynamic* MID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Icon" },
		{ "ModuleRelativePath", "BFL.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetIcon constinit property declarations *******************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetIcon constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetIcon Property Definitions ******************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBFL_GetIcon_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BFL_eventGetIcon_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBFL_GetIcon_Statics::NewProp_MID = { "MID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BFL_eventGetIcon_Parms, MID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBFL_GetIcon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_GetIcon_Statics::NewProp_Object,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_GetIcon_Statics::NewProp_MID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBFL_GetIcon_Statics::PropPointers) < 2048);
// ********** End Function GetIcon Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBFL_GetIcon_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBFL, nullptr, "GetIcon", 	Z_Construct_UFunction_UBFL_GetIcon_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UBFL_GetIcon_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UBFL_GetIcon_Statics::BFL_eventGetIcon_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBFL_GetIcon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBFL_GetIcon_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBFL_GetIcon_Statics::BFL_eventGetIcon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBFL_GetIcon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBFL_GetIcon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBFL::execGetIcon)
{
	P_GET_OBJECT(UObject,Z_Param_Object);
	P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_MID);
	P_FINISH;
	P_NATIVE_BEGIN;
	UBFL::GetIcon(Z_Param_Object,Z_Param_MID);
	P_NATIVE_END;
}
// ********** End Class UBFL Function GetIcon ******************************************************

// ********** Begin Class UBFL Function GetLogic ***************************************************
struct Z_Construct_UFunction_UBFL_GetLogic_Statics
{
	struct BFL_eventGetLogic_Parms
	{
		AActor* AActor;
		ULogicBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Logic" },
		{ "ModuleRelativePath", "BFL.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetLogic constinit property declarations ******************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLogic constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLogic Property Definitions *****************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBFL_GetLogic_Statics::NewProp_AActor = { "AActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BFL_eventGetLogic_Parms, AActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBFL_GetLogic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BFL_eventGetLogic_Parms, ReturnValue), Z_Construct_UClass_ULogicBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBFL_GetLogic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_GetLogic_Statics::NewProp_AActor,
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
	P_GET_OBJECT(AActor,Z_Param_AActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULogicBase**)Z_Param__Result=UBFL::GetLogic(Z_Param_AActor);
	P_NATIVE_END;
}
// ********** End Class UBFL Function GetLogic *****************************************************

// ********** Begin Class UBFL Function GetTeam ****************************************************
struct Z_Construct_UFunction_UBFL_GetTeam_Statics
{
	struct BFL_eventGetTeam_Parms
	{
		ETeam TargetTeam;
		ULogicBase* LogicBase;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Logic" },
		{ "ModuleRelativePath", "BFL.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetTeam constinit property declarations *******************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_TargetTeam_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetTeam;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LogicBase;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetTeam constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetTeam Property Definitions ******************************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBFL_GetTeam_Statics::NewProp_TargetTeam_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBFL_GetTeam_Statics::NewProp_TargetTeam = { "TargetTeam", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BFL_eventGetTeam_Parms, TargetTeam), Z_Construct_UEnum_LMN_ETeam, METADATA_PARAMS(0, nullptr) }; // 4252509417
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBFL_GetTeam_Statics::NewProp_LogicBase = { "LogicBase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BFL_eventGetTeam_Parms, LogicBase), Z_Construct_UClass_ULogicBase_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UBFL_GetTeam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BFL_eventGetTeam_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBFL_GetTeam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BFL_eventGetTeam_Parms), &Z_Construct_UFunction_UBFL_GetTeam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBFL_GetTeam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_GetTeam_Statics::NewProp_TargetTeam_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_GetTeam_Statics::NewProp_TargetTeam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_GetTeam_Statics::NewProp_LogicBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_GetTeam_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBFL_GetTeam_Statics::PropPointers) < 2048);
// ********** End Function GetTeam Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBFL_GetTeam_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBFL, nullptr, "GetTeam", 	Z_Construct_UFunction_UBFL_GetTeam_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UBFL_GetTeam_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UBFL_GetTeam_Statics::BFL_eventGetTeam_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBFL_GetTeam_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBFL_GetTeam_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBFL_GetTeam_Statics::BFL_eventGetTeam_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBFL_GetTeam()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBFL_GetTeam_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBFL::execGetTeam)
{
	P_GET_ENUM_REF(ETeam,Z_Param_Out_TargetTeam);
	P_GET_OBJECT(ULogicBase,Z_Param_LogicBase);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UBFL::GetTeam((ETeam&)(Z_Param_Out_TargetTeam),Z_Param_LogicBase);
	P_NATIVE_END;
}
// ********** End Class UBFL Function GetTeam ******************************************************

// ********** Begin Class UBFL Function GetTeamActor ***********************************************
struct Z_Construct_UFunction_UBFL_GetTeamActor_Statics
{
	struct BFL_eventGetTeamActor_Parms
	{
		ETeam TargetTeam;
		AActor* Actor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Logic" },
		{ "ModuleRelativePath", "BFL.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetTeamActor constinit property declarations **************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_TargetTeam_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetTeam;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetTeamActor constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetTeamActor Property Definitions *************************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBFL_GetTeamActor_Statics::NewProp_TargetTeam_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBFL_GetTeamActor_Statics::NewProp_TargetTeam = { "TargetTeam", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BFL_eventGetTeamActor_Parms, TargetTeam), Z_Construct_UEnum_LMN_ETeam, METADATA_PARAMS(0, nullptr) }; // 4252509417
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBFL_GetTeamActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BFL_eventGetTeamActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UBFL_GetTeamActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BFL_eventGetTeamActor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBFL_GetTeamActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BFL_eventGetTeamActor_Parms), &Z_Construct_UFunction_UBFL_GetTeamActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBFL_GetTeamActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_GetTeamActor_Statics::NewProp_TargetTeam_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_GetTeamActor_Statics::NewProp_TargetTeam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_GetTeamActor_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_GetTeamActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBFL_GetTeamActor_Statics::PropPointers) < 2048);
// ********** End Function GetTeamActor Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBFL_GetTeamActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBFL, nullptr, "GetTeamActor", 	Z_Construct_UFunction_UBFL_GetTeamActor_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UBFL_GetTeamActor_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UBFL_GetTeamActor_Statics::BFL_eventGetTeamActor_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBFL_GetTeamActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBFL_GetTeamActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBFL_GetTeamActor_Statics::BFL_eventGetTeamActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBFL_GetTeamActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBFL_GetTeamActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBFL::execGetTeamActor)
{
	P_GET_ENUM_REF(ETeam,Z_Param_Out_TargetTeam);
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UBFL::GetTeamActor((ETeam&)(Z_Param_Out_TargetTeam),Z_Param_Actor);
	P_NATIVE_END;
}
// ********** End Class UBFL Function GetTeamActor *************************************************

// ********** Begin Class UBFL Function IsTeamsEqual ***********************************************
struct Z_Construct_UFunction_UBFL_IsTeamsEqual_Statics
{
	struct BFL_eventIsTeamsEqual_Parms
	{
		ULogicBase* LogicA;
		ULogicBase* LogicB;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Logic" },
		{ "ModuleRelativePath", "BFL.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsTeamsEqual constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LogicA;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LogicB;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsTeamsEqual constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsTeamsEqual Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBFL_IsTeamsEqual_Statics::NewProp_LogicA = { "LogicA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BFL_eventIsTeamsEqual_Parms, LogicA), Z_Construct_UClass_ULogicBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBFL_IsTeamsEqual_Statics::NewProp_LogicB = { "LogicB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BFL_eventIsTeamsEqual_Parms, LogicB), Z_Construct_UClass_ULogicBase_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UBFL_IsTeamsEqual_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BFL_eventIsTeamsEqual_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBFL_IsTeamsEqual_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BFL_eventIsTeamsEqual_Parms), &Z_Construct_UFunction_UBFL_IsTeamsEqual_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBFL_IsTeamsEqual_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_IsTeamsEqual_Statics::NewProp_LogicA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_IsTeamsEqual_Statics::NewProp_LogicB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_IsTeamsEqual_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBFL_IsTeamsEqual_Statics::PropPointers) < 2048);
// ********** End Function IsTeamsEqual Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBFL_IsTeamsEqual_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBFL, nullptr, "IsTeamsEqual", 	Z_Construct_UFunction_UBFL_IsTeamsEqual_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UBFL_IsTeamsEqual_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UBFL_IsTeamsEqual_Statics::BFL_eventIsTeamsEqual_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBFL_IsTeamsEqual_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBFL_IsTeamsEqual_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBFL_IsTeamsEqual_Statics::BFL_eventIsTeamsEqual_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBFL_IsTeamsEqual()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBFL_IsTeamsEqual_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBFL::execIsTeamsEqual)
{
	P_GET_OBJECT(ULogicBase,Z_Param_LogicA);
	P_GET_OBJECT(ULogicBase,Z_Param_LogicB);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UBFL::IsTeamsEqual(Z_Param_LogicA,Z_Param_LogicB);
	P_NATIVE_END;
}
// ********** End Class UBFL Function IsTeamsEqual *************************************************

// ********** Begin Class UBFL Function IsTeamsEqualActor ******************************************
struct Z_Construct_UFunction_UBFL_IsTeamsEqualActor_Statics
{
	struct BFL_eventIsTeamsEqualActor_Parms
	{
		AActor* ActorA;
		AActor* ActorB;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Logic" },
		{ "ModuleRelativePath", "BFL.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsTeamsEqualActor constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorA;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorB;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsTeamsEqualActor constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsTeamsEqualActor Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBFL_IsTeamsEqualActor_Statics::NewProp_ActorA = { "ActorA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BFL_eventIsTeamsEqualActor_Parms, ActorA), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBFL_IsTeamsEqualActor_Statics::NewProp_ActorB = { "ActorB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BFL_eventIsTeamsEqualActor_Parms, ActorB), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UBFL_IsTeamsEqualActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BFL_eventIsTeamsEqualActor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBFL_IsTeamsEqualActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BFL_eventIsTeamsEqualActor_Parms), &Z_Construct_UFunction_UBFL_IsTeamsEqualActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBFL_IsTeamsEqualActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_IsTeamsEqualActor_Statics::NewProp_ActorA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_IsTeamsEqualActor_Statics::NewProp_ActorB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBFL_IsTeamsEqualActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBFL_IsTeamsEqualActor_Statics::PropPointers) < 2048);
// ********** End Function IsTeamsEqualActor Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBFL_IsTeamsEqualActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBFL, nullptr, "IsTeamsEqualActor", 	Z_Construct_UFunction_UBFL_IsTeamsEqualActor_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UBFL_IsTeamsEqualActor_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UBFL_IsTeamsEqualActor_Statics::BFL_eventIsTeamsEqualActor_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBFL_IsTeamsEqualActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBFL_IsTeamsEqualActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBFL_IsTeamsEqualActor_Statics::BFL_eventIsTeamsEqualActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBFL_IsTeamsEqualActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBFL_IsTeamsEqualActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBFL::execIsTeamsEqualActor)
{
	P_GET_OBJECT(AActor,Z_Param_ActorA);
	P_GET_OBJECT(AActor,Z_Param_ActorB);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UBFL::IsTeamsEqualActor(Z_Param_ActorA,Z_Param_ActorB);
	P_NATIVE_END;
}
// ********** End Class UBFL Function IsTeamsEqualActor ********************************************

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
		{ .NameUTF8 = UTF8TEXT("CreateLogicByRowHandle"), .Pointer = &UBFL::execCreateLogicByRowHandle },
		{ .NameUTF8 = UTF8TEXT("CreateLogicByRowName"), .Pointer = &UBFL::execCreateLogicByRowName },
		{ .NameUTF8 = UTF8TEXT("GetIcon"), .Pointer = &UBFL::execGetIcon },
		{ .NameUTF8 = UTF8TEXT("GetLogic"), .Pointer = &UBFL::execGetLogic },
		{ .NameUTF8 = UTF8TEXT("GetTeam"), .Pointer = &UBFL::execGetTeam },
		{ .NameUTF8 = UTF8TEXT("GetTeamActor"), .Pointer = &UBFL::execGetTeamActor },
		{ .NameUTF8 = UTF8TEXT("IsTeamsEqual"), .Pointer = &UBFL::execIsTeamsEqual },
		{ .NameUTF8 = UTF8TEXT("IsTeamsEqualActor"), .Pointer = &UBFL::execIsTeamsEqualActor },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBFL_CreateLogicByRowHandle, "CreateLogicByRowHandle" }, // 1569377341
		{ &Z_Construct_UFunction_UBFL_CreateLogicByRowName, "CreateLogicByRowName" }, // 1995861202
		{ &Z_Construct_UFunction_UBFL_GetIcon, "GetIcon" }, // 3868335089
		{ &Z_Construct_UFunction_UBFL_GetLogic, "GetLogic" }, // 2218677534
		{ &Z_Construct_UFunction_UBFL_GetTeam, "GetTeam" }, // 296717931
		{ &Z_Construct_UFunction_UBFL_GetTeamActor, "GetTeamActor" }, // 995336964
		{ &Z_Construct_UFunction_UBFL_IsTeamsEqual, "IsTeamsEqual" }, // 2548859586
		{ &Z_Construct_UFunction_UBFL_IsTeamsEqualActor, "IsTeamsEqualActor" }, // 982986444
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
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBFL, UBFL::StaticClass, TEXT("UBFL"), &Z_Registration_Info_UClass_UBFL, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBFL), 2397465223U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_BFL_h__Script_LMN_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_BFL_h__Script_LMN_1846629130{
	TEXT("/Script/LMN"),
	Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_BFL_h__Script_LMN_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_BFL_h__Script_LMN_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
