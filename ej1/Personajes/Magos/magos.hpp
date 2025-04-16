#pragma once
#include "personajes.hpp"
#include "../../Armas/Mágicas/magicas.hpp"

class magos : public personaje {
    protected:
        string name;
        int HP;
        int level;
        const string type;
        int mana;
        vector<shared_ptr<magicas>> weapons;
    public:
        magos(string n, int hp, int lvl, const string t, int m, vector<shared_ptr<magicas>> w)
        : name(n), HP(hp), level(lvl), type(t), mana(m), weapons(w) {}
        string getName() override {};
        string getType() override {};
        int getMana() override {};
        int getHP() override {};
        virtual void gainHP() = 0;
        virtual void loseHP() = 0;
        bool addWeapon(shared_ptr<magicas> weapon) {};
        bool removeWeapon(shared_ptr<magicas> weapon) {};
        vector<shared_ptr<magicas>>& getWeapons() {};    
};