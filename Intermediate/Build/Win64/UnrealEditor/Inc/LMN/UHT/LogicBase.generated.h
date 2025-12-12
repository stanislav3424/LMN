// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LogicBase.h"

#ifdef LMN_LogicBase_generated_h
#error "LogicBase.generated.h already included, missing '#pragma once' in LogicBase.h"
#endif
#define LMN_LogicBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULogicBase ***************************************************************
struct Z_Construct_UClass_ULogicBase_Statics;
LMN_API UClass* Z_Construct_UClass_ULogicBase_NoRegister();

#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_LogicBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULogicBase(); \
	friend struct ::Z_Construct_UClass_ULogicBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LMN_API UClass* ::Z_Construct_UClass_ULogicBase_NoRegister(); \
public: \
	DECLARE_CLASS2(ULogicBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LMN"), Z_Construct_UClass_ULogicBase_NoRegister) \
	DECLARE_SERIALIZER(ULogicBase)


#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_LogicBase_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULogicBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULogicBase(ULogicBase&&) = delete; \
	ULogicBase(const ULogicBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULogicBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULogicBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULogicBase) \
	NO_API virtual ~ULogicBase();


#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_LogicBase_h_9_PROLOG
#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_LogicBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_LogicBase_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_LogicBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULogicBase;

// ********** End Class ULogicBase *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_LogicBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
