// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UW_HUD.h"

#ifdef LMN_UW_HUD_generated_h
#error "UW_HUD.generated.h already included, missing '#pragma once' in UW_HUD.h"
#endif
#define LMN_UW_HUD_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUW_HUD ******************************************************************
#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_UW_HUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateListView);


struct Z_Construct_UClass_UUW_HUD_Statics;
LMN_API UClass* Z_Construct_UClass_UUW_HUD_NoRegister();

#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_UW_HUD_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUW_HUD(); \
	friend struct ::Z_Construct_UClass_UUW_HUD_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LMN_API UClass* ::Z_Construct_UClass_UUW_HUD_NoRegister(); \
public: \
	DECLARE_CLASS2(UUW_HUD, UUW_Base, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/LMN"), Z_Construct_UClass_UUW_HUD_NoRegister) \
	DECLARE_SERIALIZER(UUW_HUD)


#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_UW_HUD_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUW_HUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUW_HUD(UUW_HUD&&) = delete; \
	UUW_HUD(const UUW_HUD&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUW_HUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUW_HUD); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUW_HUD) \
	NO_API virtual ~UUW_HUD();


#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_UW_HUD_h_12_PROLOG
#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_UW_HUD_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_UW_HUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_UW_HUD_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_UW_HUD_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUW_HUD;

// ********** End Class UUW_HUD ********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_UW_HUD_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
