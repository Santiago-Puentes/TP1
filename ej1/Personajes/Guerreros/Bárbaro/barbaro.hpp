#pragma once
#include "../guerreros.hpp"

class barbaro : public guerreros {
    public:
        barbaro(string n, int hp, int lvl, const string t, int m, vector<shared_ptr<deCombate>> w)
        : guerreros(n, hp, lvl, t, m, w) {}
        
        void gainHP() override {};
        void loseHP() override {};
};