// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UW_ObjectListView.h"

#ifdef LMN_UW_ObjectListView_generated_h
#error "UW_ObjectListView.generated.h already included, missing '#pragma once' in UW_ObjectListView.h"
#endif
#define LMN_UW_ObjectListView_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUW_ObjectListView *******************************************************
struct Z_Construct_UClass_UUW_ObjectListView_Statics;
LMN_API UClass* Z_Construct_UClass_UUW_ObjectListView_NoRegister();

#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_UW_ObjectListView_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUW_ObjectListView(); \
	friend struct ::Z_Construct_UClass_UUW_ObjectListView_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LMN_API UClass* ::Z_Construct_UClass_UUW_ObjectListView_NoRegister(); \
public: \
	DECLARE_CLASS2(UUW_ObjectListView, UUW_Base, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/LMN"), Z_Construct_UClass_UUW_ObjectListView_NoRegister) \
	DECLARE_SERIALIZER(UUW_ObjectListView) \
	virtual UObject* _getUObject() const override { return const_cast<UUW_ObjectListView*>(this); }


#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_UW_ObjectListView_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUW_ObjectListView(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUW_ObjectListView(UUW_ObjectListView&&) = delete; \
	UUW_ObjectListView(const UUW_ObjectListView&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUW_ObjectListView); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUW_ObjectListView); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUW_ObjectListView) \
	NO_API virtual ~UUW_ObjectListView();


#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_UW_ObjectListView_h_15_PROLOG
#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_UW_ObjectListView_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_UW_ObjectListView_h_18_INCLASS_NO_PURE_DECLS \
	FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_UW_ObjectListView_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUW_ObjectListView;

// ********** End Class UUW_ObjectListView *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_UW_ObjectListView_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
