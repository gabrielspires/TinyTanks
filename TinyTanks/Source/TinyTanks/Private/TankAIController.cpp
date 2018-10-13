// Fill out your copyright notice in the Description page of Project Settings.

#include "TankAIController.h"


void ATankAIController::BeginPlay() {
	Super::BeginPlay();

	auto AIControlledTank = GetAIControlledTank();
	if (!AIControlledTank) {
		UE_LOG(LogTemp, Warning, TEXT("TankAIController não controlando nenhum tank"));
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("TankAIController possuindo %s"), *(AIControlledTank->GetName()));
	}

	auto PlayerTank = GetPlayerTank();
	if (!PlayerTank) {
		UE_LOG(LogTemp, Warning, TEXT("AIController não encontra nenhum PlayerTank"));
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("AIController encontrou PlayerTank: %s"), *(PlayerTank->GetName()));
	}
}

ATank* ATankAIController::GetPlayerTank() const {
	return Cast<ATank>(GetWorld()->GetFirstPlayerController()->GetPawn());
}

ATank* ATankAIController::GetAIControlledTank() const {
	return Cast<ATank>(GetPawn());
}