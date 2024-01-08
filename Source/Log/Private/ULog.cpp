#include "ULog.h"

#include "Engine/Engine.h"

ULog::ULog(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

void ULog::ConsoleDisplay(const FString& Message)
{
	UE_LOG(LogTemp, Display, TEXT("%s"), *Message);
}

void ULog::ConsoleWarning(const FString& Message)
{
	UE_LOG(LogTemp, Warning, TEXT("%s"), *Message);
}

void ULog::ConsoleError(const FString& Message)
{
	UE_LOG(LogTemp, Error, TEXT("%s"), *Message);
}

void ULog::ScreenDisplay(const FString& Message, const int32 Key)
{
	GEngine->AddOnScreenDebugMessage(Key, 5.f, FColor::White, *Message);
}

void ULog::ScreenWarning(const FString& Message, const int32 Key)
{
	GEngine->AddOnScreenDebugMessage(Key, 5.0f, FColor::Yellow, *Message);
}

void ULog::ScreenError(const FString& Message, const int32 Key)
{
	GEngine->AddOnScreenDebugMessage(Key, 5.0f, FColor::Red, *Message);
}