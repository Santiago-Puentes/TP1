#include "magicas.hpp"

string magicas::getName() {
    return name;
}

string magicas::getType() {
    return type;
}

int magicas::getDurability() {
    return durability;
}

void magicas::repair() {
    durability = min(200,durability + 10);
}

int magicas::getDamage(bool special) {
    return special ? 30 : 15;
}

string magicas::getSpecialAttack() {
    return specialAttack;
}