// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LMN/LogicInterface.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeLogicInterface() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
LMN_API UClass* Z_Construct_UClass_ULogicBase_NoRegister();
LMN_API UClass* Z_Construct_UClass_ULogicInterface();
LMN_API UClass* Z_Construct_UClass_ULogicInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_LMN();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface ULogicInterface Function GetLogic ************************************
struct LogicInterface_eventGetLogic_Parms
{
	ULogicBase* ReturnValue;

	/** Constructor, initializes return property only **/
	LogicInterface_eventGetLogic_Parms()
		: ReturnValue(NULL)
	{
	}
};
ULogicBase* ILogicInterface::GetLogic()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetLogic instead.");
	LogicInterface_eventGetLogic_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_ULogicInterface_GetLogic = FName(TEXT("GetLogic"));
ULogicBase* ILogicInterface::Execute_GetLogic(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(ULogicInterface::StaticClass()));
	LogicInterface_eventGetLogic_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_ULogicInterface_GetLogic);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ILogicInterface*)(O->GetNativeInterfaceAddress(ULogicInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetLogic_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_ULogicInterface_GetLogic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Logic" },
		{ "ModuleRelativePath", "LogicInterface.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetLogic constinit property declarations ******************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLogic constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLogic Property Definitions *****************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULogicInterface_GetLogic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogicInterface_eventGetLogic_Parms, ReturnValue), Z_Construct_UClass_ULogicBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogicInterface_GetLogic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogicInterface_GetLogic_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogicInterface_GetLogic_Statics::PropPointers) < 2048);
// ********** End Function GetLogic Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogicInterface_GetLogic_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULogicInterface, nullptr, "GetLogic", 	Z_Construct_UFunction_ULogicInterface_GetLogic_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULogicInterface_GetLogic_Statics::PropPointers), 
sizeof(LogicInterface_eventGetLogic_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogicInterface_GetLogic_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULogicInterface_GetLogic_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(LogicInterface_eventGetLogic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULogicInterface_GetLogic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULogicInterface_GetLogic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ILogicInterface::execGetLogic)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULogicBase**)Z_Param__Result=P_THIS->GetLogic_Implementation();
	P_NATIVE_END;
}
// ********** End Interface ULogicInterface Function GetLogic **************************************

// ********** Begin Interface ULogicInterface Function SetLogic ************************************
struct LogicInterface_eventSetLogic_Parms
{
	ULogicBase* NewLogic;
};
void ILogicInterface::SetLogic(ULogicBase* NewLogic)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetLogic instead.");
}
static FName NAME_ULogicInterface_SetLogic = FName(TEXT("SetLogic"));
void ILogicInterface::Execute_SetLogic(UObject* O, ULogicBase* NewLogic)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(ULogicInterface::StaticClass()));
	LogicInterface_eventSetLogic_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_ULogicInterface_SetLogic);
	if (Func)
	{
		Parms.NewLogic=std::move(NewLogic);
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ILogicInterface*)(O->GetNativeInterfaceAddress(ULogicInterface::StaticClass())))
	{
		I->SetLogic_Implementation(NewLogic);
	}
}
struct Z_Construct_UFunction_ULogicInterface_SetLogic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Logic" },
		{ "ModuleRelativePath", "LogicInterface.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetLogic constinit property declarations ******************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewLogic;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetLogic constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetLogic Property Definitions *****************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULogicInterface_SetLogic_Statics::NewProp_NewLogic = { "NewLogic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogicInterface_eventSetLogic_Parms, NewLogic), Z_Construct_UClass_ULogicBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogicInterface_SetLogic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogicInterface_SetLogic_Statics::NewProp_NewLogic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogicInterface_SetLogic_Statics::PropPointers) < 2048);
// ********** End Function SetLogic Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogicInterface_SetLogic_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULogicInterface, nullptr, "SetLogic", 	Z_Construct_UFunction_ULogicInterface_SetLogic_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULogicInterface_SetLogic_Statics::PropPointers), 
sizeof(LogicInterface_eventSetLogic_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogicInterface_SetLogic_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULogicInterface_SetLogic_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(LogicInterface_eventSetLogic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULogicInterface_SetLogic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULogicInterface_SetLogic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ILogicInterface::execSetLogic)
{
	P_GET_OBJECT(ULogicBase,Z_Param_NewLogic);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLogic_Implementation(Z_Param_NewLogic);
	P_NATIVE_END;
}
// ********** End Interface ULogicInterface Function SetLogic **************************************

// ********** Begin Interface ULogicInterface ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ULogicInterface;
UClass* ULogicInterface::GetPrivateStaticClass()
{
	using TClass = ULogicInterface;
	if (!Z_Registration_Info_UClass_ULogicInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("LogicInterface"),
			Z_Registration_Info_UClass_ULogicInterface.InnerSingleton,
			StaticRegisterNativesULogicInterface,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ULogicInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_ULogicInterface_NoRegister()
{
	return ULogicInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ULogicInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "LogicInterface.h" },
	};
#endif // WITH_METADATA

// ********** Begin Interface ULogicInterface constinit property declarations **********************
// ********** End Interface ULogicInterface constinit property declarations ************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetLogic"), .Pointer = &ILogicInterface::execGetLogic },
		{ .NameUTF8 = UTF8TEXT("SetLogic"), .Pointer = &ILogicInterface::execSetLogic },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULogicInterface_GetLogic, "GetLogic" }, // 3667431790
		{ &Z_Construct_UFunction_ULogicInterface_SetLogic, "SetLogic" }, // 1646204112
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ILogicInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ULogicInterface_Statics
UObject* (*const Z_Construct_UClass_ULogicInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_LMN,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULogicInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULogicInterface_Statics::ClassParams = {
	&ULogicInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULogicInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_ULogicInterface_Statics::Class_MetaDataParams)
};
void ULogicInterface::StaticRegisterNativesULogicInterface()
{
	UClass* Class = ULogicInterface::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_ULogicInterface_Statics::Funcs));
}
UClass* Z_Construct_UClass_ULogicInterface()
{
	if (!Z_Registration_Info_UClass_ULogicInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULogicInterface.OuterSingleton, Z_Construct_UClass_ULogicInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULogicInterface.OuterSingleton;
}
ULogicInterface::ULogicInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ULogicInterface);
// ********** End Interface ULogicInterface ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_LogicInterface_h__Script_LMN_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULogicInterface, ULogicInterface::StaticClass, TEXT("ULogicInterface"), &Z_Registration_Info_UClass_ULogicInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULogicInterface), 949278339U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_LogicInterface_h__Script_LMN_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_LogicInterface_h__Script_LMN_584817334{
	TEXT("/Script/LMN"),
	Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_LogicInterface_h__Script_LMN_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stanislav_Documents_Unreal_Projects_LMN_Source_LMN_LogicInterface_h__Script_LMN_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
