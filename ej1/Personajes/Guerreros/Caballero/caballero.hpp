#include "./guerreros.hpp"

class caballero : public guerreros {
    public:
        caballero(string n, int hp, int lvl, const string t, int m, vector<shared_ptr<deCombate>> w)
        : guerreros("Caballero", 100, 20, "Guerrero", 25, {}) {}
        const vector<shared_ptr<deCombate>>& getWeapons() const override {};
};