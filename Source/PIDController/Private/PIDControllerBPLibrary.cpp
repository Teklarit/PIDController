// Teklarit ©, 2024

#include "PIDControllerBPLibrary.h"
#include "PIDCore.h"

void UPIDControllerBPLibrary::InitPID(FPIDCore& PIDCoreRef, const float InKp, const float InKi, const float InKd)
{
	PIDCoreRef.Init(InKp, InKi, InKd);
}

float UPIDControllerBPLibrary::TickPID(FPIDCore& PIDCoreRef, const float Difference, const float DeltaTime)
{
	return PIDCoreRef.Tick(Difference, DeltaTime);
}

float UPIDControllerBPLibrary::GetSignalPID(const FPIDCore& PIDCoreRef)
{
	return  PIDCoreRef.GetSignalValue();
}

void UPIDControllerBPLibrary::ResetPID(FPIDCore& PIDCoreRef)
{
	PIDCoreRef.Reset();
}
