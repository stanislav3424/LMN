// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PC_Main.h"

#ifdef LMN_PC_Main_generated_h
#error "PC_Main.generated.h already included, missing '#pragma once' in PC_Main.h"
#endif
#define LMN_PC_Main_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FOnActorsSelectedChange ***********************************************
#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_PC_Main_h_9_DELEGATE \
LMN_API void FOnActorsSelectedChange_DelegateWrapper(const FMulticastScriptDelegate& OnActorsSelectedChange);


// ********** End Delegate FOnActorsSelectedChange *************************************************

// ********** Begin Class APC_Main *****************************************************************
struct Z_Construct_UClass_APC_Main_Statics;
LMN_API UClass* Z_Construct_UClass_APC_Main_NoRegister();

#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_PC_Main_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPC_Main(); \
	friend struct ::Z_Construct_UClass_APC_Main_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LMN_API UClass* ::Z_Construct_UClass_APC_Main_NoRegister(); \
public: \
	DECLARE_CLASS2(APC_Main, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LMN"), Z_Construct_UClass_APC_Main_NoRegister) \
	DECLARE_SERIALIZER(APC_Main)


#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_PC_Main_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	APC_Main(APC_Main&&) = delete; \
	APC_Main(const APC_Main&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APC_Main); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APC_Main); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APC_Main) \
	NO_API virtual ~APC_Main();


#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_PC_Main_h_17_PROLOG
#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_PC_Main_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_PC_Main_h_20_INCLASS_NO_PURE_DECLS \
	FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_PC_Main_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APC_Main;

// ********** End Class APC_Main *******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_PC_Main_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
