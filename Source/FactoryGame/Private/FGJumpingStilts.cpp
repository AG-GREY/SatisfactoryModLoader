// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGJumpingStilts.h"

AFGJumpingStilts::AFGJumpingStilts() : Super() {
	this->mEquipmentSlot = EEquipmentSlot::ES_BACK;
	this->PrimaryActorTick.TickGroup = TG_PrePhysics; this->PrimaryActorTick.EndTickGroup = TG_PrePhysics; this->PrimaryActorTick.bTickEvenWhenPaused = false; this->PrimaryActorTick.bCanEverTick = true; this->PrimaryActorTick.bStartWithTickEnabled = false; this->PrimaryActorTick.bAllowTickOnDedicatedServer = true; this->PrimaryActorTick.TickInterval = 0;
	this->bOnlyRelevantToOwner = true;
	this->bNetUseOwnerRelevancy = true;
	this->bReplicates = true;
}
void AFGJumpingStilts::Equip( AFGCharacterPlayer* character){ }
void AFGJumpingStilts::UnEquip(){ }
float AFGJumpingStilts::GetAdjustedMaxSpeed(float defaultMaxSpeed){ return float(); }
float AFGJumpingStilts::GetAdjustedZJumpSpeed(float defaultJumpZ){ return float(); }
float AFGJumpingStilts::GetMaxFallSpeedBeforeDamage(){ return float(); }
float AFGJumpingStilts::GetCurrentFallSpeed(){ return float(); }
float AFGJumpingStilts::GetNormalizedFallSpeedUntilDamaged(){ return float(); }
