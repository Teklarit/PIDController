// Teklarit ©, 2024

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PIDControllerBPLibrary.generated.h"

struct FPIDCore;

UCLASS()
class PIDCONTROLLER_API UPIDControllerBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "PIDController")
	static void InitPID(UPARAM(ref) FPIDCore& PIDRef, const float InKp = 0.0f, const float InKi = 0.0f, const float InKd = 0.0f);

	UFUNCTION(BlueprintCallable, Category = "PIDController", meta = (ReturnDisplayName = "SignalValue"))
	static float TickPID(UPARAM(ref) FPIDCore& PIDRef, const float Difference, const float DeltaTime);

	UFUNCTION(BlueprintPure, Category = "PIDController", meta = (ReturnDisplayName = "SignalValue"))
	static float GetSignalPID(UPARAM(ref) const FPIDCore& PIDRef);

	UFUNCTION(BlueprintCallable, Category = "PIDController")
	static void ResetPID(UPARAM(ref) FPIDCore& PIDRef);
};
