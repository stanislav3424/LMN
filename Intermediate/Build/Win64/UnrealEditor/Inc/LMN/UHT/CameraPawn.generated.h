// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CameraPawn.h"

#ifdef LMN_CameraPawn_generated_h
#error "CameraPawn.generated.h already included, missing '#pragma once' in CameraPawn.h"
#endif
#define LMN_CameraPawn_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACameraPawn **************************************************************
struct Z_Construct_UClass_ACameraPawn_Statics;
LMN_API UClass* Z_Construct_UClass_ACameraPawn_NoRegister();

#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_CameraPawn_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACameraPawn(); \
	friend struct ::Z_Construct_UClass_ACameraPawn_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LMN_API UClass* ::Z_Construct_UClass_ACameraPawn_NoRegister(); \
public: \
	DECLARE_CLASS2(ACameraPawn, APawn, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/LMN"), Z_Construct_UClass_ACameraPawn_NoRegister) \
	DECLARE_SERIALIZER(ACameraPawn)


#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_CameraPawn_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACameraPawn(ACameraPawn&&) = delete; \
	ACameraPawn(const ACameraPawn&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACameraPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACameraPawn); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ACameraPawn) \
	NO_API virtual ~ACameraPawn();


#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_CameraPawn_h_17_PROLOG
#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_CameraPawn_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_CameraPawn_h_20_INCLASS_NO_PURE_DECLS \
	FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_CameraPawn_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACameraPawn;

// ********** End Class ACameraPawn ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_CameraPawn_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
