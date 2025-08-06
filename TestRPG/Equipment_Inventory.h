#pragma once
#ifndef CEQUIPMENT_INVENTORY_H
#define CEQUIPMENT_INVENTORY_H

#include <iostream>

#include "Inventory.h"

using namespace std;

class cEquipment_Inventory:
public cInventory
{
public:
	cEquipment_Inventory();
	virtual ~cEquipment_Inventory();

	virtual void Get_Item();
	virtual void Remove_Item();
	virtual void Array_Item();
	virtual void Use_Item();
	virtual void Print_Item();

protected:

private:

};

#endif