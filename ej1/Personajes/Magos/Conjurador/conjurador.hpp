#pragma once
#include "../magos.hpp"

class conjurador : public magos {
    public:
        conjurador(string n, int hp, int lvl, const string t, int m, vector<shared_ptr<magicas>> w)
        : magos(n, hp,lvl, t, m, w) {}
        
        void gainHP() override {};
        void loseHP() override{};
    };