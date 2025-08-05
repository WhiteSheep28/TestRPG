#pragma once

#include <iostream>

#include "Inventory.h"

using namespace std;

class cCharacter;
class cNormal_Item;
class cItem_Inventory :
public cInventory
{
public:
	cItem_Inventory();
	virtual ~cItem_Inventory();

	virtual void Inventory_Ui(cCharacter* pCharacter, cNormal_Item* pNormal_Item);

protected:

private:

};