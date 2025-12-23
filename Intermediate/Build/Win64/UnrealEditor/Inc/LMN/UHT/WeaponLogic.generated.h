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

// ********** Begin Delegate FOnAmmoChanged ********************************************************
#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_WeaponLogic_h_9_DELEGATE \
LMN_API void FOnAmmoChanged_DelegateWrapper(const FMulticastScriptDelegate& OnAmmoChanged, int32 CurrentAmmo, int32 MaxAmmo);


// ********** End Delegate FOnAmmoChanged **********************************************************

// ********** Begin Delegate FOnAmmoEmpty **********************************************************
#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_WeaponLogic_h_10_DELEGATE \
LMN_API void FOnAmmoEmpty_DelegateWrapper(const FMulticastScriptDelegate& OnAmmoEmpty);


// ********** End Delegate FOnAmmoEmpty ************************************************************

// ********** Begin Class UWeaponLogic *************************************************************
struct Z_Construct_UClass_UWeaponLogic_Statics;
LMN_API UClass* Z_Construct_UClass_UWeaponLogic_NoRegister();

#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_WeaponLogic_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWeaponLogic(); \
	friend struct ::Z_Construct_UClass_UWeaponLogic_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LMN_API UClass* ::Z_Construct_UClass_UWeaponLogic_NoRegister(); \
public: \
	DECLARE_CLASS2(UWeaponLogic, UEquipmentLogic, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LMN"), Z_Construct_UClass_UWeaponLogic_NoRegister) \
	DECLARE_SERIALIZER(UWeaponLogic)


#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_WeaponLogic_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWeaponLogic(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWeaponLogic(UWeaponLogic&&) = delete; \
	UWeaponLogic(const UWeaponLogic&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeaponLogic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeaponLogic); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWeaponLogic) \
	NO_API virtual ~UWeaponLogic();


#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_WeaponLogic_h_32_PROLOG
#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_WeaponLogic_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_WeaponLogic_h_35_INCLASS_NO_PURE_DECLS \
	FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_WeaponLogic_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWeaponLogic;

// ********** End Class UWeaponLogic ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_WeaponLogic_h

// ********** Begin Enum EGanSlot ******************************************************************
#define FOREACH_ENUM_EGANSLOT(op) \
	op(EGanSlot::Muzzle) 

enum class EGanSlot : uint8;
template<> struct TIsUEnumClass<EGanSlot> { enum { Value = true }; };
template<> LMN_NON_ATTRIBUTED_API UEnum* StaticEnum<EGanSlot>();
// ********** End Enum EGanSlot ********************************************************************

// ********** Begin Enum EWeaponState **************************************************************
#define FOREACH_ENUM_EWEAPONSTATE(op) \
	op(EWeaponState::Idle) \
	op(EWeaponState::Shooting) \
	op(EWeaponState::Reloading) 

enum class EWeaponState : uint8;
template<> struct TIsUEnumClass<EWeaponState> { enum { Value = true }; };
template<> LMN_NON_ATTRIBUTED_API UEnum* StaticEnum<EWeaponState>();
// ********** End Enum EWeaponState ****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
