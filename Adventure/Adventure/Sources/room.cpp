#include "Monstre.h"
#include "Hero.h"
#include "room.h"


room::room()
{
	m_pMonster = new Monstre();
}


room::~room()
{
}

void room::init(int p_iIndex)
{
	m_iIndex = p_iIndex;
}

void room::Enter(Hero* p_pHero)
{
	p_pHero->attack(*m_pMonster);
	m_pMonster->attack(*p_pHero);
	pickItem(p_pHero);
}

void room::pickItem(Hero* p_pHero)
{
	//Methode pour interagir avec l'item de la room
}
