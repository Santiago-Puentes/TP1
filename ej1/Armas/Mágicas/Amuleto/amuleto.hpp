#include "/home/colo_/.vscode/paradigmas_de_programacion/TP1/ej1/Armas/Mágicas/magicas.hpp"

class amuleto : public magicas {
    public:
        amuleto(string n, int d, int l, const string t, int dam, string SA, int SAD, string SAE)
        : magicas("Amuleto", 100, 10, "Mágica", 20, "Suerte", 30, "Ataques Precisos") {}

        string getEffect() override {};
};