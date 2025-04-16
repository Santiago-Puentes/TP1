#include "espada.hpp"

espada::espada(string n, int d, int l, const string t, int dam)
    : deCombate(n, d, l, t, dam) {}

int espada::getDamage() {
    return damage;
}