#include <iostream>
#include "Hero.h"

Hero::Hero(std::string p_sName)
	:Character(20,50,70)
{
	m_sName = p_sName;
	m_pWeapon = new Weapon();
}

void Hero::attack(Character& target)
{
	std::cout << "Le hero attaque la target" << std::endl;
}
