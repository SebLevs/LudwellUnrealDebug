#pragma once
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ULog.generated.h"

UCLASS()
class LOG_API ULog : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(Category = "Ludwell|Debug|Log", BlueprintCallable)
	static void ConsoleDisplay(const FString& Message);

	UFUNCTION(Category = "Ludwell|Debug|Log", BlueprintCallable)
	static void ConsoleWarning(const FString& Message);

	UFUNCTION(Category = "Ludwell|Debug|Log", BlueprintCallable)
	static void ConsoleError(const FString& Message);

	UFUNCTION(Category = "Ludwell|Debug|Log", BlueprintCallable)
	static void ScreenDisplay(const FString& Message, const int32 Key = -1);

	UFUNCTION(Category = "Ludwell|Debug|Log", BlueprintCallable)
	static void ScreenWarning(const FString& Message, const int32 Key = -1);
	
	UFUNCTION(Category = "Ludwell|Debug|Log", BlueprintCallable)
	static void ScreenError(const FString& Message, const int32 Key = -1);
};
