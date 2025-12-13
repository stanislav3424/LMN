// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HUD_Main.h"

#ifdef LMN_HUD_Main_generated_h
#error "HUD_Main.generated.h already included, missing '#pragma once' in HUD_Main.h"
#endif
#define LMN_HUD_Main_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AHUD_Main ****************************************************************
struct Z_Construct_UClass_AHUD_Main_Statics;
LMN_API UClass* Z_Construct_UClass_AHUD_Main_NoRegister();

#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_HUD_Main_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHUD_Main(); \
	friend struct ::Z_Construct_UClass_AHUD_Main_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LMN_API UClass* ::Z_Construct_UClass_AHUD_Main_NoRegister(); \
public: \
	DECLARE_CLASS2(AHUD_Main, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/LMN"), Z_Construct_UClass_AHUD_Main_NoRegister) \
	DECLARE_SERIALIZER(AHUD_Main)


#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_HUD_Main_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHUD_Main(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AHUD_Main(AHUD_Main&&) = delete; \
	AHUD_Main(const AHUD_Main&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHUD_Main); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHUD_Main); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHUD_Main) \
	NO_API virtual ~AHUD_Main();


#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_HUD_Main_h_11_PROLOG
#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_HUD_Main_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_HUD_Main_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_HUD_Main_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AHUD_Main;

// ********** End Class AHUD_Main ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_HUD_Main_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
