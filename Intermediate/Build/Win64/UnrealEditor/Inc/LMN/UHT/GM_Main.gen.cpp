// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LMN/GM_Main.h"
#include "Engine/DataTable.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeGM_Main() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
LMN_API UClass* Z_Construct_UClass_AGlobalVisibility_NoRegister();
LMN_API UClass* Z_Construct_UClass_AGM_Main();
LMN_API UClass* Z_Construct_UClass_AGM_Main_NoRegister();
LMN_API UClass* Z_Construct_UClass_AIconRendering_NoRegister();
LMN_API UEnum* Z_Construct_UEnum_LMN_EGameStatus();
LMN_API UFunction* Z_Construct_UDelegateFunction_LMN_OnGameStatusChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_LMN();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EGameStatus ***************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameStatus;
static UEnum* EGameStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGameStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGameStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LMN_EGameStatus, (UObject*)Z_Construct_UPackage__Script_LMN(), TEXT("EGameStatus"));
	}
	return Z_Registration_Info_UEnum_EGameStatus.OuterSingleton;
}
template<> LMN_NON_ATTRIBUTED_API UEnum* StaticEnum<EGameStatus>()
{
	return EGameStatus_StaticEnum();
}
struct Z_Construct_UEnum_LMN_EGameStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Ended.DisplayName", "Ended" },
		{ "Ended.Name", "EGameStatus::Ended" },
		{ "ModuleRelativePath", "GM_Main.h" },
		{ "NotStarted.DisplayName", "NotStarted" },
		{ "NotStarted.Name", "EGameStatus::NotStarted" },
		{ "Started.DisplayName", "Started" },
		{ "Started.Name", "EGameStatus::Started" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGameStatus::NotStarted", (int64)EGameStatus::NotStarted },
		{ "EGameStatus::Started", (int64)EGameStatus::Started },
		{ "EGameStatus::Ended", (int64)EGameStatus::Ended },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_LMN_EGameStatus_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LMN_EGameStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LMN,
	nullptr,
	"EGameStatus",
	"EGameStatus",
	Z_Construct_UEnum_LMN_EGameStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LMN_EGameStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LMN_EGameStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LMN_EGameStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LMN_EGameStatus()
{
	if (!Z_Registration_Info_UEnum_EGameStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameStatus.InnerSingleton, Z_Construct_UEnum_LMN_EGameStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGameStatus.InnerSingleton;
}
// ********** End Enum EGameStatus *****************************************************************

// ********** Begin Delegate FOnGameStatusChanged **************************************************
struct Z_Construct_UDelegateFunction_LMN_OnGameStatusChanged__DelegateSignature_Statics
{
	struct _Script_LMN_eventOnGameStatusChanged_Parms
	{
		EGameStatus GameStatus;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GM_Main.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnGameStatusChanged constinit property declarations ******************
	static const UECodeGen_Private::FBytePropertyParams NewProp_GameStatus_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GameStatus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnGameStatusChanged constinit property declarations ********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnGameStatusChanged Property Definitions *****************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_LMN_OnGameStatusChanged__DelegateSignature_Statics::NewProp_GameStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_LMN_OnGameStatusChanged__DelegateSignature_Statics::NewProp_GameStatus = { "GameStatus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LMN_eventOnGameStatusChanged_Parms, GameStatus), Z_Construct_UEnum_LMN_EGameStatus, METADATA_PARAMS(0, nullptr) }; // 1834395129
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LMN_OnGameStatusChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LMN_OnGameStatusChanged__DelegateSignature_Statics::NewProp_GameStatus_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LMN_OnGameStatusChanged__DelegateSignature_Statics::NewProp_GameStatus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LMN_OnGameStatusChanged__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnGameStatusChanged Property Definitions *******************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_LMN_OnGameStatusChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_LMN, nullptr, "OnGameStatusChanged__DelegateSignature", 	Z_Construct_UDelegateFunction_LMN_OnGameStatusChanged__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LMN_OnGameStatusChanged__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_LMN_OnGameStatusChanged__DelegateSignature_Statics::_Script_LMN_eventOnGameStatusChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LMN_OnGameStatusChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LMN_OnGameStatusChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_LMN_OnGameStatusChanged__DelegateSignature_Statics::_Script_LMN_eventOnGameStatusChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_LMN_OnGameStatusChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LMN_OnGameStatusChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGameStatusChanged_DelegateWrapper(const FMulticastScriptDelegate& OnGameStatusChanged, EGameStatus GameStatus)
{
	struct _Script_LMN_eventOnGameStatusChanged_Parms
	{
		EGameStatus GameStatus;
	};
	_Script_LMN_eventOnGameStatusChanged_Parms Parms;
	Parms.GameStatus=GameStatus;
	OnGameStatusChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnGameStatusChanged ****************************************************

// ********** Begin Class AGM_Main *****************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AGM_Main;
UClass* AGM_Main::GetPrivateStaticClass()
{
	using TClass = AGM_Main;
	if (!Z_Registration_Info_UClass_AGM_Main.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("GM_Main"),
			Z_Registration_Info_UClass_AGM_Main.InnerSingleton,
			StaticRegisterNativesAGM_Main,
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
	return Z_Registration_Info_UClass_AGM_Main.InnerSingleton;
}
UClass* Z_Construct_UClass_AGM_Main_NoRegister()
{
	return AGM_Main::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AGM_Main_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GM_Main.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "GM_Main.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconRendering_MetaData[] = {
		{ "ModuleRelativePath", "GM_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconRenderingClass_MetaData[] = {
		{ "Category", "IconRendering" },
		{ "ModuleRelativePath", "GM_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalVisibility_MetaData[] = {
		{ "ModuleRelativePath", "GM_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypeUnits_MetaData[] = {
		{ "Category", "TypeUnits" },
		{ "ModuleRelativePath", "GM_Main.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AGM_Main constinit property declarations *********************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IconRendering;
	static const UECodeGen_Private::FClassPropertyParams NewProp_IconRenderingClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GlobalVisibility;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TypeUnits_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TypeUnits;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AGM_Main constinit property declarations ***********************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGM_Main>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AGM_Main_Statics

// ********** Begin Class AGM_Main Property Definitions ********************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGM_Main_Statics::NewProp_IconRendering = { "IconRendering", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGM_Main, IconRendering), Z_Construct_UClass_AIconRendering_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconRendering_MetaData), NewProp_IconRendering_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGM_Main_Statics::NewProp_IconRenderingClass = { "IconRenderingClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGM_Main, IconRenderingClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_AIconRendering_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconRenderingClass_MetaData), NewProp_IconRenderingClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGM_Main_Statics::NewProp_GlobalVisibility = { "GlobalVisibility", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGM_Main, GlobalVisibility), Z_Construct_UClass_AGlobalVisibility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalVisibility_MetaData), NewProp_GlobalVisibility_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGM_Main_Statics::NewProp_TypeUnits_Inner = { "TypeUnits", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(0, nullptr) }; // 395055942
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGM_Main_Statics::NewProp_TypeUnits = { "TypeUnits", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGM_Main, TypeUnits), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypeUnits_MetaData), NewProp_TypeUnits_MetaData) }; // 395055942
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGM_Main_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGM_Main_Statics::NewProp_IconRendering,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGM_Main_Statics::NewProp_IconRenderingClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGM_Main_Statics::NewProp_GlobalVisibility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGM_Main_Statics::NewProp_TypeUnits_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGM_Main_Statics::NewProp_TypeUnits,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGM_Main_Statics::PropPointers) < 2048);
// ********** End Class AGM_Main Property Definitions **********************************************
UObject* (*const Z_Construct_UClass_AGM_Main_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_LMN,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGM_Main_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGM_Main_Statics::ClassParams = {
	&AGM_Main::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGM_Main_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGM_Main_Statics::PropPointers),
	0,
	0x009002ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGM_Main_Statics::Class_MetaDataParams), Z_Construct_UClass_AGM_Main_Statics::Class_MetaDataParams)
};
void AGM_Main::StaticRegisterNativesAGM_Main()
{
}
UClass* Z_Construct_UClass_AGM_Main()
{
	if (!Z_Registration_Info_UClass_AGM_Main.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGM_Main.OuterSingleton, Z_Construct_UClass_AGM_Main_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGM_Main.OuterSingleton;
}
AGM_Main::AGM_Main(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AGM_Main);
AGM_Main::~AGM_Main() {}
// ********** End Class AGM_Main *******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_GM_Main_h__Script_LMN_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGameStatus_StaticEnum, TEXT("EGameStatus"), &Z_Registration_Info_UEnum_EGameStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1834395129U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGM_Main, AGM_Main::StaticClass, TEXT("AGM_Main"), &Z_Registration_Info_UClass_AGM_Main, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGM_Main), 4214359577U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_GM_Main_h__Script_LMN_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_GM_Main_h__Script_LMN_3207732689{
	TEXT("/Script/LMN"),
	Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_GM_Main_h__Script_LMN_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_GM_Main_h__Script_LMN_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_GM_Main_h__Script_LMN_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_GM_Main_h__Script_LMN_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
