#pragma once
#include "../magicas.hpp"

class libroDeHechizos : public magicas {
    public:
        libroDeHechizos(string n, int d, int l, const string t, int dam, string SA, int SAD, string SAE);
        string getEffect() override;
};