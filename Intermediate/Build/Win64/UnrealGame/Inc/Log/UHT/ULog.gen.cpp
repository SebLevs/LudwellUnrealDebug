// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Log/Public/ULog.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeULog() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	LOG_API UClass* Z_Construct_UClass_ULog();
	LOG_API UClass* Z_Construct_UClass_ULog_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Log();
// End Cross Module References
	DEFINE_FUNCTION(ULog::execScreenError)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_GET_PROPERTY(FIntProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULog::ScreenError(Z_Param_Message,Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execScreenWarning)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_GET_PROPERTY(FIntProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULog::ScreenWarning(Z_Param_Message,Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execScreenDisplay)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_GET_PROPERTY(FIntProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULog::ScreenDisplay(Z_Param_Message,Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execConsoleError)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULog::ConsoleError(Z_Param_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execConsoleWarning)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULog::ConsoleWarning(Z_Param_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execConsoleDisplay)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULog::ConsoleDisplay(Z_Param_Message);
		P_NATIVE_END;
	}
	void ULog::StaticRegisterNativesULog()
	{
		UClass* Class = ULog::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConsoleDisplay", &ULog::execConsoleDisplay },
			{ "ConsoleError", &ULog::execConsoleError },
			{ "ConsoleWarning", &ULog::execConsoleWarning },
			{ "ScreenDisplay", &ULog::execScreenDisplay },
			{ "ScreenError", &ULog::execScreenError },
			{ "ScreenWarning", &ULog::execScreenWarning },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULog_ConsoleDisplay_Statics
	{
		struct Log_eventConsoleDisplay_Parms
		{
			FString Message;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_ConsoleDisplay_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_ConsoleDisplay_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Log_eventConsoleDisplay_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_ULog_ConsoleDisplay_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_ConsoleDisplay_Statics::NewProp_Message_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_ConsoleDisplay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_ConsoleDisplay_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_ConsoleDisplay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ludwell/Debug/Log" },
		{ "ModuleRelativePath", "Public/ULog.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_ConsoleDisplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "ConsoleDisplay", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULog_ConsoleDisplay_Statics::Log_eventConsoleDisplay_Parms), Z_Construct_UFunction_ULog_ConsoleDisplay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_ConsoleDisplay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_ConsoleDisplay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_ConsoleDisplay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_ConsoleDisplay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULog_ConsoleDisplay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_ConsoleError_Statics
	{
		struct Log_eventConsoleError_Parms
		{
			FString Message;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_ConsoleError_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_ConsoleError_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Log_eventConsoleError_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_ULog_ConsoleError_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_ConsoleError_Statics::NewProp_Message_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_ConsoleError_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_ConsoleError_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_ConsoleError_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ludwell/Debug/Log" },
		{ "ModuleRelativePath", "Public/ULog.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_ConsoleError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "ConsoleError", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULog_ConsoleError_Statics::Log_eventConsoleError_Parms), Z_Construct_UFunction_ULog_ConsoleError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_ConsoleError_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_ConsoleError_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_ConsoleError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_ConsoleError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULog_ConsoleError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_ConsoleWarning_Statics
	{
		struct Log_eventConsoleWarning_Parms
		{
			FString Message;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_ConsoleWarning_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_ConsoleWarning_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Log_eventConsoleWarning_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_ULog_ConsoleWarning_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_ConsoleWarning_Statics::NewProp_Message_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_ConsoleWarning_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_ConsoleWarning_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_ConsoleWarning_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ludwell/Debug/Log" },
		{ "ModuleRelativePath", "Public/ULog.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_ConsoleWarning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "ConsoleWarning", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULog_ConsoleWarning_Statics::Log_eventConsoleWarning_Parms), Z_Construct_UFunction_ULog_ConsoleWarning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_ConsoleWarning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_ConsoleWarning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_ConsoleWarning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_ConsoleWarning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULog_ConsoleWarning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_ScreenDisplay_Statics
	{
		struct Log_eventScreenDisplay_Parms
		{
			FString Message;
			int32 Key;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Key;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_ScreenDisplay_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_ScreenDisplay_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Log_eventScreenDisplay_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_ULog_ScreenDisplay_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_ScreenDisplay_Statics::NewProp_Message_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_ScreenDisplay_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULog_ScreenDisplay_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Log_eventScreenDisplay_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_ULog_ScreenDisplay_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_ScreenDisplay_Statics::NewProp_Key_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_ScreenDisplay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_ScreenDisplay_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_ScreenDisplay_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_ScreenDisplay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ludwell/Debug/Log" },
		{ "CPP_Default_Key", "-1" },
		{ "ModuleRelativePath", "Public/ULog.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_ScreenDisplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "ScreenDisplay", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULog_ScreenDisplay_Statics::Log_eventScreenDisplay_Parms), Z_Construct_UFunction_ULog_ScreenDisplay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_ScreenDisplay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_ScreenDisplay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_ScreenDisplay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_ScreenDisplay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULog_ScreenDisplay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_ScreenError_Statics
	{
		struct Log_eventScreenError_Parms
		{
			FString Message;
			int32 Key;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Key;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_ScreenError_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_ScreenError_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Log_eventScreenError_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_ULog_ScreenError_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_ScreenError_Statics::NewProp_Message_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_ScreenError_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULog_ScreenError_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Log_eventScreenError_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_ULog_ScreenError_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_ScreenError_Statics::NewProp_Key_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_ScreenError_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_ScreenError_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_ScreenError_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_ScreenError_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ludwell/Debug/Log" },
		{ "CPP_Default_Key", "-1" },
		{ "ModuleRelativePath", "Public/ULog.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_ScreenError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "ScreenError", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULog_ScreenError_Statics::Log_eventScreenError_Parms), Z_Construct_UFunction_ULog_ScreenError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_ScreenError_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_ScreenError_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_ScreenError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_ScreenError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULog_ScreenError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_ScreenWarning_Statics
	{
		struct Log_eventScreenWarning_Parms
		{
			FString Message;
			int32 Key;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Key;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_ScreenWarning_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_ScreenWarning_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Log_eventScreenWarning_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_ULog_ScreenWarning_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_ScreenWarning_Statics::NewProp_Message_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_ScreenWarning_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULog_ScreenWarning_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Log_eventScreenWarning_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_ULog_ScreenWarning_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_ScreenWarning_Statics::NewProp_Key_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_ScreenWarning_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_ScreenWarning_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_ScreenWarning_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_ScreenWarning_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ludwell/Debug/Log" },
		{ "CPP_Default_Key", "-1" },
		{ "ModuleRelativePath", "Public/ULog.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_ScreenWarning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "ScreenWarning", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULog_ScreenWarning_Statics::Log_eventScreenWarning_Parms), Z_Construct_UFunction_ULog_ScreenWarning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_ScreenWarning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_ScreenWarning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_ScreenWarning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_ScreenWarning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULog_ScreenWarning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULog);
	UClass* Z_Construct_UClass_ULog_NoRegister()
	{
		return ULog::StaticClass();
	}
	struct Z_Construct_UClass_ULog_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULog_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Log,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULog_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULog_ConsoleDisplay, "ConsoleDisplay" }, // 3335927654
		{ &Z_Construct_UFunction_ULog_ConsoleError, "ConsoleError" }, // 3840232485
		{ &Z_Construct_UFunction_ULog_ConsoleWarning, "ConsoleWarning" }, // 3546874572
		{ &Z_Construct_UFunction_ULog_ScreenDisplay, "ScreenDisplay" }, // 2327235764
		{ &Z_Construct_UFunction_ULog_ScreenError, "ScreenError" }, // 2777820990
		{ &Z_Construct_UFunction_ULog_ScreenWarning, "ScreenWarning" }, // 1596305400
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULog_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ULog.h" },
		{ "ModuleRelativePath", "Public/ULog.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULog_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULog>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULog_Statics::ClassParams = {
		&ULog::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULog_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULog_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULog()
	{
		if (!Z_Registration_Info_UClass_ULog.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULog.OuterSingleton, Z_Construct_UClass_ULog_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULog.OuterSingleton;
	}
	template<> LOG_API UClass* StaticClass<ULog>()
	{
		return ULog::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULog);
	ULog::~ULog() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Debug_Source_Log_Public_ULog_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Debug_Source_Log_Public_ULog_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULog, ULog::StaticClass, TEXT("ULog"), &Z_Registration_Info_UClass_ULog, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULog), 1898605718U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Debug_Source_Log_Public_ULog_h_2231319302(TEXT("/Script/Log"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Debug_Source_Log_Public_ULog_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Debug_Source_Log_Public_ULog_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
