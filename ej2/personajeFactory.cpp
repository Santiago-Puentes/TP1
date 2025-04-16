#include "personajeFactory.hpp"

shared_ptr<magicas> PersonajeFactory::crearArmaMagica(Magicas armaMagica) {
    try {
        switch(armaMagica) {
            case Magicas::AMULETO: 
                return make_shared<amuleto>("Amuleto", 100, 10, "Mágica", 20, "Suerte", 30, "Ataques Precisos");
            case Magicas::BASTON:
                return make_shared<baston>("Bastón", 100, 10, "Mágica", 20, "Terremoto", 30, "Ataques Imprecisos");
            case Magicas::LIBRO_DE_HECHIZOS:
                return make_shared<libroDeHechizos>("Libro de Hechizos", 100, 10, "Mágica", 20, "Conjuro", 30, "Debilidad");
            case Magicas::POCION:
                return make_shared<pocion>("Poción", 100, 10, "Mágica", 20, "Veneno II", 30, "Veneno");
            default:
                return nullptr;
        }
    } catch (const bad_alloc& e) {
        cout << "Error al crear arma" << endl;
        return nullptr;
    }
}

shared_ptr<deCombate> PersonajeFactory::crearArmaDeCombate(Combate armaDeCombate) {
    try {
        switch(armaDeCombate) {
            case Combate::ESPADA:
                return make_shared<espada>("Espada", 100, 10, "Combate", 30);
            case Combate::GARROTE: 
                return make_shared<garrote>("Garrote", 100, 10, "Combate", 30);
            case Combate::HACHA_DOBLE:
                return make_shared<hachaDoble>("Hacha Doble", 100, 10, "Combate", 30);
            case Combate::HACHA_SIMPLE:
                return make_shared<hachaSimple>("Hacha Simple", 100, 10, "Combate", 30);
            case Combate::LANZA: 
                return make_shared<lanza>("Lanza", 100, 10, "Combate", 30);
            default:
                return nullptr;
        }
    } catch (const bad_alloc& e) {
        cout << "Error al crear arma" << endl;
        return nullptr;
    }
}

shared_ptr<magos> PersonajeFactory::crearPersonajeConArmaMagica(Magos personaje, pair<shared_ptr<magicas>, shared_ptr<magicas>> armasMagicas) {
    try {
        switch(personaje) {
            case Magos::BRUJO:
                return make_shared<brujo>("Brujo", 100, 20, "Mago", 25, armasMagicas);
            case Magos::CONJURADOR:
                return make_shared<conjurador>("Conjurador", 100, 20, "Mago", 25, armasMagicas);
            case Magos::HECHIZERO:
                return make_shared<hechizero>("Hechizero", 100, 20, "Mago", 25, armasMagicas);
            case Magos::NIGROMANTE:
                return make_shared<nigromante>("Nigromante", 100, 20, "Mago", 25, armasMagicas);
            default:
                return nullptr;
        }
    } catch (const bad_alloc& e) {
        cout << "Error al crear personajes" << endl;
        return nullptr;
    }
}

shared_ptr<guerreros> PersonajeFactory::crearPersonajeConArmaDeCombate(Guerreros personaje, pair<shared_ptr<deCombate>, shared_ptr<deCombate>> armasDeCombate) {
    try {
        switch(personaje) {
            case Guerreros::BÁRBARO:
                return make_shared<barbaro>("Bárbaro", 100, 20, "Guerrero", 25, armasDeCombate);
            case Guerreros::CABALLERO:
                return make_shared<caballero>("Caballero", 100, 20, "Guerrero", 25, armasDeCombate);
            case Guerreros::GLADIADOR:
                return make_shared<gladiador>("Gladiador", 100, 20, "Guerrero", 25, armasDeCombate);
            case Guerreros::MERCENARIO:
                return make_shared<mercenario>("Mercenario", 100, 20, "Guerrero", 25, armasDeCombate);
            case Guerreros::PALADÍN:
                return make_shared<paladin>("Paladín", 100, 20, "Guerrero", 25, armasDeCombate);
            default:
                return nullptr;
        }
    } catch (const bad_alloc& e) {
        cout << "Error al crear personajes" << endl;
        return nullptr;
    }
}

shared_ptr<personaje> PersonajeFactory::crearGuerrero(Guerreros personaje) {
    return crearPersonajeConArmaDeCombate(personaje,{nullptr,nullptr});
}

shared_ptr<personaje> PersonajeFactory::crearMago(Magos personaje) {
    return crearPersonajeConArmaMagica(personaje,{nullptr,nullptr});
}