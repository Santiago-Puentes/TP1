#include "mercenario.hpp"

void mercenario::gainHP() {
    HP = min(100,HP+(rand() % 21 + 10));
}

void mercenario::loseHP() {
    HP -= rand() % 51;
}