#include "./guerreros.hpp"

class mercenario : public guerreros {
    public:
        mercenario(string n, int hp, int lvl, const string t, int m, vector<shared_ptr<deCombate>> w)
        : guerreros("Mercenario", 100, 20, "Guerrero", 25, {}) {}
        const vector<shared_ptr<deCombate>>& getWeapons() const override {};
};