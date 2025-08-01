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

	//Tool_Select 1 : 텍스트 출력, 2 : 아이템 효과, 3 : 아이템 수급
	//Item_Num : 아이템 코드, Item_Count : 먹은 아이템 갯수
	virtual void Item_Manage(cCharacter* pCharacter, int Item_Num, int Item_Count, int Tool_Select);

protected:

private:

};