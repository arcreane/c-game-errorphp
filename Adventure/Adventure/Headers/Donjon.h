#pragma once
#include "room.h"
#include "Hero.h"

class Donjon
{
private:
	room m_ArrayRooms[5];
	Hero* m_pHero;
	
public:
	Donjon();
	void EnterDonjon(Hero* p_pHero);
};

