#include "armas.hpp"

class deCombate : public armas {
    protected:
        string name;
        int durability;
        int level;
        const string type;
        int damage;
    public:
        deCombate(string n, int d, int l, const string t, int dam)
        : name(n), durability(d), level(l), type(t), damage(dam) {}
        string getName() override {};
        int getLevel() override {};
        string getType() override {};
        int getDurability() override {};
        void repair() override {};
        virtual int getDamage() = 0;
};