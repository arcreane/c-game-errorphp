#include "./class/Item/items.h"
#include <random>
#include <stdio.h>
#include <iostream>

using namespace std;


 void Potions::setPotionType() {
	 std::random_device rd;
	 std::mt19937 mt(rd());
	 auto dist = std::uniform_int_distribution<int>(0, 2);

	 ePotionType rPotionType = ePotionType(dist(mt));
	mPotionType = rPotionType;
	
}

void Potions::getPotionType() {

	switch (mPotionType)
	{
	case POTION_RES:
		cout << "C'est une potion de resistance magique " << endl;
		break;
	case POTION_HEAL:
		cout << "C'est une potion de soin" << endl;
		break;
	case POTION_ARMOR:
		cout << "C'est une potion d'armure !" << endl;
		break;
	
	default:
		break;
	}
}


void Potions::createPotion() {
	Potions::setPotionType();
	Potions::getPotionType();
}
