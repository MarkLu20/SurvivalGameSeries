// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/LocalPlayer.h"
#include "SLocalPlayer.generated.h"

/**
 * 
 */
UCLASS()
class SURVIVALGAMESERIES_API USLocalPlayer : public ULocalPlayer
{
	GENERATED_BODY()


		/**
		* LocalPlayer defines a specific user when dealing with multiple players on a single machine (eg. local split-screen)
		*/
		virtual FString GetNickname() const override;
	
};
