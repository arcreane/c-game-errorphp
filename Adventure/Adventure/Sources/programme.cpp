#include <iostream>
#include "Character.h"
#include "Donjon.h"

int main() {
  //  Potions newPotion;
  //  newPotion.createPotion();

    Donjon* naheulbeuk = new Donjon();
    Hero* Conan = new Hero("Conan");
    naheulbeuk->EnterDonjon(Conan);
    return 0;
}