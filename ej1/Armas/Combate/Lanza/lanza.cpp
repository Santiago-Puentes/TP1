#include "lanza.hpp"

lanza::lanza(string n, int d, int l, const string t, int dam)
    : deCombate(n, d, l, t, dam) {}

int lanza::getDamage() {
    return damage;
}