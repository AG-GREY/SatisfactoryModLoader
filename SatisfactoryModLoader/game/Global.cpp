#include "stdafx.h"
#include "Global.h"

//SC79: TODO: delete this shit
//Brabb3l: Why?
//SC79: because it's an ugly hack and hooking in the mod works without it, so it should work in the SML source too :P
//Brabb3l: hmmm...

void SML::Objects::AFGPlayerController::BeginPlay() {}

void SML::Objects::AFGPlayerController::EnterChatMessage(FString* inMessage) {}

void SML::Objects::FEngineLoop::Init() {}

SML::Objects::AActor * SML::Objects::UWorld::SpawnActor(SDK::UClass *Class, SDK::FVector *Location, SDK::FRotator *Rotation, FActorSpawnParameters *SpawnParameters) { return nullptr; }

void SML::Objects::AFGStorySubsystem::BeginPlay() { }

bool SML::Objects::UObject::CallFunctionByNameWithArguments(const wchar_t * Str, FOutputDevice * Ar, SDK::UObject * Executor, bool bForceCallWithNonExec) { return false; }