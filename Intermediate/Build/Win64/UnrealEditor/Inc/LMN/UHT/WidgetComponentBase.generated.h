// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WidgetComponentBase.h"

#ifdef LMN_WidgetComponentBase_generated_h
#error "WidgetComponentBase.generated.h already included, missing '#pragma once' in WidgetComponentBase.h"
#endif
#define LMN_WidgetComponentBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWidgetComponentBase *****************************************************
struct Z_Construct_UClass_UWidgetComponentBase_Statics;
LMN_API UClass* Z_Construct_UClass_UWidgetComponentBase_NoRegister();

#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_WidgetComponentBase_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWidgetComponentBase(); \
	friend struct ::Z_Construct_UClass_UWidgetComponentBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LMN_API UClass* ::Z_Construct_UClass_UWidgetComponentBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UWidgetComponentBase, UWidgetComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LMN"), Z_Construct_UClass_UWidgetComponentBase_NoRegister) \
	DECLARE_SERIALIZER(UWidgetComponentBase) \
	virtual UObject* _getUObject() const override { return const_cast<UWidgetComponentBase*>(this); }


#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_WidgetComponentBase_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWidgetComponentBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWidgetComponentBase(UWidgetComponentBase&&) = delete; \
	UWidgetComponentBase(const UWidgetComponentBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidgetComponentBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetComponentBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetComponentBase) \
	NO_API virtual ~UWidgetComponentBase();


#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_WidgetComponentBase_h_10_PROLOG
#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_WidgetComponentBase_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_WidgetComponentBase_h_13_INCLASS_NO_PURE_DECLS \
	FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_WidgetComponentBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWidgetComponentBase;

// ********** End Class UWidgetComponentBase *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_WidgetComponentBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
