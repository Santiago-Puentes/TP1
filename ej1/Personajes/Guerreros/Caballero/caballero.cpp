#include "caballero.hpp"

void caballero::gainHP() {
    HP = min(100,HP+(rand() % 21 + 10));
}

void caballero::loseHP() {
    HP -= rand() % 51;
}