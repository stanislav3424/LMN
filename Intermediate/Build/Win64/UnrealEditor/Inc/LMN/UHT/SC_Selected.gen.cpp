// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LMN/SC_Selected.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSC_Selected() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
LMN_API UClass* Z_Construct_UClass_USC_Selected();
LMN_API UClass* Z_Construct_UClass_USC_Selected_NoRegister();
LMN_API UClass* Z_Construct_UClass_USceneComponentBase();
LMN_API UEnum* Z_Construct_UEnum_LMN_ETeam();
UPackage* Z_Construct_UPackage__Script_LMN();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USC_Selected Function SelectedChange *************************************
struct Z_Construct_UFunction_USC_Selected_SelectedChange_Statics
{
	struct SC_Selected_eventSelectedChange_Parms
	{
		bool bNewSelected;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SC_Selected.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SelectedChange constinit property declarations ************************
	static void NewProp_bNewSelected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewSelected;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SelectedChange constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SelectedChange Property Definitions ***********************************
void Z_Construct_UFunction_USC_Selected_SelectedChange_Statics::NewProp_bNewSelected_SetBit(void* Obj)
{
	((SC_Selected_eventSelectedChange_Parms*)Obj)->bNewSelected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USC_Selected_SelectedChange_Statics::NewProp_bNewSelected = { "bNewSelected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SC_Selected_eventSelectedChange_Parms), &Z_Construct_UFunction_USC_Selected_SelectedChange_Statics::NewProp_bNewSelected_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USC_Selected_SelectedChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USC_Selected_SelectedChange_Statics::NewProp_bNewSelected,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USC_Selected_SelectedChange_Statics::PropPointers) < 2048);
// ********** End Function SelectedChange Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USC_Selected_SelectedChange_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USC_Selected, nullptr, "SelectedChange", 	Z_Construct_UFunction_USC_Selected_SelectedChange_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USC_Selected_SelectedChange_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USC_Selected_SelectedChange_Statics::SC_Selected_eventSelectedChange_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USC_Selected_SelectedChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_USC_Selected_SelectedChange_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USC_Selected_SelectedChange_Statics::SC_Selected_eventSelectedChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USC_Selected_SelectedChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USC_Selected_SelectedChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USC_Selected::execSelectedChange)
{
	P_GET_UBOOL(Z_Param_bNewSelected);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SelectedChange(Z_Param_bNewSelected);
	P_NATIVE_END;
}
// ********** End Class USC_Selected Function SelectedChange ***************************************

// ********** Begin Class USC_Selected Function TeamChange *****************************************
struct Z_Construct_UFunction_USC_Selected_TeamChange_Statics
{
	struct SC_Selected_eventTeamChange_Parms
	{
		ETeam NewTeam;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SC_Selected.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function TeamChange constinit property declarations ****************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewTeam_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewTeam;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function TeamChange constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function TeamChange Property Definitions ***************************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USC_Selected_TeamChange_Statics::NewProp_NewTeam_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USC_Selected_TeamChange_Statics::NewProp_NewTeam = { "NewTeam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SC_Selected_eventTeamChange_Parms, NewTeam), Z_Construct_UEnum_LMN_ETeam, METADATA_PARAMS(0, nullptr) }; // 4252509417
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USC_Selected_TeamChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USC_Selected_TeamChange_Statics::NewProp_NewTeam_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USC_Selected_TeamChange_Statics::NewProp_NewTeam,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USC_Selected_TeamChange_Statics::PropPointers) < 2048);
// ********** End Function TeamChange Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USC_Selected_TeamChange_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USC_Selected, nullptr, "TeamChange", 	Z_Construct_UFunction_USC_Selected_TeamChange_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USC_Selected_TeamChange_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USC_Selected_TeamChange_Statics::SC_Selected_eventTeamChange_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USC_Selected_TeamChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_USC_Selected_TeamChange_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USC_Selected_TeamChange_Statics::SC_Selected_eventTeamChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USC_Selected_TeamChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USC_Selected_TeamChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USC_Selected::execTeamChange)
{
	P_GET_ENUM(ETeam,Z_Param_NewTeam);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TeamChange(ETeam(Z_Param_NewTeam));
	P_NATIVE_END;
}
// ********** End Class USC_Selected Function TeamChange *******************************************

// ********** Begin Class USC_Selected *************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USC_Selected;
UClass* USC_Selected::GetPrivateStaticClass()
{
	using TClass = USC_Selected;
	if (!Z_Registration_Info_UClass_USC_Selected.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SC_Selected"),
			Z_Registration_Info_UClass_USC_Selected.InnerSingleton,
			StaticRegisterNativesUSC_Selected,
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
	return Z_Registration_Info_UClass_USC_Selected.InnerSingleton;
}
UClass* Z_Construct_UClass_USC_Selected_NoRegister()
{
	return USC_Selected::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USC_Selected_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "SC_Selected.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "SC_Selected.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectionMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SC_Selected.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMesh_MetaData[] = {
		{ "Category", "Visual" },
		{ "ModuleRelativePath", "SC_Selected.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MID_MetaData[] = {
		{ "ModuleRelativePath", "SC_Selected.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedParameter_MetaData[] = {
		{ "Category", "Visual" },
		{ "ModuleRelativePath", "SC_Selected.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorParameter_MetaData[] = {
		{ "Category", "Visual" },
		{ "ModuleRelativePath", "SC_Selected.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USC_Selected constinit property declarations *****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectionMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MID;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SelectedParameter;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ColorParameter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USC_Selected constinit property declarations *******************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("SelectedChange"), .Pointer = &USC_Selected::execSelectedChange },
		{ .NameUTF8 = UTF8TEXT("TeamChange"), .Pointer = &USC_Selected::execTeamChange },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USC_Selected_SelectedChange, "SelectedChange" }, // 2734191426
		{ &Z_Construct_UFunction_USC_Selected_TeamChange, "TeamChange" }, // 1044968976
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USC_Selected>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USC_Selected_Statics

// ********** Begin Class USC_Selected Property Definitions ****************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USC_Selected_Statics::NewProp_SelectionMesh = { "SelectionMesh", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USC_Selected, SelectionMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectionMesh_MetaData), NewProp_SelectionMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USC_Selected_Statics::NewProp_DefaultMesh = { "DefaultMesh", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USC_Selected, DefaultMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMesh_MetaData), NewProp_DefaultMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USC_Selected_Statics::NewProp_MID = { "MID", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USC_Selected, MID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MID_MetaData), NewProp_MID_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USC_Selected_Statics::NewProp_SelectedParameter = { "SelectedParameter", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USC_Selected, SelectedParameter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedParameter_MetaData), NewProp_SelectedParameter_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USC_Selected_Statics::NewProp_ColorParameter = { "ColorParameter", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USC_Selected, ColorParameter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorParameter_MetaData), NewProp_ColorParameter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USC_Selected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USC_Selected_Statics::NewProp_SelectionMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USC_Selected_Statics::NewProp_DefaultMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USC_Selected_Statics::NewProp_MID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USC_Selected_Statics::NewProp_SelectedParameter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USC_Selected_Statics::NewProp_ColorParameter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USC_Selected_Statics::PropPointers) < 2048);
// ********** End Class USC_Selected Property Definitions ******************************************
UObject* (*const Z_Construct_UClass_USC_Selected_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponentBase,
	(UObject* (*)())Z_Construct_UPackage__Script_LMN,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USC_Selected_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USC_Selected_Statics::ClassParams = {
	&USC_Selected::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USC_Selected_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USC_Selected_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USC_Selected_Statics::Class_MetaDataParams), Z_Construct_UClass_USC_Selected_Statics::Class_MetaDataParams)
};
void USC_Selected::StaticRegisterNativesUSC_Selected()
{
	UClass* Class = USC_Selected::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USC_Selected_Statics::Funcs));
}
UClass* Z_Construct_UClass_USC_Selected()
{
	if (!Z_Registration_Info_UClass_USC_Selected.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USC_Selected.OuterSingleton, Z_Construct_UClass_USC_Selected_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USC_Selected.OuterSingleton;
}
USC_Selected::USC_Selected() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USC_Selected);
USC_Selected::~USC_Selected() {}
// ********** End Class USC_Selected ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_SC_Selected_h__Script_LMN_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USC_Selected, USC_Selected::StaticClass, TEXT("USC_Selected"), &Z_Registration_Info_UClass_USC_Selected, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USC_Selected), 1487484255U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_SC_Selected_h__Script_LMN_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_SC_Selected_h__Script_LMN_1469557511{
	TEXT("/Script/LMN"),
	Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_SC_Selected_h__Script_LMN_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_SC_Selected_h__Script_LMN_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
