#include "guerreros.hpp"

guerreros::guerreros(string n, int hp, int lvl, const string t, int m, pair<unique_ptr<deCombate>,unique_ptr<deCombate>>& w)
    : name(n), HP(hp), level(lvl), type(t), mana(m), weapons(w) {}

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
        weapons.first = std::move(weapon);
        return true;
    } else if (!weapons.second) {
        weapons.second = std::move(weapon);
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