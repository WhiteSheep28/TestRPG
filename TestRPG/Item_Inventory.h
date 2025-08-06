#pragma once
#ifndef CITEM_INVENTORY_H
#define CITEM_INVENTORY_H

#include <iostream>

#include "Inventory.h"

using namespace std;

class cItem_Inventory :
public cInventory
{
public:
	cItem_Inventory();
	virtual ~cItem_Inventory();

	virtual void Inventory_Ui(cCharacter* pCharacter, cNormal_Item* pNormal_Item);
	virtual void Clean_Inventory(cCharacter* pCharacter, cNormal_Item* pNormal_Item);

protected:

private:

};

#endif