// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BFL.h"

#ifdef LMN_BFL_generated_h
#error "BFL.generated.h already included, missing '#pragma once' in BFL.h"
#endif
#define LMN_BFL_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ULogicBase;
class UWorld;
struct FDataTableRowHandle;

// ********** Begin Class UBFL *********************************************************************
#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_BFL_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateLogicByRowHandle); \
	DECLARE_FUNCTION(execCreateLogicByRowName); \
	DECLARE_FUNCTION(execGetLogic);


struct Z_Construct_UClass_UBFL_Statics;
LMN_API UClass* Z_Construct_UClass_UBFL_NoRegister();

#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_BFL_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBFL(); \
	friend struct ::Z_Construct_UClass_UBFL_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LMN_API UClass* ::Z_Construct_UClass_UBFL_NoRegister(); \
public: \
	DECLARE_CLASS2(UBFL, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LMN"), Z_Construct_UClass_UBFL_NoRegister) \
	DECLARE_SERIALIZER(UBFL)


#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_BFL_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBFL(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBFL(UBFL&&) = delete; \
	UBFL(const UBFL&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBFL); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBFL); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBFL) \
	NO_API virtual ~UBFL();


#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_BFL_h_24_PROLOG
#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_BFL_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_BFL_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_BFL_h_27_INCLASS_NO_PURE_DECLS \
	FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_BFL_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBFL;

// ********** End Class UBFL ***********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_BFL_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
