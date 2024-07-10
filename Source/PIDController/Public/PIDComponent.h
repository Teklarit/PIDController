// Teklarit ©, 2024

#pragma once

#include "CoreMinimal.h"
#include "PIDCore.h"
#include "PIDInterface.h"
#include "Components/ActorComponent.h"
#include "PIDComponent.generated.h"


class UPIDObject;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PIDCONTROLLER_API UPIDComponent : public UActorComponent, public IPIDInterface
{
	GENERATED_BODY()

public:	
	UPIDComponent();

protected:
	

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PID")
	FPIDCore PIDCore;

// PID Interface:
public:
	virtual float GetKp_Implementation() const override;
	virtual void SetKp_Implementation(const float InKp) override;

	virtual float GetKi_Implementation() const override;
	virtual void SetKi_Implementation(const float InKi) override;

	virtual float GetKd_Implementation() const override;
	virtual void SetKd_Implementation(const float InKd) override;

	virtual float GetSignalValue_Implementation() const override;
	virtual float Tick_Implementation(float Difference, float DeltaTime) override;
	virtual void Reset_Implementation() override;

	
};
