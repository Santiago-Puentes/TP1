#include "personajeFactory.hpp"

unique_ptr<magicas> PersonajeFactory::crearArmaMagica(Magicas armaMagica) {
    try {
        switch(armaMagica) {
            case Magicas::AMULETO: 
                return make_unique<amuleto>("Amuleto", 100, 10, "Mágica", 20, "Suerte", 30, "Ataques Precisos");
            case Magicas::BASTON:
                return make_unique<baston>("Bastón", 100, 10, "Mágica", 20, "Terremoto", 30, "Ataques Imprecisos");
            case Magicas::LIBRO_DE_HECHIZOS:
                return make_unique<libroDeHechizos>("Libro de Hechizos", 100, 10, "Mágica", 20, "Conjuro", 30, "Debilidad");
            case Magicas::POCION:
                return make_unique<pocion>("Poción", 100, 10, "Mágica", 20, "Veneno II", 30, "Veneno");
            default:
                return nullptr;
        }
    } catch (const bad_alloc& e) {
        cout << "Error al crear arma" << endl;
        return nullptr;
    }
}

unique_ptr<deCombate> PersonajeFactory::crearArmaDeCombate(Combate armaDeCombate) {
    try {
        switch(armaDeCombate) {
            case Combate::ESPADA:
                return make_unique<espada>("Espada", 100, 10, "Combate", 30);
            case Combate::GARROTE: 
                return make_unique<garrote>("Garrote", 100, 10, "Combate", 30);
            case Combate::HACHA_DOBLE:
                return make_unique<hachaDoble>("Hacha Doble", 100, 10, "Combate", 30);
            case Combate::HACHA_SIMPLE:
                return make_unique<hachaSimple>("Hacha Simple", 100, 10, "Combate", 30);
            case Combate::LANZA: 
                return make_unique<lanza>("Lanza", 100, 10, "Combate", 30);
            default:
                return nullptr;
        }
    } catch (const bad_alloc& e) {
        cout << "Error al crear arma" << endl;
        return nullptr;
    }
}

unique_ptr<magos> PersonajeFactory::crearPersonajeConArmaMagica(Magos personaje, pair<unique_ptr<magicas>,unique_ptr<magicas>>& armasMagicas) {
    try {
        pair<unique_ptr<magicas>,unique_ptr<magicas>> armas;
        if (armasMagicas.first) armas.first = std::move(armasMagicas.first);
        if (armasMagicas.second) armas.second = std::move(armasMagicas.second);
        
        switch(personaje) {
            case Magos::BRUJO:
                return make_unique<brujo>("Brujo", 100, 20, "Mago", 25, armas);
            case Magos::CONJURADOR:
                return make_unique<conjurador>("Conjurador", 100, 20, "Mago", 25, armas);
            case Magos::HECHIZERO:
                return make_unique<hechizero>("Hechizero", 100, 20, "Mago", 25, armas);
            case Magos::NIGROMANTE:
                return make_unique<nigromante>("Nigromante", 100, 20, "Mago", 25, armas);
            default:
                return nullptr;
        }
    } catch (const bad_alloc& e) {
        cout << "Error al crear personajes" << endl;
        return nullptr;
    }
}

unique_ptr<guerreros> PersonajeFactory::crearPersonajeConArmaDeCombate(Guerreros personaje, pair<unique_ptr<deCombate>,unique_ptr<deCombate>>& armasDeCombate) {
    try {
        pair<unique_ptr<deCombate>,unique_ptr<deCombate>> armas;
        if (armasDeCombate.first) armas.first = std::move(armasDeCombate.first);
        if (armasDeCombate.second) armas.second = std::move(armasDeCombate.second);

        switch(personaje) {
            case Guerreros::BÁRBARO:
                return make_unique<barbaro>("Bárbaro", 100, 20, "Guerrero", 25, armas);
            case Guerreros::CABALLERO:
                return make_unique<caballero>("Caballero", 100, 20, "Guerrero", 25, armas);
            case Guerreros::GLADIADOR:
                return make_unique<gladiador>("Gladiador", 100, 20, "Guerrero", 25, armas);
            case Guerreros::MERCENARIO:
                return make_unique<mercenario>("Mercenario", 100, 20, "Guerrero", 25, armas);
            case Guerreros::PALADÍN:
                return make_unique<paladin>("Paladín", 100, 20, "Guerrero", 25, armas);
            default:
                return nullptr;
        }
    } catch (const bad_alloc& e) {
        cout << "Error al crear personajes" << endl;
        return nullptr;
    }
}

unique_ptr<personaje> PersonajeFactory::crearGuerrero(Guerreros personaje) {
    pair<unique_ptr<deCombate>, unique_ptr<deCombate>> armasDeCombate = {nullptr,nullptr};
    return crearPersonajeConArmaDeCombate(personaje, armasDeCombate);
}

unique_ptr<personaje> PersonajeFactory::crearMago(Magos personaje) {
    pair<unique_ptr<magicas>, unique_ptr<magicas>> armasMagicas = {nullptr, nullptr};
    return crearPersonajeConArmaMagica(personaje, armasMagicas);
}