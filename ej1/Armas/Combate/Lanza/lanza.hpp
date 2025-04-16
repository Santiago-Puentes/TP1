#pragma once
#include "../deCombate.hpp"

class lanza : public deCombate {
    public:
        lanza(string n, int d, int l, const string t, int dam);
        int getDamage() override;
};