#include <iostream>

#include "Item.h"
#include "Normal_Item.h"
#include "Character.h"

using namespace std;

cNormal_Item::cNormal_Item()
{

}

cNormal_Item::~cNormal_Item()
{

}

void cNormal_Item::Item_Manage(cCharacter* pCharacter, int Item_Num, int Item_Count, int Tool_Select)
{
	switch (Item_Num)
	{
	case 1:
	{
		switch (Tool_Select)
		{
		case 1:
		{
			cout << "회복 물약 : " << pCharacter->Check_Healing_Potion() << "개";
		}
		case 2:
		{
			pCharacter->m_nMy_Healing_Potion--;

			pCharacter->m_nHealth += 250;

			pCharacter->Max_Stats();

			if (pCharacter->m_nHealth >= pCharacter->m_nMax_Health)
			{
				pCharacter->m_nHealth = pCharacter->m_nMax_Health;
			}
		}
		case 3:
		{
			pCharacter->m_nMy_Healing_Potion += Item_Count;
		}
		}
	}
	case 2:
	{
		break;
	}
	}
}