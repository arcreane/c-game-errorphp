#ifndef DEF_CHARACTER
#define DEF_CHARACTER

#include <string>

enum eEnemy
{
    WARRIOR,
    WIZARD,
    THIEF,
    DRAGON,
    MAX_VALUE
};

 class Character
{
protected :
    Character(int p_iLife, int p_iArmor, int p_iMagic);

    public:

    void receiveDommage(int dommage);
    void drinkPotion(int numberPotion);
    bool isAlive();

    virtual void attack(Character& target) = 0;

    private:

    int life;
    int armor;
    int magic_res;
};

#endif