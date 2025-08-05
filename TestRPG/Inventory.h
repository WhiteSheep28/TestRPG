#pragma once

#include <iostream>

class cCharacter;
class cItem;
class cInventory
{
public:
	cInventory();
	virtual ~cInventory();

	void Inventory_Ui(cCharacter* pCharacter, cItem* pItem) { ; }

protected:
	int m_nInventory_Count;

private:

};