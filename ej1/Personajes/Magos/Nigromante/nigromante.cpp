#include "nigromante.hpp"

void nigromante::gainHP() {
    HP = min(100,HP+(rand() % 21 + 10));
}

void nigromante::loseHP() {
    HP -= rand() % 51;
}