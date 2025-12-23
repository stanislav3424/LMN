// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GI_Main.h"

#ifdef LMN_GI_Main_generated_h
#error "GI_Main.generated.h already included, missing '#pragma once' in GI_Main.h"
#endif
#define LMN_GI_Main_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FLogicBaseRow *****************************************************
struct Z_Construct_UScriptStruct_FLogicBaseRow_Statics;
#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_GI_Main_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLogicBaseRow_Statics; \
	LMN_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FLogicBaseRow;
// ********** End ScriptStruct FLogicBaseRow *******************************************************

// ********** Begin ScriptStruct FLogicRow *********************************************************
struct Z_Construct_UScriptStruct_FLogicRow_Statics;
#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_GI_Main_h_26_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLogicRow_Statics; \
	LMN_API static class UScriptStruct* StaticStruct(); \
	typedef FLogicBaseRow Super;


struct FLogicRow;
// ********** End ScriptStruct FLogicRow ***********************************************************

// ********** Begin ScriptStruct FCharacterLogicRow ************************************************
struct Z_Construct_UScriptStruct_FCharacterLogicRow_Statics;
#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_GI_Main_h_38_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCharacterLogicRow_Statics; \
	LMN_API static class UScriptStruct* StaticStruct(); \
	typedef FLogicRow Super;


struct FCharacterLogicRow;
// ********** End ScriptStruct FCharacterLogicRow **************************************************

// ********** Begin ScriptStruct FEquipmentRow *****************************************************
struct Z_Construct_UScriptStruct_FEquipmentRow_Statics;
#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_GI_Main_h_62_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FEquipmentRow_Statics; \
	LMN_API static class UScriptStruct* StaticStruct(); \
	typedef FLogicRow Super;


struct FEquipmentRow;
// ********** End ScriptStruct FEquipmentRow *******************************************************

// ********** Begin ScriptStruct FWeaponRow ********************************************************
struct Z_Construct_UScriptStruct_FWeaponRow_Statics;
#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_GI_Main_h_71_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FWeaponRow_Statics; \
	LMN_API static class UScriptStruct* StaticStruct(); \
	typedef FEquipmentRow Super;


struct FWeaponRow;
// ********** End ScriptStruct FWeaponRow **********************************************************

// ********** Begin Class UGI_Main *****************************************************************
struct Z_Construct_UClass_UGI_Main_Statics;
LMN_API UClass* Z_Construct_UClass_UGI_Main_NoRegister();

#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_GI_Main_h_92_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGI_Main(); \
	friend struct ::Z_Construct_UClass_UGI_Main_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LMN_API UClass* ::Z_Construct_UClass_UGI_Main_NoRegister(); \
public: \
	DECLARE_CLASS2(UGI_Main, UGameInstance, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/LMN"), Z_Construct_UClass_UGI_Main_NoRegister) \
	DECLARE_SERIALIZER(UGI_Main)


#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_GI_Main_h_92_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGI_Main(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGI_Main(UGI_Main&&) = delete; \
	UGI_Main(const UGI_Main&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGI_Main); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGI_Main); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGI_Main) \
	NO_API virtual ~UGI_Main();


#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_GI_Main_h_89_PROLOG
#define FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_GI_Main_h_92_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_GI_Main_h_92_INCLASS_NO_PURE_DECLS \
	FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_GI_Main_h_92_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGI_Main;

// ********** End Class UGI_Main *******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_GI_Main_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
