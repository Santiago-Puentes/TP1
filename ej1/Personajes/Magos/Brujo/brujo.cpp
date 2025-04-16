#include "brujo.hpp"

void brujo::gainHP() {
    HP = min(100,HP+(rand() % 21 + 10));
}

void brujo::loseHP() {
    HP -= rand() % 51;
}