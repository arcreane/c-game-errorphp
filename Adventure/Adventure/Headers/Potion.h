#pragma once


enum ePotionType
{
    POTION_RES,
    POTION_HEAL,
    POTION_ARMOR
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
