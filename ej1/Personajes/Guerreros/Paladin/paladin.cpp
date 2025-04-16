#include "paladin.hpp"

paladin::paladin(string n, int hp, int lvl, const string t, int m, pair<unique_ptr<deCombate>,unique_ptr<deCombate>>& w)
    : guerreros(n, hp, lvl, t, m, w) {}

void paladin::gainHP() {
    HP = min(100,HP+(rand() % 21 + 10));
}

void paladin::loseHP() {
    HP -= rand() % 51;
}