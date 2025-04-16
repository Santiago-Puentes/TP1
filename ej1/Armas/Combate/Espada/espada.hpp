#pragma once
#include "../deCombate.hpp"

class espada : public deCombate {
    public:
        espada(string n, int d, int l, const string t, int dam);
        int getDamage() override;
};