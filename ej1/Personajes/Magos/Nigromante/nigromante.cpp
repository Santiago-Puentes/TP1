#include "nigromante.hpp"

nigromante::nigromante(string n, int hp, int lvl, const string t, int m, pair<unique_ptr<magicas>,unique_ptr<magicas>>& w)
    : magos(n, hp, lvl, t, m, w) {}

void nigromante::gainHP() {
    HP = min(100,HP+(rand() % 21 + 10));
}

void nigromante::loseHP() {
    HP -= rand() % 51;
}