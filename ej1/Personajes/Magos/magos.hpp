#pragma once
#include "../personajes.hpp"
#include "../../Armas/Magicas/magicas.hpp"

class magos : public personaje {
    protected:
        string name;
        int HP;
        int level;
        const string type;
        int mana;
        pair<unique_ptr<magicas>,unique_ptr<magicas>>& weapons;
    public:
        magos(string n, int hp, int lvl, const string t, int m, pair<unique_ptr<magicas>,unique_ptr<magicas>>& w)
        : name(n), HP(hp), level(lvl), type(t), mana(m), weapons(w) {}
        string getName() override;
        string getType() override;
        int getMana() override;
        int getHP() override;
        virtual void gainHP() = 0;
        virtual void loseHP() = 0;
        bool addWeapon(unique_ptr<magicas> weapon);
        bool removeWeapon(unique_ptr<magicas> weapon);
        const pair<unique_ptr<magicas>,unique_ptr<magicas>>& getWeapons() const;
};