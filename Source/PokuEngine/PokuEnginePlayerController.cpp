// Fill out your copyright notice in the Description page of Project Settings.

#include "PokuEnginePlayerController.h"
#include "UtilityFunctions.h"

APokuEnginePlayerController::APokuEnginePlayerController(const FObjectInitializer& ObjectInitializer)
{
	// Set utility class members
	UtilityFunctions::pPlayerController = this;

	bAutoManageActiveCameraTarget = false;
}


void APokuEnginePlayerController::BeginPlay() {

	// Parent duties
	Super::BeginPlay();

	// Configure Input Mode
	UtilityFunctions::ConfigureInputeModeToMainLevelStyle();
}