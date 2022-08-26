// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "KBGameModeBase.h"
#include "LoginGameMode.generated.h"

/**
 * 
 */

class UKBEMain;
class ULoginWidget;
UCLASS()
class KBEDEMO_API ALoginGameMode : public AKBGameModeBase
{
	GENERATED_BODY()

public:

	ALoginGameMode();
	/*
		��װ��½ʱ��Ҫ������KBE�¼�
	*/
	virtual void InstallEvent() override;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	bool ValidEmail(FString strEmail);

	/* KBE�¼�
	*/
	void OnCreateAccountResult(const UKBEventData* pEventData);

	/* KBE�¼�
	*/
	void OnLoginFailed(const UKBEventData* pEventData);

	/* KBE�¼�
	*/
	void OnVersionNotMatch(const UKBEventData* pEventData);

	/* KBE�¼�
	*/
	void OnScriptVersionNotMatch(const UKBEventData* pEventData);

	/* KBE�¼�
	*/
	void OnLoginBaseappFailed(const UKBEventData* pEventData);

	/* KBE�¼�
	*/
	void OnLoginSuccessfully(const UKBEventData* pEventData);

	/* KBE�¼�
	*/
	void OnLoginBaseapp(const UKBEventData* pEventData);

	/* KBE�¼�
	*/
	void Loginapp_importClientMessages(const UKBEventData* pEventData);

	/* KBE�¼�
	*/
	void Baseapp_importClientMessages(const UKBEventData* pEventData);

	/* KBE�¼�
	*/
	void Baseapp_importClientEntityDef(const UKBEventData* pEventData);
	


public:

	ULoginWidget* LoginWidget;

	UKBEMain* KBEMain;

	UPROPERTY(EditAnywhere)
		TSubclassOf<ULoginWidget> LoginWidgetClass;
	

};
