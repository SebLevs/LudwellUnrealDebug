// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ULog.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LOG_ULog_generated_h
#error "ULog.generated.h already included, missing '#pragma once' in ULog.h"
#endif
#define LOG_ULog_generated_h

#define FID_HostProject_Plugins_Debug_Source_Log_Public_ULog_h_8_SPARSE_DATA
#define FID_HostProject_Plugins_Debug_Source_Log_Public_ULog_h_8_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execScreenError); \
	DECLARE_FUNCTION(execScreenWarning); \
	DECLARE_FUNCTION(execScreenDisplay); \
	DECLARE_FUNCTION(execConsoleError); \
	DECLARE_FUNCTION(execConsoleWarning); \
	DECLARE_FUNCTION(execConsoleDisplay);


#define FID_HostProject_Plugins_Debug_Source_Log_Public_ULog_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execScreenError); \
	DECLARE_FUNCTION(execScreenWarning); \
	DECLARE_FUNCTION(execScreenDisplay); \
	DECLARE_FUNCTION(execConsoleError); \
	DECLARE_FUNCTION(execConsoleWarning); \
	DECLARE_FUNCTION(execConsoleDisplay);


#define FID_HostProject_Plugins_Debug_Source_Log_Public_ULog_h_8_ACCESSORS
#define FID_HostProject_Plugins_Debug_Source_Log_Public_ULog_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULog(); \
	friend struct Z_Construct_UClass_ULog_Statics; \
public: \
	DECLARE_CLASS(ULog, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Log"), NO_API) \
	DECLARE_SERIALIZER(ULog)


#define FID_HostProject_Plugins_Debug_Source_Log_Public_ULog_h_8_INCLASS \
private: \
	static void StaticRegisterNativesULog(); \
	friend struct Z_Construct_UClass_ULog_Statics; \
public: \
	DECLARE_CLASS(ULog, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Log"), NO_API) \
	DECLARE_SERIALIZER(ULog)


#define FID_HostProject_Plugins_Debug_Source_Log_Public_ULog_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULog(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULog) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULog); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULog); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULog(ULog&&); \
	NO_API ULog(const ULog&); \
public: \
	NO_API virtual ~ULog();


#define FID_HostProject_Plugins_Debug_Source_Log_Public_ULog_h_8_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULog(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULog(ULog&&); \
	NO_API ULog(const ULog&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULog); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULog); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULog) \
	NO_API virtual ~ULog();


#define FID_HostProject_Plugins_Debug_Source_Log_Public_ULog_h_5_PROLOG
#define FID_HostProject_Plugins_Debug_Source_Log_Public_ULog_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_Debug_Source_Log_Public_ULog_h_8_SPARSE_DATA \
	FID_HostProject_Plugins_Debug_Source_Log_Public_ULog_h_8_RPC_WRAPPERS \
	FID_HostProject_Plugins_Debug_Source_Log_Public_ULog_h_8_ACCESSORS \
	FID_HostProject_Plugins_Debug_Source_Log_Public_ULog_h_8_INCLASS \
	FID_HostProject_Plugins_Debug_Source_Log_Public_ULog_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_Debug_Source_Log_Public_ULog_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_Debug_Source_Log_Public_ULog_h_8_SPARSE_DATA \
	FID_HostProject_Plugins_Debug_Source_Log_Public_ULog_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Debug_Source_Log_Public_ULog_h_8_ACCESSORS \
	FID_HostProject_Plugins_Debug_Source_Log_Public_ULog_h_8_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Debug_Source_Log_Public_ULog_h_8_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Log."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOG_API UClass* StaticClass<class ULog>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_Debug_Source_Log_Public_ULog_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
