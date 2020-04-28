#pragma once
#include "Character.h"
#include "Weapon.h"
#include <string>
class Hero :
	public Character
{
public :
	Hero(std::string p_sName);

	virtual void attack(Character& target) override;
private:
	std::string m_sName;
	Weapon* m_pWeapon;

	// Hérité via Character
};

