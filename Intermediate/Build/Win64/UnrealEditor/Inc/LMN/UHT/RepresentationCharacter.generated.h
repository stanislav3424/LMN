// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RepresentationCharacter.h"

#ifdef LMN_RepresentationCharacter_generated_h
#error "RepresentationCharacter.generated.h already included, missing '#pragma once' in RepresentationCharacter.h"
#endif
#define LMN_RepresentationCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ARepresentationCharacter *************************************************
struct Z_Construct_UClass_ARepresentationCharacter_Statics;
LMN_API UClass* Z_Construct_UClass_ARepresentationCharacter_NoRegister();

#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_RepresentationCharacter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARepresentationCharacter(); \
	friend struct ::Z_Construct_UClass_ARepresentationCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LMN_API UClass* ::Z_Construct_UClass_ARepresentationCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(ARepresentationCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LMN"), Z_Construct_UClass_ARepresentationCharacter_NoRegister) \
	DECLARE_SERIALIZER(ARepresentationCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ARepresentationCharacter*>(this); }


#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_RepresentationCharacter_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARepresentationCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ARepresentationCharacter(ARepresentationCharacter&&) = delete; \
	ARepresentationCharacter(const ARepresentationCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARepresentationCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARepresentationCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARepresentationCharacter) \
	NO_API virtual ~ARepresentationCharacter();


#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_RepresentationCharacter_h_10_PROLOG
#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_RepresentationCharacter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_RepresentationCharacter_h_13_INCLASS_NO_PURE_DECLS \
	FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_RepresentationCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ARepresentationCharacter;

// ********** End Class ARepresentationCharacter ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_RepresentationCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
