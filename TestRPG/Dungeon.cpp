#include <iostream>

#include "Dungeon.h"

#include "Character.h"
#include "Monster.h"

#include "Inventory.h"
#include "Item_Inventory.h"

#include "Normal_Item.h"

using namespace std;

cDungeon::cDungeon()
{

}

cDungeon::~cDungeon()
{

}

void cDungeon::Monster_Spawn(cCharacter* pCharacter, cNormal_Item* pNormal_Item, cItem_Inventory* pItem_Inventory)
{
	while (1)
	{
		cMonster* pMonster = new cMonster;

		Dungeon_Fight(pCharacter, pMonster, pNormal_Item, pItem_Inventory);

		delete pMonster;

		if (pCharacter->m_nHealth <= 0 || pCharacter->m_cSelect == ' ')
		{
			break;
		}
	}
}

void cDungeon::Dungeon_Fight(cCharacter* pCharacter, cMonster* pMonster, cNormal_Item* pNormal_Item, cItem_Inventory* pItem_Inventory)
{
	while (1)
	{
		pCharacter->All_Stats();
		pMonster->All_Stats();
		
		system("cls");
		cout << "{ Character" << "}{" << " Monster }" << endl;
		cout << "ü�� : " << pCharacter->m_nHealth << "ü�� : " << pMonster->m_nHealth << endl;
		cout << "���ݷ� : " << pCharacter->m_nStrength << "���ݷ� : " << pMonster->m_nStrength << endl;
		cout << "���� : " << pCharacter->m_nDefense << "���� : " << pMonster->m_nDefense << endl;
		cout << "1. �����ϱ�" << endl;
		cout << "2. ���â" << endl;
		cout << "3. �κ��丮" << endl;
		cout << "Space. ���� ������" << endl;

		pCharacter->Select_Num();

		switch (pCharacter->Get_Select_Num())
		{
		case '1': pCharacter->Attack(pMonster, pCharacter);
		case '2': break;
		case '3': pItem_Inventory->Inventory_Ui(pCharacter, pNormal_Item);
		case ' ': break;
		default: continue;
		}

		if (pCharacter->Get_Select_Num() == ' ') break;

		//���� ü�� �˻�
		pMonster->All_Stats();

		//���� ���� ��
		if (pMonster->m_nHealth <= 0)
		{
			break;
		}

		//���� ����
		pMonster->Attack(pCharacter, pMonster);

		//�÷��̾� ü�� �˻�
		pCharacter->All_Stats();

		//ĳ���� ���� ��
		if (pCharacter->m_nHealth <= 0)
		{
			break;
		}
	}
}
