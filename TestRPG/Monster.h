#pragma once
#ifndef MONSTER_H
#define MONSTER_H

#include <iostream>

#include "Object_Manager.h"

using namespace std;

class cMonster :
public cObject_Manager
{
public:
	cMonster();
	virtual ~cMonster();

protected:

private:
	friend class cDungeon;
};

#endif