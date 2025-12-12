// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LMN/CameraPawn.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCameraPawn() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UFloatingPawnMovement_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
LMN_API UClass* Z_Construct_UClass_ACameraPawn();
LMN_API UClass* Z_Construct_UClass_ACameraPawn_NoRegister();
UPackage* Z_Construct_UPackage__Script_LMN();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACameraPawn **************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ACameraPawn;
UClass* ACameraPawn::GetPrivateStaticClass()
{
	using TClass = ACameraPawn;
	if (!Z_Registration_Info_UClass_ACameraPawn.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CameraPawn"),
			Z_Registration_Info_UClass_ACameraPawn.InnerSingleton,
			StaticRegisterNativesACameraPawn,
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
	return Z_Registration_Info_UClass_ACameraPawn.InnerSingleton;
}
UClass* Z_Construct_UClass_ACameraPawn_NoRegister()
{
	return ACameraPawn::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACameraPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CameraPawn.h" },
		{ "ModuleRelativePath", "CameraPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[] = {
		{ "Category", "CameraPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CameraPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
		{ "Category", "CameraPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CameraPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "Category", "CameraPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CameraPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementComponent_MetaData[] = {
		{ "Category", "CameraPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CameraPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "CameraPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveInputAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "CameraPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotateInputAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "CameraPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoomInputAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "CameraPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "CameraPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotateSpeed_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "CameraPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoomSpeed_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "CameraPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoomMin_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "CameraPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoomMax_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "CameraPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionSmooth_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "CameraPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoomSmooth_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "CameraPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldBoundsMin_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "CameraPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldBoundsMax_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "CameraPawn.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ACameraPawn constinit property declarations ******************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveInputAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RotateInputAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ZoomInputAction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotateSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PositionSmooth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomSmooth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldBoundsMin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldBoundsMax;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ACameraPawn constinit property declarations ********************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACameraPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ACameraPawn_Statics

// ********** Begin Class ACameraPawn Property Definitions *****************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraPawn_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraPawn, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Root_MetaData), NewProp_Root_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraPawn_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraPawn, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArm_MetaData), NewProp_SpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraPawn_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraPawn, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraPawn_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraPawn, MovementComponent), Z_Construct_UClass_UFloatingPawnMovement_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementComponent_MetaData), NewProp_MovementComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraPawn_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraPawn, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraPawn_Statics::NewProp_MoveInputAction = { "MoveInputAction", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraPawn, MoveInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveInputAction_MetaData), NewProp_MoveInputAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraPawn_Statics::NewProp_RotateInputAction = { "RotateInputAction", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraPawn, RotateInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotateInputAction_MetaData), NewProp_RotateInputAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraPawn_Statics::NewProp_ZoomInputAction = { "ZoomInputAction", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraPawn, ZoomInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoomInputAction_MetaData), NewProp_ZoomInputAction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACameraPawn_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraPawn, MoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveSpeed_MetaData), NewProp_MoveSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACameraPawn_Statics::NewProp_RotateSpeed = { "RotateSpeed", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraPawn, RotateSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotateSpeed_MetaData), NewProp_RotateSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACameraPawn_Statics::NewProp_ZoomSpeed = { "ZoomSpeed", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraPawn, ZoomSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoomSpeed_MetaData), NewProp_ZoomSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACameraPawn_Statics::NewProp_ZoomMin = { "ZoomMin", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraPawn, ZoomMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoomMin_MetaData), NewProp_ZoomMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACameraPawn_Statics::NewProp_ZoomMax = { "ZoomMax", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraPawn, ZoomMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoomMax_MetaData), NewProp_ZoomMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACameraPawn_Statics::NewProp_PositionSmooth = { "PositionSmooth", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraPawn, PositionSmooth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionSmooth_MetaData), NewProp_PositionSmooth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACameraPawn_Statics::NewProp_ZoomSmooth = { "ZoomSmooth", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraPawn, ZoomSmooth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoomSmooth_MetaData), NewProp_ZoomSmooth_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACameraPawn_Statics::NewProp_WorldBoundsMin = { "WorldBoundsMin", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraPawn, WorldBoundsMin), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldBoundsMin_MetaData), NewProp_WorldBoundsMin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACameraPawn_Statics::NewProp_WorldBoundsMax = { "WorldBoundsMax", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraPawn, WorldBoundsMax), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldBoundsMax_MetaData), NewProp_WorldBoundsMax_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACameraPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawn_Statics::NewProp_Root,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawn_Statics::NewProp_SpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawn_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawn_Statics::NewProp_MovementComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawn_Statics::NewProp_InputMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawn_Statics::NewProp_MoveInputAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawn_Statics::NewProp_RotateInputAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawn_Statics::NewProp_ZoomInputAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawn_Statics::NewProp_MoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawn_Statics::NewProp_RotateSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawn_Statics::NewProp_ZoomSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawn_Statics::NewProp_ZoomMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawn_Statics::NewProp_ZoomMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawn_Statics::NewProp_PositionSmooth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawn_Statics::NewProp_ZoomSmooth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawn_Statics::NewProp_WorldBoundsMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraPawn_Statics::NewProp_WorldBoundsMax,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACameraPawn_Statics::PropPointers) < 2048);
// ********** End Class ACameraPawn Property Definitions *******************************************
UObject* (*const Z_Construct_UClass_ACameraPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_LMN,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACameraPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACameraPawn_Statics::ClassParams = {
	&ACameraPawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACameraPawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACameraPawn_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACameraPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_ACameraPawn_Statics::Class_MetaDataParams)
};
void ACameraPawn::StaticRegisterNativesACameraPawn()
{
}
UClass* Z_Construct_UClass_ACameraPawn()
{
	if (!Z_Registration_Info_UClass_ACameraPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACameraPawn.OuterSingleton, Z_Construct_UClass_ACameraPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACameraPawn.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ACameraPawn);
ACameraPawn::~ACameraPawn() {}
// ********** End Class ACameraPawn ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_CameraPawn_h__Script_LMN_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACameraPawn, ACameraPawn::StaticClass, TEXT("ACameraPawn"), &Z_Registration_Info_UClass_ACameraPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACameraPawn), 3627974370U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_CameraPawn_h__Script_LMN_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_CameraPawn_h__Script_LMN_3276613507{
	TEXT("/Script/LMN"),
	Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_CameraPawn_h__Script_LMN_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_CameraPawn_h__Script_LMN_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
