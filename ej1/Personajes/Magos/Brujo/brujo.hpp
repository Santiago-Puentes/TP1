#pragma once
#include "../magos.hpp"

class brujo : public magos {
    public:
        brujo(string n, int hp, int lvl, const string t, int m, vector<shared_ptr<magicas>> w)
        : magos(n, hp, lvl, t, m, w) {}
        
        void gainHP() override {};
        void loseHP() override {};
};