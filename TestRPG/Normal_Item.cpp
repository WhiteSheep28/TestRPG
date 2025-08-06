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
			cout << "ȸ�� ���� : " << pCharacter->Check_Healing_Potion() << "��";

			break;
		}
		case 2:
		{
			pCharacter->m_nMy_Healing_Potion--;

			pCharacter->m_nSuf_Damage = pCharacter->m_nSuf_Damage - 250;

			if (pCharacter->m_nSuf_Damage <= 0) pCharacter->m_nSuf_Damage = 0;

			break;
		}
		case 3:
		{
			pCharacter->m_nMy_Healing_Potion += Item_Count;

			break;
		}
		case 4:
		{
			if (pCharacter->Check_Healing_Potion() > 0)	Is_Exists_Item = 1;
			else if (pCharacter->Check_Healing_Potion() <= 0) Is_Exists_Item = 0;

			break;
		}
		}

		break;
	}
	//==================================================================================
	case 2:
	{
		switch (Tool_Select)
		{
		case 1:
		{
			cout << "�� ���� �ֿ� �� : " << pCharacter->Check_Road_PickUp_Bread() << "��";

			break;
		}
		case 2:
		{
			pCharacter->m_nMy_Road_PickUp_Bread--;

			system("cls");

			cout << "��~��" << endl;

			break;
		}
		case 3:
		{
			pCharacter->m_nMy_Road_PickUp_Bread += Item_Count;

			break;
		}
		case 4:
		{
			if (pCharacter->Check_Road_PickUp_Bread() > 0)	Is_Exists_Item = 1;
			else if (pCharacter->Check_Road_PickUp_Bread() <= 0) Is_Exists_Item = 0;

			break;
		}
		}

		break;
	}
	//==================================================================================
	case 3:
	{
		switch (Tool_Select)
		{
		case 1:
		{
			cout << "������ : " << pCharacter->Check_Trash() << "��";

			break;
		}
		case 2:
		{
			pCharacter->m_nMy_Trash--;

			system("cls");

			cout << "���� ������" << endl;

			break;
		}
		case 3:
		{
			pCharacter->m_nMy_Trash  += Item_Count;

			break;
		}
		case 4:
		{
			if (pCharacter->Check_Trash() > 0)	Is_Exists_Item = 1;
			else if (pCharacter->Check_Trash() <= 0) Is_Exists_Item = 0;

			break;
		}
		}

		break;
	}
	}
}