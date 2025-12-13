// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UW_Base.h"

#ifdef LMN_UW_Base_generated_h
#error "UW_Base.generated.h already included, missing '#pragma once' in UW_Base.h"
#endif
#define LMN_UW_Base_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUW_Base *****************************************************************
struct Z_Construct_UClass_UUW_Base_Statics;
LMN_API UClass* Z_Construct_UClass_UUW_Base_NoRegister();

#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_UW_Base_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUW_Base(); \
	friend struct ::Z_Construct_UClass_UUW_Base_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LMN_API UClass* ::Z_Construct_UClass_UUW_Base_NoRegister(); \
public: \
	DECLARE_CLASS2(UUW_Base, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/LMN"), Z_Construct_UClass_UUW_Base_NoRegister) \
	DECLARE_SERIALIZER(UUW_Base)


#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_UW_Base_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUW_Base(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUW_Base(UUW_Base&&) = delete; \
	UUW_Base(const UUW_Base&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUW_Base); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUW_Base); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUW_Base) \
	NO_API virtual ~UUW_Base();


#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_UW_Base_h_9_PROLOG
#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_UW_Base_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_UW_Base_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_UW_Base_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUW_Base;

// ********** End Class UUW_Base *******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_UW_Base_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
