#include <iostream>
#include <conio.h>

#include "Game_Manager.h";

#include "Character.h"

using namespace std;

char cGame_Manager::m_cSelect = '\0';

cGame_Manager::cGame_Manager()
{

}

cGame_Manager::~cGame_Manager()
{

}

void cGame_Manager::Select_Num()
{
	m_cSelect = _getch();
}