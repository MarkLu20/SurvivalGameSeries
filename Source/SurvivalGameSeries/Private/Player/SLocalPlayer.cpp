// Fill out your copyright notice in the Description page of Project Settings.

#include "SLocalPlayer.h"

FString USLocalPlayer::GetNickname() const
{
	FString NickName = Super::GetNickname();
	if (NickName.IsEmpty())
	{
		const FString Suffix = FString::FromInt(FMath::RandRange(0,9999));
		NickName = FPlatformProcess::ComputerName() + Suffix;
	}
	return NickName;
}
