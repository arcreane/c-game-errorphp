#pragma once

enum eWeapons
{
    DAGUE,
    EPEE,
    BAGUETTE,
    FLECHE
   
};

enum ePotionType
{
    POTION_RES,
    POTION_HEAL,
    POTION_ARMOR
};


class Weapons
{
    private: 
        int physical_damage; 
        int magic_damage;

};

class Potions
{
    private: 
       
        ePotionType mPotionType;
        int resistance; 
        int life; 
        int armor;

    public:
         void setPotionType();
        void getPotionType();
        void createPotion();
};
