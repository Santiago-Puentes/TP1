#pragma once
#include "/home/colo_/.vscode/paradigmas_de_programacion/TP1/ej1/Armas/Combate/deCombate.hpp"

class garrote : public deCombate {
    public:
        garrote(string n, int d, int l, const string t, int dam) : deCombate("Garrote", 100, 10, "Combate", 30) {}
        int getDamage() override {};
};