#pragma once
#ifndef CINVENTORY_MANAGER_H
#define CINVENTORY_MANAGER_H

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
	int m_nMy_Road_PickUp_Bread;
	int m_nMy_Trash;

private:

};

#endif 