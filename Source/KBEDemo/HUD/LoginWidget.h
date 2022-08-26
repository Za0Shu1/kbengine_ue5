// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "LoginWidget.generated.h"

class ALoginGameMode;
class UEditableTextBox;
class UTextBlock;

/**
 * 
 */
UCLASS()
class KBEDEMO_API ULoginWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:

	ALoginGameMode* LoginGameMode;

	void InitWidget();

	UFUNCTION(BlueprintCallable)
		void LoginButtonEvent();

	UFUNCTION(BlueprintCallable)
		void RegisterButtonEvent();

public:
	UPROPERTY(Meta = (BindWidget))
		UEditableTextBox* UserNameBox;

	UPROPERTY(Meta = (BindWidget))
		UEditableTextBox* PwdBox;

	UPROPERTY(Meta = (BindWidget))
		UTextBlock* ClientVersion;

	UPROPERTY(Meta = (BindWidget))
		UTextBlock* ClientScriptVersion;

	UPROPERTY(Meta = (BindWidget))
		UTextBlock* ServerVersion;

	UPROPERTY(Meta = (BindWidget))
		UTextBlock* ServerScriptVersion;

};
