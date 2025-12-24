// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LMN/GM_Main.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeGM_Main() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
LMN_API UClass* Z_Construct_UClass_AGlobalVisibility_NoRegister();
LMN_API UClass* Z_Construct_UClass_AGM_Main();
LMN_API UClass* Z_Construct_UClass_AGM_Main_NoRegister();
LMN_API UClass* Z_Construct_UClass_AIconRendering_NoRegister();
LMN_API UFunction* Z_Construct_UDelegateFunction_LMN_OnEndGame__DelegateSignature();
LMN_API UFunction* Z_Construct_UDelegateFunction_LMN_OnStartGame__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_LMN();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnStartGame **********************************************************
struct Z_Construct_UDelegateFunction_LMN_OnStartGame__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GM_Main.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnStartGame constinit property declarations **************************
// ********** End Delegate FOnStartGame constinit property declarations ****************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_LMN_OnStartGame__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_LMN, nullptr, "OnStartGame__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LMN_OnStartGame__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LMN_OnStartGame__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_LMN_OnStartGame__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LMN_OnStartGame__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnStartGame_DelegateWrapper(const FMulticastScriptDelegate& OnStartGame)
{
	OnStartGame.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnStartGame ************************************************************

// ********** Begin Delegate FOnEndGame ************************************************************
struct Z_Construct_UDelegateFunction_LMN_OnEndGame__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GM_Main.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnEndGame constinit property declarations ****************************
// ********** End Delegate FOnEndGame constinit property declarations ******************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_LMN_OnEndGame__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_LMN, nullptr, "OnEndGame__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LMN_OnEndGame__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LMN_OnEndGame__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_LMN_OnEndGame__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LMN_OnEndGame__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnEndGame_DelegateWrapper(const FMulticastScriptDelegate& OnEndGame)
{
	OnEndGame.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnEndGame **************************************************************

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
#endif // WITH_METADATA

// ********** Begin Class AGM_Main constinit property declarations *********************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IconRendering;
	static const UECodeGen_Private::FClassPropertyParams NewProp_IconRenderingClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GlobalVisibility;
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
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGM_Main_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGM_Main_Statics::NewProp_IconRendering,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGM_Main_Statics::NewProp_IconRenderingClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGM_Main_Statics::NewProp_GlobalVisibility,
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
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGM_Main, AGM_Main::StaticClass, TEXT("AGM_Main"), &Z_Registration_Info_UClass_AGM_Main, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGM_Main), 22903556U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_GM_Main_h__Script_LMN_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_GM_Main_h__Script_LMN_1761455682{
	TEXT("/Script/LMN"),
	Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_GM_Main_h__Script_LMN_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_GM_Main_h__Script_LMN_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
