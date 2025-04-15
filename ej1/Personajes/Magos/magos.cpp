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

void magos::gainHP() {
    HP = min(100,HP+(rand() % 36));
}

void magos::loseHP() {
    HP -= rand() % 51;
}

bool magos::addWeapon(shared_ptr<magicas> weapon) {
    if (weapons.size() < 2) {
        weapons.push_back(weapon);
        return true;
    }
    return false;
}

bool magos::removeWeapon(shared_ptr<magicas> weapon) {
    auto it = find(weapons.begin(), weapons.end(), weapon);
    if (it != weapons.end()) {
        weapons.erase(it);
        return true;
    }
    return false;
}

const vector<shared_ptr<magicas>>& magos::getWeapons() const {
    return weapons;
}