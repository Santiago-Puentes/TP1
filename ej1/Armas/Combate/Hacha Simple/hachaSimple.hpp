#pragma once
#include "../deCombate.hpp"

class hachaSimple : public deCombate {
    public:
        hachaSimple(string n, int d, int l, const string t, int dam);
        int getDamage() override;
};