// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LogicInterface.h"

#ifdef LMN_LogicInterface_generated_h
#error "LogicInterface.generated.h already included, missing '#pragma once' in LogicInterface.h"
#endif
#define LMN_LogicInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULogicBase;

// ********** Begin Interface ULogicInterface ******************************************************
#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_LogicInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetLogic_Implementation(ULogicBase* NewLogic) {}; \
	virtual ULogicBase* GetLogic_Implementation() { return NULL; }; \
	DECLARE_FUNCTION(execSetLogic); \
	DECLARE_FUNCTION(execGetLogic);


#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_LogicInterface_h_14_CALLBACK_WRAPPERS
struct Z_Construct_UClass_ULogicInterface_Statics;
LMN_API UClass* Z_Construct_UClass_ULogicInterface_NoRegister();

#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_LogicInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LMN_API ULogicInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULogicInterface(ULogicInterface&&) = delete; \
	ULogicInterface(const ULogicInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LMN_API, ULogicInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULogicInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULogicInterface) \
	virtual ~ULogicInterface() = default;


#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_LogicInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesULogicInterface(); \
	friend struct ::Z_Construct_UClass_ULogicInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LMN_API UClass* ::Z_Construct_UClass_ULogicInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(ULogicInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/LMN"), Z_Construct_UClass_ULogicInterface_NoRegister) \
	DECLARE_SERIALIZER(ULogicInterface)


#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_LogicInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_LogicInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_LogicInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_LogicInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ILogicInterface() {} \
public: \
	typedef ULogicInterface UClassType; \
	typedef ILogicInterface ThisClass; \
	static ULogicBase* Execute_GetLogic(UObject* O); \
	static void Execute_SetLogic(UObject* O, ULogicBase* NewLogic); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_LogicInterface_h_11_PROLOG
#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_LogicInterface_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_LogicInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_LogicInterface_h_14_CALLBACK_WRAPPERS \
	FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_LogicInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULogicInterface;

// ********** End Interface ULogicInterface ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_LogicInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
