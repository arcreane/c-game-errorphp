#include <iostream>
#include "Monstre.h"


Monstre::Monstre()
    :Character(10,20,30)
{

}

void Monstre::attack(Character& cible)
{

    std::cout << "Le monstre charge le heros en beuglant " << std::endl;

   //int falseAttack = 55;
   //
   //cible.receiveDommage(falseAttack);
}