enum eWeapons
{
    DAGUE,
    EPEE,
    BAGUETTE,
    FLECHE
};

enum ePotions
{
    POTION_RES,
    POTION_HEAL,
    POTION_ARMOR
};


class Weapons
{
    private: int physical_damage; int magic_damage;
};

class Potions
{
    private: int resistance; int life; int armor;
};
