#include "mercenario.hpp"

mercenario::mercenario(string n, int hp, int lvl, const string t, int m, pair<unique_ptr<deCombate>,unique_ptr<deCombate>>& w)
    : guerreros(n, hp, lvl, t, m, w) {}

void mercenario::gainHP() {
    HP = min(100,HP+(rand() % 21 + 10));
}

void mercenario::loseHP() {
    HP -= rand() % 51;
}