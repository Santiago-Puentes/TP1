#pragma once
#include "../guerreros.hpp"

class gladiador : public guerreros {
    public:
        gladiador(string n, int hp, int lvl, const string t, int m, pair<unique_ptr<deCombate>,unique_ptr<deCombate>> w)
        : guerreros(n, hp, lvl, t, m, move(w)) {}
        
        void gainHP() override {};
        void loseHP() override {};
};