#pragma once

#include <iostream>

#include "Item.h"

using namespace std;

class cNormal_Item:
public cItem
{
public:
	cNormal_Item();
	virtual ~cNormal_Item();

	//Tool_Select 1 : �ؽ�Ʈ ���, 2 : ������ ȿ��, 3 : ������ ����
	//Item_Num : ������ �ڵ�, Item_Count : ���� ������ ����
	virtual void Item_Manage(cCharacter* pCharacter, int Item_Num, int Item_Count, int Tool_Select);

protected:

private:

};