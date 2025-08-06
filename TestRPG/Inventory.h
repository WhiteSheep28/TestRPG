#pragma once

#include <iostream>

class cCharacter;
class cItem;
class cInventory
{
public:
	cInventory();
	virtual ~cInventory();

	virtual void Inventory_Ui(cCharacter* pCharacter, cItem* pItem) { ; }
	bool Check_Invite_Inventory() { return Is_Invite_Inventory; }
	void Reset_Invite_Inventory() { Is_Invite_Inventory = 0; }

protected:
	int m_nInventory_Count;
	bool Is_Invite_Inventory;

private:

};