#include "hachaDoble.hpp"

hachaDoble::hachaDoble(string n, int d, int l, const string t, int dam)
    : deCombate(n, d, l, t, dam) {}

int hachaDoble::getDamage() {
    return damage;
}