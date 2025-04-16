#pragma once
#include "../magicas.hpp"

class baston : public magicas {
    public:
        baston(string n, int d, int l, const string t, int dam, string SA, int SAD, string SAE);
        string getEffect() override;
};