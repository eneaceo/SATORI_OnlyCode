// Fill out your copyright notice in the Description page of Project Settings.


#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_RaijinRandomAb.generated.h"


UCLASS()
class SATORI_API UBTDecorator_RaijinRandomAb : public UBTDecorator
{
	GENERATED_BODY()

public:

	

	


	virtual bool CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const override;

};
