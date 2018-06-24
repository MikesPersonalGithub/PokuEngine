// Fill out your copyright notice in the Description page of Project Settings.

#include "UtilityFunctions.h"

// Static Initializations
APlayerController* UtilityFunctions::pPlayerController = NULL;

UtilityFunctions::UtilityFunctions()
{
}

UtilityFunctions::~UtilityFunctions()
{
}

void UtilityFunctions::ConfigureInputeModeToMainLevelStyle() {
	FInputModeUIOnly InputModeData;
	InputModeData.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
	pPlayerController->SetInputMode(InputModeData);
	pPlayerController->bShowMouseCursor = true;
}
