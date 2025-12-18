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
UPackage* Z_Construct_UPackage__Script_LMN();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USC_Selected Function SelectedChange *************************************
struct Z_Construct_UFunction_USC_Selected_SelectedChange_Statics
{
	struct SC_Selected_eventSelectedChange_Parms
	{
		bool Selected;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SC_Selected.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SelectedChange constinit property declarations ************************
	static void NewProp_Selected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Selected;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SelectedChange constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SelectedChange Property Definitions ***********************************
void Z_Construct_UFunction_USC_Selected_SelectedChange_Statics::NewProp_Selected_SetBit(void* Obj)
{
	((SC_Selected_eventSelectedChange_Parms*)Obj)->Selected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USC_Selected_SelectedChange_Statics::NewProp_Selected = { "Selected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SC_Selected_eventSelectedChange_Parms), &Z_Construct_UFunction_USC_Selected_SelectedChange_Statics::NewProp_Selected_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USC_Selected_SelectedChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USC_Selected_SelectedChange_Statics::NewProp_Selected,
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
	P_GET_UBOOL(Z_Param_Selected);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SelectedChange(Z_Param_Selected);
	P_NATIVE_END;
}
// ********** End Class USC_Selected Function SelectedChange ***************************************

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
#endif // WITH_METADATA

// ********** Begin Class USC_Selected constinit property declarations *****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectionMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MID;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SelectedParameter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USC_Selected constinit property declarations *******************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("SelectedChange"), .Pointer = &USC_Selected::execSelectedChange },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USC_Selected_SelectedChange, "SelectedChange" }, // 400796153
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
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USC_Selected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USC_Selected_Statics::NewProp_SelectionMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USC_Selected_Statics::NewProp_DefaultMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USC_Selected_Statics::NewProp_MID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USC_Selected_Statics::NewProp_SelectedParameter,
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
		{ Z_Construct_UClass_USC_Selected, USC_Selected::StaticClass, TEXT("USC_Selected"), &Z_Registration_Info_UClass_USC_Selected, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USC_Selected), 2440304710U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_SC_Selected_h__Script_LMN_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_SC_Selected_h__Script_LMN_3470430002{
	TEXT("/Script/LMN"),
	Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_SC_Selected_h__Script_LMN_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_SC_Selected_h__Script_LMN_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
