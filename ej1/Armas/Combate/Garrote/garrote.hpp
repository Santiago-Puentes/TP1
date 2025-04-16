#pragma once
#include "../deCombate.hpp"

class garrote : public deCombate {
    public:
        garrote(string n, int d, int l, const string t, int dam);
        int getDamage() override;
};