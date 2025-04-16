#include "gladiador.hpp"

void gladiador::gainHP() {
    HP = min(100,HP+(rand() % 21 + 10));
}

void gladiador::loseHP() {
    HP -= rand() % 51;
}