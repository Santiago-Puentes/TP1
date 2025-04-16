#include "garrote.hpp"

garrote::garrote(string n, int d, int l, const string t, int dam)
    : deCombate(n, d, l, t, dam) {}

int garrote::getDamage() {
    return damage;
}