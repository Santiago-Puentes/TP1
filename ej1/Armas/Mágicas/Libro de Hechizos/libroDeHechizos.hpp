#include "/home/colo_/.vscode/paradigmas_de_programacion/TP1/ej1/Armas/Mágicas/magicas.hpp"

class libroDeHechizos : public magicas {
    public:
        libroDeHechizos(string n, int d, int l, const string t, int dam, string SA, int SAD, string SAE)
        : magicas("Libro de Hechizos", 100, 10, "Mágica", 20, "Conjuro", 30, "Debilidad") {}

        string getEffect() override {};
};