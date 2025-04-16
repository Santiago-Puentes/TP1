#include "guerreros.hpp"

string guerreros::getName() {
    return name;
}

string guerreros::getType() {
    return type;
}

int guerreros::getMana() {
    return mana;
}

int guerreros::getHP() {
 return HP;
}

bool guerreros::addWeapon(unique_ptr<deCombate>& weapon) {
    if (!weapons.first) {
        weapons.first = move(weapon);
        return true;
    } else if (!weapons.second) {
        weapons.second = move(weapon);
        return true;
    }
    return false;
}

bool guerreros::removeWeapon(unique_ptr<deCombate>& weapon) {
    if (weapons.first && weapons.first == weapon) {
        weapons.first.reset();
        return true;
    } else if (weapons.second && weapons.second == weapon) {
        weapons.second.reset();
        return true;
    }
    return false;
}

pair<unique_ptr<deCombate>,unique_ptr<deCombate>>& guerreros::getWeapons() {
    return weapons;
}