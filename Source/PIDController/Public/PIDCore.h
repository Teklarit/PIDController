// Teklarit ©, 2024

#pragma once

#include "CoreMinimal.h"
#include "PIDCore.generated.h"

USTRUCT(BlueprintType)
struct PIDCONTROLLER_API FPIDCore
{
	GENERATED_USTRUCT_BODY();

public:
	FPIDCore();
	FPIDCore(const float InKp, const float InKi, const float InKd);

	void Init(const float InKp = 0.0f, const float InKi = 0.0f, const float InKd = 0.0f);
	float Tick(const float Difference, const float DeltaTime);
	float GetSignalValue() const;
	void Reset();

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PID")
	float Kp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PID")
	float Ki;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PID")
	float Kd;

private:
	float SignalValue;
	float PrevError;
	float ErrorSum;

};
