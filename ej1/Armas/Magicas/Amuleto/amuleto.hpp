#pragma once
#include "../magicas.hpp"

class amuleto : public magicas {
    public:
        amuleto(string n, int d, int l, const string t, int dam, string SA, int SAD, string SAE);
        string getEffect() override;
        virtual ~amuleto() = default;
};