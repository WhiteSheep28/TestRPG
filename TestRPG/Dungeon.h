#pragma once

#include <iostream>

using namespace std;

class cCharacter;
class cMonster;
class cNormal_Item;
class cInventory;
class cItem_Inventory;
class cDungeon
{
public:
	cDungeon();
	~cDungeon();

	void Monster_Spawn(cCharacter* pCharacter, cNormal_Item* pNormal_Item, cItem_Inventory* pItem_Inventory);

	void Dungeon_Fight(cCharacter* pCharacter, cMonster* pMonster, cNormal_Item* pNormal_Item, cItem_Inventory* pItem_Inventory);

protected:
	int m_nRandom_Mob_Spawn;

private:

};