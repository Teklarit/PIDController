// Teklarit ©, 2024

#pragma once

#include "CoreMinimal.h"
#include "PIDCore.h"
#include "PIDInterface.h"
#include "UObject/NoExportTypes.h"
#include "PIDObject.generated.h"

UCLASS(Blueprintable)
class PIDCONTROLLER_API UPIDObject : public UObject, public IPIDInterface
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PID")
	FPIDCore PIDCore;

	// PID Interface:
public:
	virtual void Init_Implementation(const float InKp, const float InKi, const float InKd) override;

	virtual float GetKp_Implementation() const override;
	virtual void SetKp_Implementation(const float InKp) override;

	virtual float GetKi_Implementation() const override;
	virtual void SetKi_Implementation(const float InKi) override;

	virtual float GetKd_Implementation() const override;
	virtual void SetKd_Implementation(const float InKd) override;

	virtual float GetSignalValue_Implementation() const override;
	virtual float Tick_Implementation(const float Difference, const float DeltaTime) override;
	virtual void Reset_Implementation() override;

};
