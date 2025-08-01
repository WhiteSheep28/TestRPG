#pragma once

#include <iostream>

using namespace std;

class cCharacter;
class cMonster;
class cItem;
class cInventory;
class cDungeon
{
public:
	cDungeon();
	~cDungeon();

	void Monster_Spawn(cCharacter* pCharacter, cItem* pNormal_Item, cInventory* pItem_Inventory);

	void Dungeon_Fight(cCharacter* pCharacter, cMonster* pMonster, cItem* pNormal_Item, cInventory* pItem_Inventory);

protected:
	int m_nRandom_Mob_Spawn;

private:

};