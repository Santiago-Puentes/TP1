#include "gladiador.hpp"

gladiador::gladiador(string n, int hp, int lvl, const string t, int m, pair<unique_ptr<deCombate>,unique_ptr<deCombate>>& w)
    : guerreros(n, hp, lvl, t, m, w) {}

void gladiador::gainHP() {
    HP = min(100,HP+(rand() % 21 + 10));
}

void gladiador::loseHP() {
    HP -= rand() % 51;
}