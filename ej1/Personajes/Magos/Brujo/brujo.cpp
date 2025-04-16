#include "brujo.hpp"

brujo::brujo(string n, int hp, int lvl, const string t, int m, pair<unique_ptr<magicas>,unique_ptr<magicas>>& w)
    : magos(n, hp, lvl, t, m, w) {}

void brujo::gainHP() {
    HP = min(100,HP+(rand() % 21 + 10));
}

void brujo::loseHP() {
    HP -= rand() % 51;
}