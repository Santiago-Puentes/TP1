#include "personajeFactory.hpp"
#include <vector>

int randomNumber(int M,int m) {
    return (rand() % (M - m)) + m;
}

shared_ptr<deCombate> getArmaDeCombate() {
    switch(randomNumber(0,5)) {
        case 0: return PersonajeFactory::crearArmaDeCombate(Combate::ESPADA);
        case 1: return PersonajeFactory::crearArmaDeCombate(Combate::GARROTE);
        case 2: return PersonajeFactory::crearArmaDeCombate(Combate::HACHA_DOBLE);
        case 3: return PersonajeFactory::crearArmaDeCombate(Combate::HACHA_SIMPLE);
        case 4: return PersonajeFactory::crearArmaDeCombate(Combate::LANZA);
        default: return nullptr;
    }
}

shared_ptr<magicas> getArmaMagica() {
    switch(randomNumber(0,4)) {
        case 0: return PersonajeFactory::crearArmaMagica(Magicas::AMULETO);
        case 1: return PersonajeFactory::crearArmaMagica(Magicas::BASTON);
        case 2: return PersonajeFactory::crearArmaMagica(Magicas::LIBRO_DE_HECHIZOS);
        case 3: return PersonajeFactory::crearArmaMagica(Magicas::POCION);
        default: return nullptr;
    }
}

shared_ptr<guerreros> getPersonajeGuerrero(pair<shared_ptr<deCombate>, shared_ptr<deCombate>> armasDeCombate) {
    switch(randomNumber(0,5)) {
        case 0: return PersonajeFactory::crearPersonajeConArmaDeCombate(Guerreros::BÁRBARO, armasDeCombate);
        case 1: return PersonajeFactory::crearPersonajeConArmaDeCombate(Guerreros::CABALLERO, armasDeCombate);
        case 2: return PersonajeFactory::crearPersonajeConArmaDeCombate(Guerreros::GLADIADOR, armasDeCombate);
        case 3: return PersonajeFactory::crearPersonajeConArmaDeCombate(Guerreros::MERCENARIO, armasDeCombate);
        case 4: return PersonajeFactory::crearPersonajeConArmaDeCombate(Guerreros::PALADÍN, armasDeCombate);
        default: return nullptr;
    }
}

shared_ptr<magos> getPersonajeMago(pair<shared_ptr<magicas>, shared_ptr<magicas>> armasMagicas) {
    switch(randomNumber(0,4)) {
        case 0: return PersonajeFactory::crearPersonajeConArmaMagica(Magos::BRUJO, armasMagicas);
        case 1: return PersonajeFactory::crearPersonajeConArmaMagica(Magos::CONJURADOR, armasMagicas);
        case 2: return PersonajeFactory::crearPersonajeConArmaMagica(Magos::HECHIZERO, armasMagicas);
        case 3: return PersonajeFactory::crearPersonajeConArmaMagica(Magos::NIGROMANTE, armasMagicas);
        default: return nullptr;
    }
}

void printMagos(vector<shared_ptr<magos>> personajes) {
    for (const auto& personaje : personajes) {
        if (personaje) {
            cout << "Nombre: " << personaje->getName() << endl;
            cout << "Mana: " << personaje->getMana() << endl;
            cout << "Tipo: " << personaje->getType() << endl;
            cout << "HP: " << personaje->getHP() << endl;
            if (personaje->getWeapons()[0]) cout << "Arma 1: " << personaje->getWeapons()[0] << endl;
            if (personaje->getWeapons()[1]) cout << "Arma 2: " << personaje->getWeapons()[1] << endl;
        }
    }
}

void printGuerreros(vector<shared_ptr<guerreros>> personajes) {
    for (const auto& personaje : personajes) {
        if (personaje) {
            cout << "Nombre: " << personaje->getName() << endl;
            cout << "Mana: " << personaje->getMana() << endl;
            cout << "Tipo: " << personaje->getType() << endl;
            cout << "HP: " << personaje->getHP() << endl;
            if (personaje->getWeapons()[0]) cout << "Arma 1: " << personaje->getWeapons()[0] << endl;
            if (personaje->getWeapons()[1]) cout << "Arma 2: " << personaje->getWeapons()[1] << endl;
        }
    }
}

int main() {
    srand(time(0));

    int cantMagos = randomNumber(8,3);
    int cantGuerreros = randomNumber(8,3);

    vector<shared_ptr<magos>> losMagos;
    vector<shared_ptr<guerreros>> losGuerreros;

    for (int i = 0; i<cantMagos; i++) {
        int cantArmas = randomNumber(0,3);
        pair<shared_ptr<magicas>,shared_ptr<magicas>> armas;

        armas.first = (cantArmas > 0) ? getArmaMagica() : nullptr;
        armas.second = (cantArmas > 1) ? getArmaMagica() : nullptr;

        shared_ptr<magos> currPersonaje = getPersonajeMago(armas);
        if (currPersonaje) losMagos.push_back(currPersonaje);
    }

    for (int i = 0; i<cantGuerreros; i++) {
        int cantArmas = randomNumber(0,3);
        pair<shared_ptr<deCombate>,shared_ptr<deCombate>> armas;

        armas.first = (cantArmas > 0) ? getArmaDeCombate() : nullptr;
        armas.second = (cantArmas > 1) ? getArmaDeCombate() : nullptr;

        shared_ptr<guerreros> currPersonaje = getPersonajeGuerrero(armas);
        if (currPersonaje) losGuerreros.push_back(currPersonaje);
    }

    cout << "Personajes que salieron: " << endl;
    printMagos(losMagos);
    printGuerreros(losGuerreros);
}