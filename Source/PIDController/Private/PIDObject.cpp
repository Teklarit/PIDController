// Teklarit ©

#include "PIDObject.h"

float UPIDObject::GetKp_Implementation() const
{
	return PIDCore.Kp;
}

void UPIDObject::SetKp_Implementation(const float InKp)
{
	PIDCore.Kp = InKp;
}

float UPIDObject::GetKi_Implementation() const
{
	return PIDCore.Ki;
}

void UPIDObject::SetKi_Implementation(const float InKi)
{
	PIDCore.Ki = InKi;
}

float UPIDObject::GetKd_Implementation() const
{
	return PIDCore.Kd;
}

void UPIDObject::SetKd_Implementation(const float InKd)
{
	PIDCore.Kd = InKd;
}

float UPIDObject::GetSignalValue_Implementation() const
{
	return PIDCore.GetSignalValue();
}

float UPIDObject::Tick_Implementation(float Difference, float DeltaTime)
{
	return PIDCore.Tick(Difference, DeltaTime);
}

void UPIDObject::Reset_Implementation()
{
	PIDCore.Reset();
}