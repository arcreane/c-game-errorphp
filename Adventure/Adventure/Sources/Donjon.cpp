#include "Donjon.h"


Donjon::Donjon()
{
	for (int i = 0; i < 5; i++)
	{
		m_ArrayRooms[i].init(i);
	}
}

void Donjon::EnterDonjon(Hero* p_pHero)
{
	m_pHero = p_pHero;
	m_ArrayRooms[0].Enter(m_pHero);
}