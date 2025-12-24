// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GM_Main.h"

#ifdef LMN_GM_Main_generated_h
#error "GM_Main.generated.h already included, missing '#pragma once' in GM_Main.h"
#endif
#define LMN_GM_Main_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FOnStartGame **********************************************************
#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_GM_Main_h_9_DELEGATE \
LMN_API void FOnStartGame_DelegateWrapper(const FMulticastScriptDelegate& OnStartGame);


// ********** End Delegate FOnStartGame ************************************************************

// ********** Begin Delegate FOnEndGame ************************************************************
#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_GM_Main_h_10_DELEGATE \
LMN_API void FOnEndGame_DelegateWrapper(const FMulticastScriptDelegate& OnEndGame);


// ********** End Delegate FOnEndGame **************************************************************

// ********** Begin Class AGM_Main *****************************************************************
struct Z_Construct_UClass_AGM_Main_Statics;
LMN_API UClass* Z_Construct_UClass_AGM_Main_NoRegister();

#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_GM_Main_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGM_Main(); \
	friend struct ::Z_Construct_UClass_AGM_Main_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LMN_API UClass* ::Z_Construct_UClass_AGM_Main_NoRegister(); \
public: \
	DECLARE_CLASS2(AGM_Main, AGameModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/LMN"), Z_Construct_UClass_AGM_Main_NoRegister) \
	DECLARE_SERIALIZER(AGM_Main)


#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_GM_Main_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGM_Main(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGM_Main(AGM_Main&&) = delete; \
	AGM_Main(const AGM_Main&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGM_Main); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGM_Main); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGM_Main) \
	NO_API virtual ~AGM_Main();


#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_GM_Main_h_15_PROLOG
#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_GM_Main_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_GM_Main_h_18_INCLASS_NO_PURE_DECLS \
	FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_GM_Main_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGM_Main;

// ********** End Class AGM_Main *******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_GM_Main_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
