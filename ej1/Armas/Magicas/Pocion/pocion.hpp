#pragma once
#include "../magicas.hpp"

class pocion : public magicas {
    public:
        pocion(string n, int d, int l, const string t, int dam, string SA, int SAD, string SAE);
        string getEffect() override;
};