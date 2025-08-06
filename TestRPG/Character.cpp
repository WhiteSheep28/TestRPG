#include <iostream>

#include "Character.h"

#include "Game_Manager.h"
#include "Inventory_Manager.h"
#include "Object_Manager.h"

using namespace std;

cCharacter::cCharacter()
{
	memset(m_nItem_Inventory, 0, 11 * sizeof(int));

	m_nBase_Health = 1000;
	m_nBase_Strength = 50;
	m_nBase_Defense = 10;

	m_nSuf_Damage = 0;

	m_nHealth = 0;
	m_nStrength = 0;
	m_nDefense = 0;

	m_nItem_Inventory[0] = 1;
	m_nItem_Inventory[1] = 2;
	m_nItem_Inventory[2] = 3;

	m_nMy_Healing_Potion = 1;
	m_nMy_Road_PickUp_Bread = 10;
	m_nMy_Trash = 5;
}

cCharacter::~cCharacter()
{

}