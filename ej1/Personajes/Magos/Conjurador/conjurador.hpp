#include "./magos.hpp"

class conjurador : public magos {
    public:
        conjurador(string n, int hp, int lvl, const string t, int m, vector<shared_ptr<magicas>> w)
        : magos("Conjurador", 100, 20, "Mago", 25, {}) {}
        const vector<shared_ptr<magicas>>& getWeapons() const override {};
};