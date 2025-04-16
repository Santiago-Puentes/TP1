#pragma once
#include "personajes.hpp"
#include "../../Armas/Combate/deCombate.hpp"

class guerreros : public personaje {
    protected:
        string name;
        int HP;
        int level;
        const string type;
        int mana;
        vector<shared_ptr<deCombate>> weapons;
    public:
        guerreros(string n, int hp, int lvl, const string t, int m, vector<shared_ptr<deCombate>> w)
        : name(n), HP(hp), level(lvl), type(t), mana(m), weapons(w) {}
        string getName() override {};
        string getType() override {};
        int getMana() override {};
        int getHP() override {};
        virtual void gainHP() = 0;
        virtual void loseHP() = 0;
        bool addWeapon(shared_ptr<deCombate> weapon) {};
        bool removeWeapon(shared_ptr<deCombate> weapon) {};
        vector<shared_ptr<deCombate>>& getWeapons() {};
};