#include "magos.hpp"

string magos::getName() {
    return name;
}

string magos::getType() {
    return type;
}

int magos::getMana() {
    return mana;
}

int magos::getHP() {
    return HP;
}

bool magos::addWeapon(unique_ptr<magicas>& weapon) {
    if (!weapons.first) {
        weapons.first = move(weapon);
        return true;
    }
    if (!weapons.second) {
        weapons.second = move(weapon);
        return true;
    }
    return false;
}

bool magos::removeWeapon(unique_ptr<magicas>& weapon) {
    if (weapons.first && weapons.first == weapon) {
        weapons.first.reset();
        return true;
    }
    if (weapons.second && weapons.second == weapon) {
        weapons.second.reset();
        return true;
    }
    return false;
}

pair<unique_ptr<magicas>,unique_ptr<magicas>>& magos::getWeapons() {
    return weapons;
}