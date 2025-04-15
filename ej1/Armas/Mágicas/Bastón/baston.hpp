#include "/home/colo_/.vscode/paradigmas_de_programacion/TP1/ej1/Armas/Mágicas/magicas.hpp"

class baston : public magicas {
    public:
        baston(string n, int d, int l, const string t, int dam, string SA, int SAD, string SAE)
        : magicas("Bastón", 100, 10, "Mágica", 20, "Terremoto", 30, "Ataques Imprecisos") {}

        string getEffect() override {};
};