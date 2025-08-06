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
	int nChange_Num = 0;
	int nInventory_Count = 0;
	Is_Invite_Inventory = 1;

	while (1)
	{
		system("cls");

		nInventory_Count = 0;

		cout << "{ 인벤토리 }" << endl;

		while (nInventory_Count < 11)
		{
			cout << nInventory_Count << ". ";

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
			nChange_Num = (int)pCharacter->Get_Select_Num() - 48;

			pNormal_Item->Item_Manage(pCharacter, pCharacter->m_nItem_Inventory[nChange_Num], 0, 2);

			break;
		}
		case ' ': break;
		default: continue;
		}
		 
		Clean_Inventory(pCharacter, pNormal_Item);

		if (pCharacter->Get_Select_Num() == ' ') break;
	}
}

void cItem_Inventory::Clean_Inventory(cCharacter* pCharacter, cNormal_Item* pNormal_Item)
{
	int nInventory_Count = 0;
	int nTemp_Inventory_Count = 0;

	while (nInventory_Count != 11)
	{
		if (pCharacter->m_nItem_Inventory[nInventory_Count] != 0)
		{
			pNormal_Item->Item_Manage(pCharacter, pCharacter->m_nItem_Inventory[nInventory_Count], 0, 4);

			if (pNormal_Item->Check_Exists_Item() == 0) pCharacter->m_nItem_Inventory[nInventory_Count] = 0;
		}

		nInventory_Count++;
	}

	nInventory_Count = 0;

	while (nInventory_Count != 11)
	{
		nTemp_Inventory_Count = nInventory_Count;
	
		while (pCharacter->m_nItem_Inventory[nInventory_Count] != 0)
		{
			if (nInventory_Count == 0)
			{
				break;
			}
			else if (pCharacter->m_nItem_Inventory[nInventory_Count - 1] != 0)
			{
				break;
			}
			else
			{
				pCharacter->m_nItem_Inventory[nInventory_Count - 1] = pCharacter->m_nItem_Inventory[nInventory_Count];

				pCharacter->m_nItem_Inventory[nInventory_Count] = 0;

				nInventory_Count--;

				if (pCharacter->m_nItem_Inventory[nInventory_Count - 1] != 0)
				{
					break;
				}
			}
		}

		nInventory_Count = nTemp_Inventory_Count;

		nInventory_Count++;
	}
}