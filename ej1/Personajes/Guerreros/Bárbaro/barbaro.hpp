#include "./guerreros.hpp"

class barbaro : public guerreros {
    public:
        barbaro(string n, int hp, int lvl, const string t, int m, vector<shared_ptr<deCombate>> w)
        : guerreros("Bárbaro", 100, 20, "Guerrero", 25, {}) {}
        const vector<shared_ptr<deCombate>>& getWeapons() const override {};
};