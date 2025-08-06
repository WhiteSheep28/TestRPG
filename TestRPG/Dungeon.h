#pragma once
#ifndef CDUNGEON_H
#define CDUNGEON_H

#include <iostream>

using namespace std;

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

#endif