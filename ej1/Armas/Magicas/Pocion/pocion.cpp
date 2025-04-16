#include "pocion.hpp"

pocion::pocion(string n, int d, int l, const string t, int dam, string SA, int SAD, string SAE)
    : magicas(n, d, l, t, dam, SA, SAD, SAE) {}

string pocion::getEffect() {
    return specialEffect;
}