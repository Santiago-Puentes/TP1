#pragma once
#include "../guerreros.hpp"

class mercenario : public guerreros {
    public:
        mercenario(string n, int hp, int lvl, const string t, int m, pair<unique_ptr<deCombate>,unique_ptr<deCombate>>& w);
        
        void gainHP() override;
        void loseHP() override;
};