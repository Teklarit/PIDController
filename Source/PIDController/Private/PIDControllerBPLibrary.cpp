// Teklarit ©, 2024

#include "PIDControllerBPLibrary.h"
#include "PIDCore.h"

void UPIDControllerBPLibrary::InitPID(FPIDCore& PIDRef, const float InKp, const float InKi, const float InKd)
{
	PIDRef.Init(InKp, InKi, InKd);
}

float UPIDControllerBPLibrary::TickPID(FPIDCore& PIDRef, const float Difference, const float DeltaTime)
{
	return PIDRef.Tick(Difference, DeltaTime);
}

float UPIDControllerBPLibrary::GetSignalPID(const FPIDCore& PIDRef)
{
	return  PIDRef.GetSignalValue();
}

void UPIDControllerBPLibrary::ResetPID(FPIDCore& PIDRef)
{
	PIDRef.Reset();
}
