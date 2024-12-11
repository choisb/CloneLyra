// Copyright Epic Games, Inc. All Rights Reserved.

#include "CloneLyra.h"
#include "LyraLogChannels.h"
#include "Modules/ModuleManager.h"

// todo: 프로젝트 이름은 CloneLyra로 두고 모듈과 target 이름을 LyraGame 으로 변경하자.
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