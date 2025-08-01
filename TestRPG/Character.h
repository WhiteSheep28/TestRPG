#pragma once

#include <iostream>

#include "Game_Manager.h"
#include "Inventory_Manager.h"
#include "Object_Manager.h"

using namespace std;

class cCharacter :
public cGame_Manager, public cInventory_Manager, public cObject_Manager
{
public:
	cCharacter();
	virtual ~cCharacter();

protected:

private:

	friend class cDungeon;
	friend class cItem_Inventory;
	friend class cNormal_Item;
};