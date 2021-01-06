#pragma once
#include "stdafx.h"
#include "mem.h"
#include "constants.h"

namespace game {
	Entity* getPlayerEntity();
	Entity* getClosestMetinStone(Vector3 anchorPosition);
	void enableWallhack();
	void disableWallhack();
	void resetPlayerAtatck();
	bool areOtherPlayersPresent();
	void pickupItems();
	void initializePickupFunctionAddresses();
	void flushEntityArray();
	float getDistanceBetweenEntities(Entity* firstEntity, Entity* secondEntity);
	float getDistanceBetweenEntityAndVec3(Entity* entity, Vector3 anchorPosition);
	void initializeAttackEntityFunctionAddresses();
	void attackEntity(Entity* entity);
	void attackVID(DWORD VID);
	void initializeCpythonPlayerSingleton();
	TCharacterInstanceMap getEntityMap();
	void sellFirstStonePage();
	void sellItem(int16_t slot, int amount);
}