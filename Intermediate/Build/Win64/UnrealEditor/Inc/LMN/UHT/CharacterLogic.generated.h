// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CharacterLogic.h"

#ifdef LMN_CharacterLogic_generated_h
#error "CharacterLogic.generated.h already included, missing '#pragma once' in CharacterLogic.h"
#endif
#define LMN_CharacterLogic_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EMovementState : uint8;
enum class ETypeAction : uint8;
enum class ETypeMovementState : uint8;

// ********** Begin Delegate FOnStaminaChanged *****************************************************
#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_CharacterLogic_h_41_DELEGATE \
LMN_API void FOnStaminaChanged_DelegateWrapper(const FMulticastScriptDelegate& OnStaminaChanged, float CurrentStamina, float MaxStamina);


// ********** End Delegate FOnStaminaChanged *******************************************************

// ********** Begin Delegate FOnMovementStateChanged ***********************************************
#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_CharacterLogic_h_42_DELEGATE \
LMN_API void FOnMovementStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnMovementStateChanged, EMovementState MovementState);


// ********** End Delegate FOnMovementStateChanged *************************************************

// ********** Begin Delegate FOnTypeMovementStateChanged *******************************************
#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_CharacterLogic_h_43_DELEGATE \
LMN_API void FOnTypeMovementStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnTypeMovementStateChanged, ETypeMovementState TypeMovementState);


// ********** End Delegate FOnTypeMovementStateChanged *********************************************

// ********** Begin Delegate FOnTypeActionChanged **************************************************
#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_CharacterLogic_h_44_DELEGATE \
LMN_API void FOnTypeActionChanged_DelegateWrapper(const FMulticastScriptDelegate& OnTypeActionChanged, ETypeAction TypeAction);


// ********** End Delegate FOnTypeActionChanged ****************************************************

// ********** Begin Delegate FOnEquipmentChanged ***************************************************
#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_CharacterLogic_h_45_DELEGATE \
LMN_API void FOnEquipmentChanged_DelegateWrapper(const FMulticastScriptDelegate& OnEquipmentChanged);


// ********** End Delegate FOnEquipmentChanged *****************************************************

// ********** Begin Class UCharacterLogic **********************************************************
struct Z_Construct_UClass_UCharacterLogic_Statics;
LMN_API UClass* Z_Construct_UClass_UCharacterLogic_NoRegister();

#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_CharacterLogic_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCharacterLogic(); \
	friend struct ::Z_Construct_UClass_UCharacterLogic_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LMN_API UClass* ::Z_Construct_UClass_UCharacterLogic_NoRegister(); \
public: \
	DECLARE_CLASS2(UCharacterLogic, ULogic, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LMN"), Z_Construct_UClass_UCharacterLogic_NoRegister) \
	DECLARE_SERIALIZER(UCharacterLogic)


#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_CharacterLogic_h_53_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCharacterLogic(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCharacterLogic(UCharacterLogic&&) = delete; \
	UCharacterLogic(const UCharacterLogic&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterLogic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterLogic); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharacterLogic) \
	NO_API virtual ~UCharacterLogic();


#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_CharacterLogic_h_50_PROLOG
#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_CharacterLogic_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_CharacterLogic_h_53_INCLASS_NO_PURE_DECLS \
	FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_CharacterLogic_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCharacterLogic;

// ********** End Class UCharacterLogic ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_CharacterLogic_h

// ********** Begin Enum EMovementState ************************************************************
#define FOREACH_ENUM_EMOVEMENTSTATE(op) \
	op(EMovementState::Idle) \
	op(EMovementState::Walk) \
	op(EMovementState::Run) 

enum class EMovementState : uint8;
template<> struct TIsUEnumClass<EMovementState> { enum { Value = true }; };
template<> LMN_NON_ATTRIBUTED_API UEnum* StaticEnum<EMovementState>();
// ********** End Enum EMovementState **************************************************************

// ********** Begin Enum ETypeMovementState ********************************************************
#define FOREACH_ENUM_ETYPEMOVEMENTSTATE(op) \
	op(ETypeMovementState::Unarmed) \
	op(ETypeMovementState::Rifle) 

enum class ETypeMovementState : uint8;
template<> struct TIsUEnumClass<ETypeMovementState> { enum { Value = true }; };
template<> LMN_NON_ATTRIBUTED_API UEnum* StaticEnum<ETypeMovementState>();
// ********** End Enum ETypeMovementState **********************************************************

// ********** Begin Enum ETypeAction ***************************************************************
#define FOREACH_ENUM_ETYPEACTION(op) \
	op(ETypeAction::Idle) \
	op(ETypeAction::Shooting) \
	op(ETypeAction::Reloading) \
	op(ETypeAction::Interaction) \
	op(ETypeAction::Equipment) 

enum class ETypeAction : uint8;
template<> struct TIsUEnumClass<ETypeAction> { enum { Value = true }; };
template<> LMN_NON_ATTRIBUTED_API UEnum* StaticEnum<ETypeAction>();
// ********** End Enum ETypeAction *****************************************************************

// ********** Begin Enum EEquipmentSlot ************************************************************
#define FOREACH_ENUM_EEQUIPMENTSLOT(op) \
	op(EEquipmentSlot::Hands) \
	op(EEquipmentSlot::Backpack) 

enum class EEquipmentSlot : uint8;
template<> struct TIsUEnumClass<EEquipmentSlot> { enum { Value = true }; };
template<> LMN_NON_ATTRIBUTED_API UEnum* StaticEnum<EEquipmentSlot>();
// ********** End Enum EEquipmentSlot **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
