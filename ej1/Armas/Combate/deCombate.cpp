#include "deCombate.hpp"

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