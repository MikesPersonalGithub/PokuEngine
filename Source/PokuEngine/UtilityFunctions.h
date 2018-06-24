// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PokuEnginePlayerController.h"

/**
 * 
 */
static class POKUENGINE_API UtilityFunctions
{
public:

	// Constructor/Destructor
	UtilityFunctions();
	~UtilityFunctions();

	// Members
	static APlayerController* pPlayerController;

	// Functions
	static void ConfigureInputeModeToMainLevelStyle();
};
