#include "baston.hpp"

baston::baston(string n, int d, int l, const string t, int dam, string SA, int SAD, string SAE)
    : magicas(n, d, l, t, dam, SA, SAD, SAE) {}

string baston::getEffect() {
    return specialEffect;
}