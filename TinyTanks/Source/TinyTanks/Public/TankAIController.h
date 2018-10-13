// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Runtime/Engine/Classes/Engine/World.h"
#include "Tank.h"
#include "CoreMinimal.h"
#include "AIController.h"
#include "TankAIController.generated.h"

/**
 * 
 */
UCLASS()
class TINYTANKS_API ATankAIController : public AAIController
{
	GENERATED_BODY()
	
public:
	ATank* GetAIControlledTank() const;
	ATank* GetPlayerTank() const;

	void BeginPlay() override;
};
