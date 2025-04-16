#pragma once
#include "/home/colo_/.vscode/paradigmas_de_programacion/TP1/ej1/Armas/Combate/deCombate.hpp"

class hachaDoble : public deCombate {
    public:
        hachaDoble(string n, int d, int l, const string t, int dam) : deCombate("Hacha Doble", 100, 10, "Combate", 30) {}
        int getDamage() override {};
};