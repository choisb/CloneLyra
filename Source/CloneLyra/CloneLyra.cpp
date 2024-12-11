// Copyright Epic Games, Inc. All Rights Reserved.

#include "CloneLyra.h"
#include "LyraLogChannels.h"
#include "Modules/ModuleManager.h"

// todo: ������Ʈ �̸��� CloneLyra�� �ΰ� ���� target �̸��� LyraGame ���� ��������.
class FCloneLyraModule: public FDefaultGameModuleImpl
{
	virtual void StartupModule() override
	{
		UE_LOG(LogLyra, Log, TEXT("StartupModule"));
	}

	virtual void ShutdownModule() override
	{
	}
};

IMPLEMENT_PRIMARY_GAME_MODULE(FCloneLyraModule, CloneLyra, "CloneLyra");