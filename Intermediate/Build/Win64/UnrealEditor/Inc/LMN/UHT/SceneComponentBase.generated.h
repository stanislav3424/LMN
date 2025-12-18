// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SceneComponentBase.h"

#ifdef LMN_SceneComponentBase_generated_h
#error "SceneComponentBase.generated.h already included, missing '#pragma once' in SceneComponentBase.h"
#endif
#define LMN_SceneComponentBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USceneComponentBase ******************************************************
struct Z_Construct_UClass_USceneComponentBase_Statics;
LMN_API UClass* Z_Construct_UClass_USceneComponentBase_NoRegister();

#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_SceneComponentBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSceneComponentBase(); \
	friend struct ::Z_Construct_UClass_USceneComponentBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LMN_API UClass* ::Z_Construct_UClass_USceneComponentBase_NoRegister(); \
public: \
	DECLARE_CLASS2(USceneComponentBase, USceneComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/LMN"), Z_Construct_UClass_USceneComponentBase_NoRegister) \
	DECLARE_SERIALIZER(USceneComponentBase) \
	virtual UObject* _getUObject() const override { return const_cast<USceneComponentBase*>(this); }


#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_SceneComponentBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USceneComponentBase(USceneComponentBase&&) = delete; \
	USceneComponentBase(const USceneComponentBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USceneComponentBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USceneComponentBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(USceneComponentBase) \
	NO_API virtual ~USceneComponentBase();


#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_SceneComponentBase_h_12_PROLOG
#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_SceneComponentBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_SceneComponentBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_SceneComponentBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USceneComponentBase;

// ********** End Class USceneComponentBase ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_SceneComponentBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
