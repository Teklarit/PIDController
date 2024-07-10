// Teklarit ©, 2024

#include "PIDCore.h"

FPIDCore::FPIDCore()
	: Kp(0.0f)
	, Ki(0.0f)
	, Kd(0.0f)
	, SignalValue(0.0f)
	, PrevError(0.0f)
	, ErrorSum(0.0f)
{
}

FPIDCore::FPIDCore(const float InKp, const float InKi, const float InKd)
	: Kp(InKp)
	, Ki(InKi)
	, Kd(InKd)
	, SignalValue(0.0f)
	, PrevError(0.0f)
	, ErrorSum(0.0f)
{
}

float FPIDCore::Tick(float Difference, float DeltaTime)
{
	if (FMath::IsNearlyZero(DeltaTime))
	{
		UE_LOG(LogTemp, Error, TEXT("PID controller tick with zero Dt!"));
		return 0.0f;
	}

	// Proportional
	const double Error = Difference;

	// Integral
	ErrorSum += Error * DeltaTime;

	// Derivative
	const double Derivative = (Error - PrevError) / DeltaTime;


	PrevError = Error;
	SignalValue = (Kp * Error) + (Ki * ErrorSum) + (Kd * Derivative);
	return SignalValue;
}

void FPIDCore::Reset()
{
	SignalValue = 0.0f;
	PrevError = 0.0f;
	ErrorSum = 0.0f;
}

float FPIDCore::GetSignalValue() const
{
	return SignalValue;
}
