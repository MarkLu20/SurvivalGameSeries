// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "SPlayerCameraManager.generated.h"

/**
 * 
 */
UCLASS()
class SURVIVALGAMESERIES_API ASPlayerCameraManager : public APlayerCameraManager
{
	GENERATED_BODY()

		ASPlayerCameraManager(const FObjectInitializer& ObjectInitializer);
	/* Update the FOV */
	virtual void UpdateCamera(float DeltaTime) override;
	virtual void BeginPlay() override;
	//¶×·üÆ«ÒÆ
	float CurrentCrouchOffset;

	
	
};
