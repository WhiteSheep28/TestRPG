#pragma once
#ifndef CITEM_H
#define CITEM_H

#include <iostream>

using namespace std;

class cItem
{
public:
	cItem();
	virtual ~cItem();

	//Tool_Select 1 : �ؽ�Ʈ ���, 2 : ������ ȿ��, 3 : ������ ����
	//Item_Num : ������ �ڵ�, Item_Count : ���� ������ ����
	virtual void Item_Manage(cCharacter* pCharacter, int Item_Num, int Item_Count, int Tool_Select) { ; }

	bool Check_Exists_Item() { return Is_Exists_Item; }

protected:
	bool Is_Exists_Item;

private:

};

#endif