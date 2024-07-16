// Teklarit ©, 2024

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PIDInterface.generated.h"

UINTERFACE(MinimalAPI, Blueprintable)
class UPIDInterface : public UInterface
{
	GENERATED_BODY()
};

class PIDCONTROLLER_API IPIDInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "PIDController")
	void Init(const float InKp = 0.0f, const float InKi = 0.0f, const float InKd = 0.0f);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "PIDController")
	float GetKp() const;
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "PIDController")
	void SetKp(const float InKp);
	
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "PIDController")
	float GetKi() const;
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "PIDController")
	void SetKi(const float InKi);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "PIDController")
	float GetKd() const;
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "PIDController")
	void SetKd(const float InKd);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "PIDController")
	float GetSignalValue() const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "PIDController", meta = (ReturnDisplayName = "SignalValue"))
	float Tick(const float Difference, const float DeltaTime);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "PIDController")
	void Reset();

};
