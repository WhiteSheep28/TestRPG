#pragma once

#include <iostream>

using namespace std;

class cInventory_Manager
{
public:
	cInventory_Manager();
	~cInventory_Manager();

protected:
	//아이템 인벤토리
	int m_nItem_Inventory[10];

	//장비 인벤토리
	int m_nEquipment_Inventory[10];

	//장비창
	int m_nEquipment_Slot[4];

	//소지 아이템 갯수
	int m_nMy_Healing_Potion; // Item_Num : 1

private:

};