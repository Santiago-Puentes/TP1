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

void guerreros::gainHP() {
    HP = min(100,HP+(rand() % 21 + 10));
}

void guerreros::loseHP() {
    HP -= rand() % 51;
}

bool guerreros::addWeapon(shared_ptr<deCombate> weapon) {
    if (weapons.size() < 2) {
        weapons.push_back(weapon);
        return true;
    }
    return false;
}

bool guerreros::removeWeapon(shared_ptr<deCombate> weapon) {
    auto it = find(weapons.begin(), weapons.end(), weapon);
    if (it != weapons.end()) {
        weapons.erase(it);
        return true;
    }
    return false;
}