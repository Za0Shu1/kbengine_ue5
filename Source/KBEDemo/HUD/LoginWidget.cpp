// Fill out your copyright notice in the Description page of Project Settings.


#include "LoginWidget.h"
#include "Components/EditableTextBox.h"
#include "Components/TextBlock.h"
#include "KBEnginePlugins/Engine/KBEMain.h"
#include "KBEnginePlugins/Scripts/KBUtil.h"
#include "../GamePlay/LoginGameMode.h"

void ULoginWidget::InitWidget()
{
	ClientVersion->SetText(FText::FromString("Client Version:" + UKBEMain::getClientVersion()));
	ClientScriptVersion->SetText(FText::FromString("Client Script Version:" + UKBEMain::getClientScriptVersion()));
	ServerVersion->SetText(FText::FromString("Server Version:" + UKBEMain::getServerVersion()));
	ServerScriptVersion->SetText(FText::FromString("Server Script Version:" + UKBEMain::getServerScriptVersion()));
}

void ULoginWidget::LoginButtonEvent()
{
	FString UserName = UserNameBox->GetText().ToString();
	FString Password = PwdBox->GetText().ToString();

	if (UserName.IsEmpty() || Password.IsEmpty())
	{
		DDH::Debug() << "UserName Or Passward Can Not Be None" << DDH::Endl();
		return;
	}

	TArray<uint8> LoginData;

	FString ProjectName("KBEExamPro");

	for (int i = 0; i < ProjectName.Len(); ++i)
		LoginData.Push((uint8)ProjectName[i]);

	LoginGameMode->KBEMain->login(UserName, Password, LoginData);
}

void ULoginWidget::RegisterButtonEvent()
{
	FString UserName = UserNameBox->GetText().ToString();
	FString Passward = PwdBox->GetText().ToString();

	if (UserName.IsEmpty() || Passward.IsEmpty())
	{
		DDH::Debug() << "UserName Or Passward Can Not Be None" << DDH::Endl();
		return;
	}

	TArray<uint8> AccountData;

	FString ProjectName("KBEExamPro");

	for (int i = 0; i < ProjectName.Len(); ++i)
		AccountData.Push((uint8)ProjectName[i]);

	LoginGameMode->KBEMain->createAccount(UserName, Passward, AccountData);
}
