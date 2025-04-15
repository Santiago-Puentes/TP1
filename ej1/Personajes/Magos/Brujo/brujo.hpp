#include "./magos.hpp"

class brujo : public magos {
    public:
        brujo(string n, int hp, int lvl, const string t, int m, vector<shared_ptr<magicas>> w)
        : magos("Brujo", 100, 20, "Mago", 25, {}) {}
        const vector<shared_ptr<magicas>>& getWeapons() const override {};
};