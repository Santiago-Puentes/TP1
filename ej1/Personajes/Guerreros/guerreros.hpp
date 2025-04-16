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
        pair<unique_ptr<deCombate>,unique_ptr<deCombate>> weapons;
    public:
        guerreros(string n, int hp, int lvl, const string t, int m, pair<unique_ptr<deCombate>,unique_ptr<deCombate>> w)
        : name(n), HP(hp), level(lvl), type(t), mana(m), weapons(move(w)) {}
        string getName() override {};
        string getType() override {};
        int getMana() override {};
        int getHP() override {};
        virtual void gainHP() = 0;
        virtual void loseHP() = 0;
        bool addWeapon(unique_ptr<deCombate>& weapon) {};
        bool removeWeapon(unique_ptr<deCombate>& weapon) {};
        pair<unique_ptr<deCombate>,unique_ptr<deCombate>>& getWeapons() {};
};