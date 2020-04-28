#pragma once
enum eWeapon
{
    DAGUE,
    EPEE,
    BAGUETTE,
    FLECHE

};

class Weapon
{
private:
    int physical_damage;
    int magic_damage;

    eWeapon m_eWeaponType;

public:
    void Repair(int p_iReparedPoints);
};
