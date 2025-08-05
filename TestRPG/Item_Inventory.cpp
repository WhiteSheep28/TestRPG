#include <iostream>

#include "Item_Inventory.h"

#include "Character.h"

#include "Item.h"
#include "Normal_Item.h"

using namespace std;

cItem_Inventory::cItem_Inventory()
{

}

cItem_Inventory::~cItem_Inventory()
{

}

void cItem_Inventory::Inventory_Ui(cCharacter* pCharacter, cNormal_Item* pNormal_Item)
{
	int nInventory_Count = 0;

	while (1)
	{
		nInventory_Count = 0;

		cout << "{ 인벤토리 }" << endl;

		while (nInventory_Count <= 11)
		{
			pNormal_Item->Item_Manage(pCharacter, pCharacter->m_nItem_Inventory[nInventory_Count], 0, 1);

			cout << endl;

			nInventory_Count++;
		}

		cout << "Space. 나가기" << endl;

		pCharacter->Select_Num();

		switch (pCharacter->Get_Select_Num())
		{
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
		case '10':
		{
			pNormal_Item->Item_Manage(pCharacter, pCharacter->m_nItem_Inventory[pCharacter->Get_Select_Num()], 0, 1);

			break;
		}
		default: continue;
		}
	}
}