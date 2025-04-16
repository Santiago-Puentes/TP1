#pragma once
#include "../ej1/Armas/Mágicas/Amuleto/amuleto.hpp"
#include "../ej1/Armas/Mágicas/Bastón/baston.hpp"
#include "../ej1/Armas/Mágicas/Libro de Hechizos/libroDeHechizos.hpp"
#include "../ej1/Armas/Mágicas/Poción/pocion.hpp"

#include "../ej1/Armas/Combate/Espada/espada.hpp"
#include "../ej1/Armas/Combate/Garrote/garrote.hpp"
#include "../ej1/Armas/Combate/Hacha Doble/hachaDoble.hpp"
#include "../ej1/Armas/Combate/Hacha Simple/hachaSimple.hpp"
#include "../ej1/Armas/Combate/Lanza/lanza.hpp"

#include "../ej1/Personajes/Guerreros/Bárbaro/barbaro.hpp"
#include "../ej1/Personajes/Guerreros/Caballero/caballero.hpp"
#include "../ej1/Personajes/Guerreros/Gladiador/gladiador.hpp"
#include "../ej1/Personajes/Guerreros/Mercenario/mercenario.hpp"
#include "../ej1/Personajes/Guerreros/Paladín/paladin.hpp"

#include "../ej1/Personajes/Magos/Brujo/brujo.hpp"
#include "../ej1/Personajes/Magos/Conjurador/conjurador.hpp"
#include "../ej1/Personajes/Magos/Hechizero/hechizero.hpp"
#include "../ej1/Personajes/Magos/Nigromante/nigromante.hpp"

#include <memory>
#include <string>
#include <iostream>
#include <random>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

enum class Magicas {
    AMULETO,
    LIBRO_DE_HECHIZOS,
    BASTON,
    POCION,
};

enum class Combate {
    ESPADA,
    GARROTE,
    HACHA_DOBLE,
    HACHA_SIMPLE,
    LANZA,
};

enum class Guerreros {
    BÁRBARO,
    CABALLERO,
    PALADÍN,
    MERCENARIO,
    GLADIADOR,
};

enum class Magos {
    BRUJO,
    CONJURADOR,
    HECHIZERO,
    NIGROMANTE,
};

class PersonajeFactory {
    public:
        static shared_ptr<personaje> crearGuerrero(Guerreros personaje);
        static shared_ptr<personaje> crearMago(Magos personaje);
        static shared_ptr<magicas> crearArmaMagica(Magicas armaMagica);
        static shared_ptr<deCombate> crearArmaDeCombate(Combate armaDeCombate);
        static shared_ptr<magos> crearPersonajeConArmaMagica(Magos personaje, pair<shared_ptr<magicas>, shared_ptr<magicas>> armasMagicas);
        static shared_ptr<guerreros> crearPersonajeConArmaDeCombate(Guerreros personaje, pair<shared_ptr<deCombate>, shared_ptr<deCombate>> armasDeCombate);
};