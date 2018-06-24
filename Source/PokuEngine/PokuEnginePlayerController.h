// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PokuEnginePlayerController.generated.h"

/**
 * 
 */
UCLASS()
class POKUENGINE_API APokuEnginePlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	
	// Constructors
	APokuEnginePlayerController(const FObjectInitializer& ObjectInitializer);
	
	// Function Overrides
	virtual void BeginPlay() override;
};
