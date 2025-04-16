#include "libroDeHechizos.hpp"

libroDeHechizos::libroDeHechizos(string n, int d, int l, const string t, int dam, string SA, int SAD, string SAE)
    : magicas(n, d, l, t, dam, SA, SAD, SAE) {}

string libroDeHechizos::getEffect() {
    return specialEffect;
}