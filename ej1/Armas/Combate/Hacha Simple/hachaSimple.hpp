#pragma once
#include "/home/colo_/.vscode/paradigmas_de_programacion/TP1/ej1/Armas/Combate/deCombate.hpp"

class hachaSimple : public deCombate {
    public:
        hachaSimple(string n, int d, int l, const string t, int dam) : deCombate("Hacha Simple", 100, 10, "Combate", 30) {}
        int getDamage() override {};
};