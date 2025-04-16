#pragma once
#include "../deCombate.hpp"

class hachaDoble : public deCombate {
    public:
        hachaDoble(string n, int d, int l, const string t, int dam);
        int getDamage() override;
};