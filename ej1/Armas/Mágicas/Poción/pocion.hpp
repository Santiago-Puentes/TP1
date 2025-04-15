#include "/home/colo_/.vscode/paradigmas_de_programacion/TP1/ej1/Armas/Mágicas/magicas.hpp"

class pocion : public magicas {
    public:
        pocion(string n, int d, int l, const string t, int dam, string SA, int SAD, string SAE)
        : magicas("Poción", 100, 10, "Mágica", 20, "Veneno II", 30, "Veneno") {}

        string getEffect() override {};
};