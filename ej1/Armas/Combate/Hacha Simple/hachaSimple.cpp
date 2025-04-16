#include "hachaSimple.hpp"

hachaSimple::hachaSimple(string n, int d, int l, const string t, int dam)
    : deCombate(n, d, l, t, dam) {}

int hachaSimple::getDamage() {
    return damage;
}