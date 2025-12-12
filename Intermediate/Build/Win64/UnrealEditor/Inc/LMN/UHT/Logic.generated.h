// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Logic.h"

#ifdef LMN_Logic_generated_h
#error "Logic.generated.h already included, missing '#pragma once' in Logic.h"
#endif
#define LMN_Logic_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AController;
class UDamageType;

// ********** Begin Delegate FOnHealthChange *******************************************************
#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_Logic_h_9_DELEGATE \
LMN_API void FOnHealthChange_DelegateWrapper(const FMulticastScriptDelegate& OnHealthChange, float MaxHealth, float Current);


// ********** End Delegate FOnHealthChange *********************************************************

// ********** Begin Delegate FOnDied ***************************************************************
#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_Logic_h_10_DELEGATE \
LMN_API void FOnDied_DelegateWrapper(const FMulticastScriptDelegate& OnDied);


// ********** End Delegate FOnDied *****************************************************************

// ********** Begin Class ULogic *******************************************************************
#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_Logic_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleOwnerDamage);


struct Z_Construct_UClass_ULogic_Statics;
LMN_API UClass* Z_Construct_UClass_ULogic_NoRegister();

#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_Logic_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULogic(); \
	friend struct ::Z_Construct_UClass_ULogic_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LMN_API UClass* ::Z_Construct_UClass_ULogic_NoRegister(); \
public: \
	DECLARE_CLASS2(ULogic, ULogicBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LMN"), Z_Construct_UClass_ULogic_NoRegister) \
	DECLARE_SERIALIZER(ULogic)


#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_Logic_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULogic(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULogic(ULogic&&) = delete; \
	ULogic(const ULogic&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULogic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULogic); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULogic) \
	NO_API virtual ~ULogic();


#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_Logic_h_22_PROLOG
#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_Logic_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_Logic_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_Logic_h_25_INCLASS_NO_PURE_DECLS \
	FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_Logic_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULogic;

// ********** End Class ULogic *********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_Logic_h

// ********** Begin Enum ETeam *********************************************************************
#define FOREACH_ENUM_ETEAM(op) \
	op(ETeam::Neutral) \
	op(ETeam::Player) \
	op(ETeam::Enemy) 

enum class ETeam : uint8;
template<> struct TIsUEnumClass<ETeam> { enum { Value = true }; };
template<> LMN_NON_ATTRIBUTED_API UEnum* StaticEnum<ETeam>();
// ********** End Enum ETeam ***********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
