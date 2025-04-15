#include "personajeFactory.hpp"

shared_ptr<armas> PersonajeFactory::crearArma(Armas armas) {
    try {
        switch(armas) {
            case Armas::AMULETO: 
                return make_shared<amuleto>("Amuleto", 100, 10, "Mágica", 20, "Suerte", 30, "Ataques Precisos");
            case Armas::BASTON:
                return make_shared<baston>("Bastón", 100, 10, "Mágica", 20, "Terremoto", 30, "Ataques Imprecisos");
            case Armas::ESPADA:
                return make_shared<espada>("Espada", 100, 10, "Combate", 30);
            case Armas::GARROTE: 
                return make_shared<garrote>("Garrote", 100, 10, "Combate", 30);
            case Armas::HACHA_DOBLE:
                return make_shared<hachaDoble>("Hacha Doble", 100, 10, "Combate", 30);
            case Armas::HACHA_SIMPLE:
                return make_shared<hachaSimple>("Hacha Simple", 100, 10, "Combate", 30);
            case Armas::LANZA: 
                return make_shared<lanza>("Lanza", 100, 10, "Combate", 30);
            case Armas::LIBRO_DE_HECHIZOS:
                return make_shared<libroDeHechizos>("Libro de Hechizos", 100, 10, "Mágica", 20, "Conjuro", 30, "Debilidad");
            case Armas::POCION:
                return make_shared<pocion>("Poción", 100, 10, "Mágica", 20, "Veneno II", 30, "Veneno");
            default:
                return nullptr;
        }
    } catch (const bad_alloc& e) {
        cout << "Error al crear arma" << endl;
        return nullptr;
    }
}

shared_ptr<personaje> PersonajeFactory::crearPersonajeConArma(Personajes personaje, pair<shared_ptr<armas>, shared_ptr<armas>> armas) {
    try {
        switch(personaje) {
            case Personajes::BRUJO:
                return make_shared<brujo>("Brujo", 100, 20, "Mago", 25, armas);
            case Personajes::BÁRBARO:
                return make_shared<barbaro>("Bárbaro", 100, 20, "Guerrero", 25, armas);
            case Personajes::CABALLERO:
                return make_shared<caballero>("Caballero", 100, 20, "Guerrero", 25, armas);
            case Personajes::CONJURADOR:
                return make_shared<conjurador>("Conjurador", 100, 20, "Mago", 25, armas);
            case Personajes::GLADIADOR:
                return make_shared<gladiador>("Gladiador", 100, 20, "Guerrero", 25, armas);
            case Personajes::HECHIZERO:
                return make_shared<hechizero>("Hechizero", 100, 20, "Mago", 25, armas);
            case Personajes::MERCENARIO:
                return make_shared<mercenario>("Mercenario", 100, 20, "Guerrero", 25, armas);
            case Personajes::NIGROMANTE:
                return make_shared<nigromante>("Nigromante", 100, 20, "Mago", 25, armas);
            case Personajes::PALADÍN:
                return make_shared<paladin>("Paladín", 100, 20, "Guerrero", 25, armas);
            default:
                return nullptr;
        }
    } catch (const bad_alloc& e) {
        cout << "Error al crear personajes" << endl;
        return nullptr;
    }
}

shared_ptr<personaje> PersonajeFactory::crearPersonaje(Personajes personaje) {
    return crearPersonajeConArma(personaje,{nullptr,nullptr});
}