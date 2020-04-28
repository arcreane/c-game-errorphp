#include "Character.h"

using namespace std;

Character::Character(int p_iLife, int p_iArmor,int  p_iMagic)
    : life(p_iLife)
    , armor(p_iArmor)
    , magic_res(p_iMagic)
{

}


void Character::receiveDommage(int nbDegats)
{
    life -= nbDegats;


    if (life < 0)
    {
        life = 0;
    }
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