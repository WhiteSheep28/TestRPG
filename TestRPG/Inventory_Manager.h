#pragma once

#include <iostream>

using namespace std;

class cInventory_Manager
{
public:
	cInventory_Manager();
	~cInventory_Manager();

protected:
	//������ �κ��丮
	int m_nItem_Inventory[10];

	//��� �κ��丮
	int m_nEquipment_Inventory[10];

	//���â
	int m_nEquipment_Slot[4];

	//���� ������ ����
	int m_nMy_Healing_Potion; // Item_Num : 1

private:

};