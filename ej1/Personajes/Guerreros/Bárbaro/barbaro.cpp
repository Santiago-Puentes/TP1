#include "barbaro.hpp"

void barbaro::gainHP() {
    HP = min(100,HP+(rand() % 21 + 10));
}

void barbaro::loseHP() {
    HP -= rand() % 51;
}