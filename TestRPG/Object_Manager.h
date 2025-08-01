#pragma once

#include <iostream>

using namespace std;

class cCharacter;
class cMonster;
class cObject_Manager
{
public:
	cObject_Manager();
	virtual ~cObject_Manager();

	virtual void All_Stats();
	virtual void All_Stats_Ui();

	virtual void Max_Stats();

	//pGive_Damage_Object : 맞는놈 , pAttack_Obejct : 때리는 놈
	virtual void Attack(cObject_Manager* pGive_Damage_Object, cObject_Manager* pAttack_Object);

	int Get_Health() { return m_nHealth; }

protected:
	//기본 틀이 되는 스탯
	int m_nBase_Health;
	int m_nBase_Strength;
	int m_nBase_Defense;

	//입은 데미지
	int m_nSuf_Damage;

	//디버프나 데미지를 제외한 스탯 (ex. 디버프, 입은 데미지 제외)
	int m_nMax_Health;

	//추가적인 연산이 진행된 후 최종 스탯 (ex. 버프, 디버프, 장비)
	int m_nHealth;
	int m_nStrength;
	int m_nDefense;

private:

};