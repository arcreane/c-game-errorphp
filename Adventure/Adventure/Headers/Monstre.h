#pragma once
#include "Character.h"
class Monstre :
	public Character
{
public :
	Monstre();
	void attack(Character& cible) override;

};

