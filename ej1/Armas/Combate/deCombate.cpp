#include "deCombate.hpp"

deCombate::deCombate(string n, int d, int l, const string t, int dam)
    : name(n), durability(d), level(l), type(t), damage(dam) {}

string deCombate::getName() {
    return name;
}

int deCombate::getLevel() {
    return level;
}

string deCombate::getType() {
    return type;
}

int deCombate::getDurability() {
    return durability;
}

void deCombate::repair() {
    durability = min(200, durability + 10);
}