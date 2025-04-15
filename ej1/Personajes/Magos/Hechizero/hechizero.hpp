#include "./magos.hpp"

class hechizero : public magos {
    public:
        hechizero(string n, int hp, int lvl, const string t, int m, vector<shared_ptr<magicas>> w)
        : magos("Hechizero", 100, 20, "Mago", 25, {}) {}
        const vector<shared_ptr<magicas>>& getWeapons() const override {};
};