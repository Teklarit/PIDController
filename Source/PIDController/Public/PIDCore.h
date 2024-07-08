// Teklarit ©

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

	float Tick(float Difference, float DeltaTime);
	void Reset();
	float GetSignalValue() const;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Kp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Ki;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Kd;

private:
	float SignalValue;
	float PrevError;
	float ErrorSum;

};
