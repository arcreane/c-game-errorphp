#include "Character.h"

using namespace std;

void Character::receiveDommage(int nbDegats)
{
    life -= nbDegats;


    if (life < 0)
    {
        life = 0;
    }
}

void Character::attack(Character &cible)
{
    int falseAttack = 55;
    
    cible.receiveDommage(falseAttack);
}

void Character::drinkPotion(int amountOfPotion)
{
    life += amountOfPotion;

    if (life > 100)
    {
        life = 100;
    }
}

bool Character::isAlive()
{
    return life > 0;
}