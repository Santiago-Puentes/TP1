#include "caballero.hpp"

caballero::caballero(string n, int hp, int lvl, const string t, int m, pair<unique_ptr<deCombate>,unique_ptr<deCombate>>& w)
    : guerreros(n, hp, lvl, t, m, w) {}

void caballero::gainHP() {
    HP = min(100,HP+(rand() % 21 + 10));
}

void caballero::loseHP() {
    HP -= rand() % 51;
}