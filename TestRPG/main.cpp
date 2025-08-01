#include <iostream>

#include "Game_Manager.h"
#include "Inventory_Manager.h"
#include "Object_Manager.h"

#include "Character.h"

#include "Item.h"
#include "Normal_Item.h"

#include "Inventory.h"
#include "Item_Inventory.h"

#include "Dungeon.h"

using namespace std;

void main()
{
	cCharacter* pCharacter = new cCharacter;
	
	cInventory* pItem_Inventory = new cItem_Inventory;

	cItem* pNormal_Item = new cNormal_Item;

	cDungeon* pDungeon = new cDungeon;

	while (1)
	{
		system("cls");
		cout << "{ Text RPG }" << endl;
		cout << "{ ������ }" << endl;
		cout << "1. ���� ����" << endl;
		cout << "Space. ���� ������" << endl;

		pCharacter->Select_Num();

		switch (pCharacter->Get_Select_Num())
		{
		case '1': break;
		case ' ': exit(1);
		default : continue;
		}

		if (pCharacter->Get_Select_Num() == '1') break;
	}

	while (1)
	{
		pCharacter->All_Stats();

		system("cls");
		cout << "{ ���� â }" << endl;
		pCharacter->All_Stats_Ui();
		cout << "{ ������ }" << endl;
		cout << "1. ���� ����" << endl;
		cout << "Space. ���� ������" << endl;

		pCharacter->Select_Num();

		switch (pCharacter->Get_Select_Num())
		{
		case '1': pDungeon->Monster_Spawn(pCharacter, pNormal_Item, pItem_Inventory); break;
		case ' ': exit(1);
		default: continue;
		}

		//ĳ���� ���� ��
		if (pCharacter->Get_Health() <= 0)
		{
			delete pCharacter;
			delete pDungeon;
			delete pNormal_Item;
			delete pItem_Inventory;

			main();
		}
	}
}
