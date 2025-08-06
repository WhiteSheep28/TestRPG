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

		while (1)
		{
			pCharacter->All_Stats();
			pMonster->All_Stats();
		
			system("cls");
			cout << "{ Character" << "}{" << " Monster }" << endl;
			cout << "체력 : " << pCharacter->m_nHealth << "체력 : " << pMonster->m_nHealth << endl;
			cout << "공격력 : " << pCharacter->m_nStrength << "공격력 : " << pMonster->m_nStrength << endl;
			cout << "방어력 : " << pCharacter->m_nDefense << "방어력 : " << pMonster->m_nDefense << endl;
			cout << "1. 공격하기" << endl;
			cout << "2. 장비창" << endl;
			cout << "3. 인벤토리" << endl;
			cout << "Space. 던전 나가기" << endl;

			pCharacter->Select_Num();

			switch (pCharacter->Get_Select_Num())
			{
			case '1': pCharacter->Attack(pMonster, pCharacter); break;
			case '2': break;
			case '3': pItem_Inventory->Inventory_Ui(pCharacter, pNormal_Item); break;
			case ' ': break;
			default: continue;
			}

			//인벤토리에 관한 행동은 턴이 진행되지 않게 예외 처리
			if (pItem_Inventory->Check_Invite_Inventory() == 1)
			{
				pItem_Inventory->Reset_Invite_Inventory();

				continue;
			}
			else break;
		}

		if (pCharacter->Get_Select_Num() == ' ') break;

		//몬스터 체력 검사
		pMonster->All_Stats();

		//몬스터 죽을 시
		if (pMonster->m_nHealth <= 0)
		{
			break;
		}

		//몬스터 공격
		pMonster->Attack(pCharacter, pMonster);

		//플레이어 체력 검사
		pCharacter->All_Stats();

		//캐릭터 죽을 시
		if (pCharacter->m_nHealth <= 0)
		{
			break;
		}
	}
}
