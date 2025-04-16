#pragma once
#include "../armas.hpp"

class magicas : public armas {
    protected:
        string name;
        int durability;
        int level;
        const string type;
        int damage;
        string specialAttack;
        int specialAttackDamage;
        string specialAttackEffect;
        string specialEffect;
    public:
        magicas(string n, int d, int l, const string t, int b, string SA, int SAD, string SAE);
        string getName() override;
        string getType() override;
        int getLevel() override;
        int getDurability() override;
        void repair() override;
        int getDamage(bool special);
        string getSpecialAttack();
        virtual string getEffect() = 0;
        virtual ~magicas() = default;
};