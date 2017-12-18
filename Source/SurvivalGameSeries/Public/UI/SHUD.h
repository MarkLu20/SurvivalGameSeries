// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "SHUD.generated.h"

/**
 *
 */
UENUM(BlueprintType)
enum  class EHUDState : uint8
{

	Playing,
	Spectating,
	MatchEnd


};
UCLASS()
class SURVIVALGAMESERIES_API ASHUD : public AHUD
{
	GENERATED_BODY()

	AHUD(const FObjectInitializer &ObjectInitializer)
	FCanvasIcon CenterDotIocn;
	EHUDState CurrentState;
	virtual void DrawHUD() override;
	void DrawCenterDot();
public :
	UFUNCTION(BlueprintCallable, Category = "HUD")
		void  MessageReceived(const FText &TextMessage);
    UFUNCTION(BlueprintCallable,Category="HUDEvents")
		void MessageRecived(const FText &TextMessage);
};
