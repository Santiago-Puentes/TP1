#pragma once
#include "../magos.hpp"

class brujo : public magos {
    public:
        brujo(string n, int hp, int lvl, const string t, int m, pair<unique_ptr<magicas>,unique_ptr<magicas>>& w);
        
        void gainHP() override;
        void loseHP() override;
};