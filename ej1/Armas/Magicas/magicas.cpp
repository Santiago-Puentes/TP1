#include "magicas.hpp"

magicas::magicas(string n, int d, int l, const string t, int b, string SA, int SAD, string SAE)
    : name(n), durability(d), level(l), type(t), damage(b), 
      specialAttack(SA), specialAttackDamage(SAD), specialAttackEffect(SAE),
      specialEffect(SAE) {}

string magicas::getName() {
    return name;
}

string magicas::getType() {
    return type;
}

int magicas::getLevel() {
    return level;
}

int magicas::getDurability() {
    return durability;
}

void magicas::repair() {
    durability = 100;
}

int magicas::getDamage(bool special) {
    return special ? specialAttackDamage : damage;
}

string magicas::getSpecialAttack() {
    return specialAttack;
}