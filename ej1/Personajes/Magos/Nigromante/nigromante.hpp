#include "./magos.hpp"

class nigromante : public magos {
    public:
        nigromante(string n, int hp, int lvl, const string t, int m, vector<shared_ptr<magicas>> w)
        : magos("Nigromante", 100, 20, "Mago", 25, {}) {}
        const vector<shared_ptr<magicas>>& getWeapons() const override {};
};