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
    public:

    void receiveDommage(int dommage);
    void attack(Character &target);
    void drinkPotion(int numberPotion);
    bool isAlive();

    private:

    int life;
    int armor;
    int magic_res;
};

#endif