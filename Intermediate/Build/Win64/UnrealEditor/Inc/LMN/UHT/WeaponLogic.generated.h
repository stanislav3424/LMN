// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WeaponLogic.h"

#ifdef LMN_WeaponLogic_generated_h
#error "WeaponLogic.generated.h already included, missing '#pragma once' in WeaponLogic.h"
#endif
#define LMN_WeaponLogic_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWeaponLogic *************************************************************
struct Z_Construct_UClass_UWeaponLogic_Statics;
LMN_API UClass* Z_Construct_UClass_UWeaponLogic_NoRegister();

#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_WeaponLogic_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWeaponLogic(); \
	friend struct ::Z_Construct_UClass_UWeaponLogic_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LMN_API UClass* ::Z_Construct_UClass_UWeaponLogic_NoRegister(); \
public: \
	DECLARE_CLASS2(UWeaponLogic, UEquipmentLogic, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LMN"), Z_Construct_UClass_UWeaponLogic_NoRegister) \
	DECLARE_SERIALIZER(UWeaponLogic)


#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_WeaponLogic_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWeaponLogic(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWeaponLogic(UWeaponLogic&&) = delete; \
	UWeaponLogic(const UWeaponLogic&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeaponLogic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeaponLogic); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWeaponLogic) \
	NO_API virtual ~UWeaponLogic();


#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_WeaponLogic_h_12_PROLOG
#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_WeaponLogic_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_WeaponLogic_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_WeaponLogic_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWeaponLogic;

// ********** End Class UWeaponLogic ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_WeaponLogic_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
