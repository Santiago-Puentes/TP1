#include "paladin.hpp"

void paladin::gainHP() {
    HP = min(100,HP+(rand() % 21 + 10));
}

void paladin::loseHP() {
    HP -= rand() % 51;
}