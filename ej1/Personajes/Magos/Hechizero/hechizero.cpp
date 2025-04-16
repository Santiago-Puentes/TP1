#include "hechizero.hpp"

void hechizero::gainHP() {
    HP = min(100,HP+(rand() % 21 + 10));
}

void hechizero::loseHP() {
    HP -= rand() % 51;
}