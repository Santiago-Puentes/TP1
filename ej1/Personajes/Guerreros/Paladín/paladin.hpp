#include "./guerreros.hpp"

class paladin : public guerreros {
    public:
        paladin(string n, int hp, int lvl, const string t, int m, vector<shared_ptr<deCombate>> w)
        : guerreros("Paladín", 100, 20, "Guerrero", 25, {}) {}
        const vector<shared_ptr<deCombate>>& getWeapons() const override {};
};