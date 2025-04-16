#include "conjurador.hpp"

void conjurador::gainHP() {
    HP = min(100,HP+(rand() % 21 + 10));
}

void conjurador::loseHP() {
    HP -= rand() % 51;
}