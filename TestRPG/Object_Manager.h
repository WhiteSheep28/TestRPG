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

	//pGive_Damage_Object : �´³� , pAttack_Obejct : ������ ��
	virtual void Attack(cObject_Manager* pGive_Damage_Object, cObject_Manager* pAttack_Object);

	int Get_Health() { return m_nHealth; }

protected:
	//�⺻ Ʋ�� �Ǵ� ����
	int m_nBase_Health;
	int m_nBase_Strength;
	int m_nBase_Defense;

	//���� ������
	int m_nSuf_Damage;

	//������� �������� ������ ���� (ex. �����, ���� ������ ����)
	int m_nMax_Health;

	//�߰����� ������ ����� �� ���� ���� (ex. ����, �����, ���)
	int m_nHealth;
	int m_nStrength;
	int m_nDefense;

private:

};