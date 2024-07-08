// Teklarit ©

#include "PIDComponent.h"
#include "PIDObject.h"

UPIDComponent::UPIDComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
	PrimaryComponentTick.bStartWithTickEnabled = false;
}

float UPIDComponent::GetKp_Implementation() const
{
	return PIDCore.Kp;
}

void UPIDComponent::SetKp_Implementation(const float InKp)
{
	PIDCore.Kp = InKp;
}

float UPIDComponent::GetKi_Implementation() const
{
	return PIDCore.Ki;
}

void UPIDComponent::SetKi_Implementation(const float InKi)
{
	PIDCore.Ki = InKi;
}

float UPIDComponent::GetKd_Implementation() const
{
	return PIDCore.Kd;
}

void UPIDComponent::SetKd_Implementation(const float InKd)
{
	PIDCore.Kd = InKd;
}

float UPIDComponent::GetSignalValue_Implementation() const
{
	return PIDCore.GetSignalValue();
}

float UPIDComponent::Tick_Implementation(float Difference, float DeltaTime)
{
	return PIDCore.Tick(Difference, DeltaTime);
}

void UPIDComponent::Reset_Implementation()
{
	PIDCore.Reset();
}
