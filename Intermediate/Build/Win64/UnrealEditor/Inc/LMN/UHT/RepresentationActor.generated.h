// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RepresentationActor.h"

#ifdef LMN_RepresentationActor_generated_h
#error "RepresentationActor.generated.h already included, missing '#pragma once' in RepresentationActor.h"
#endif
#define LMN_RepresentationActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ARepresentationActor *****************************************************
struct Z_Construct_UClass_ARepresentationActor_Statics;
LMN_API UClass* Z_Construct_UClass_ARepresentationActor_NoRegister();

#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_RepresentationActor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARepresentationActor(); \
	friend struct ::Z_Construct_UClass_ARepresentationActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LMN_API UClass* ::Z_Construct_UClass_ARepresentationActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ARepresentationActor, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/LMN"), Z_Construct_UClass_ARepresentationActor_NoRegister) \
	DECLARE_SERIALIZER(ARepresentationActor) \
	virtual UObject* _getUObject() const override { return const_cast<ARepresentationActor*>(this); }


#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_RepresentationActor_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARepresentationActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ARepresentationActor(ARepresentationActor&&) = delete; \
	ARepresentationActor(const ARepresentationActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARepresentationActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARepresentationActor); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARepresentationActor) \
	NO_API virtual ~ARepresentationActor();


#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_RepresentationActor_h_10_PROLOG
#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_RepresentationActor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_RepresentationActor_h_13_INCLASS_NO_PURE_DECLS \
	FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_RepresentationActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ARepresentationActor;

// ********** End Class ARepresentationActor *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_RepresentationActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
