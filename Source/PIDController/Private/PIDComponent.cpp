// Teklarit ©, 2024

#include "PIDComponent.h"
#include "PIDObject.h"

UPIDComponent::UPIDComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
	PrimaryComponentTick.bStartWithTickEnabled = false;
}

void UPIDComponent::Init_Implementation(const float InKp, const float InKi, const float InKd)
{
	PIDCore.Init(InKp, InKi, InKd);
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

float UPIDComponent::Tick_Implementation(const float Difference, const float DeltaTime)
{
	return PIDCore.Tick(Difference, DeltaTime);
}

void UPIDComponent::Reset_Implementation()
{
	PIDCore.Reset();
}
