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
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
LMN_API UClass* Z_Construct_UClass_UBFL();
LMN_API UClass* Z_Construct_UClass_UBFL_NoRegister();
LMN_API UClass* Z_Construct_UClass_ULogicBase_NoRegister();
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
		{ .NameUTF8 = UTF8TEXT("GetLogic"), .Pointer = &UBFL::execGetLogic },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBFL_CreateLogicByRowHandle, "CreateLogicByRowHandle" }, // 1569377341
		{ &Z_Construct_UFunction_UBFL_CreateLogicByRowName, "CreateLogicByRowName" }, // 1995861202
		{ &Z_Construct_UFunction_UBFL_GetLogic, "GetLogic" }, // 2218677534
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
		{ Z_Construct_UClass_UBFL, UBFL::StaticClass, TEXT("UBFL"), &Z_Registration_Info_UClass_UBFL, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBFL), 388935325U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_BFL_h__Script_LMN_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_BFL_h__Script_LMN_1168838071{
	TEXT("/Script/LMN"),
	Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_BFL_h__Script_LMN_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_BFL_h__Script_LMN_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
