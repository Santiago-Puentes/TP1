#include "./guerreros.hpp"

class gladiador : public guerreros {
    public:
        gladiador(string n, int hp, int lvl, const string t, int m, vector<shared_ptr<deCombate>> w)
        : guerreros("Gladiador", 100, 20, "Guerrero", 25, {}) {}
        const vector<shared_ptr<deCombate>>& getWeapons() const override {};
};