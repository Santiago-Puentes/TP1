#pragma once
#include "../magos.hpp"

class conjurador : public magos {
    public:
        conjurador(string n, int hp, int lvl, const string t, int m, pair<unique_ptr<magicas>,unique_ptr<magicas>> w)
        : magos(n, hp,lvl, t, m, move(w)) {}
        
        void gainHP() override {};
        void loseHP() override{};
    };