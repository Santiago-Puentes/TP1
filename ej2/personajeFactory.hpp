#pragma once
#include "../ej1/Armas/Magicas/Amuleto/amuleto.hpp"
#include "../ej1/Armas/Magicas/Baston/baston.hpp"
#include "../ej1/Armas/Magicas/Libro de Hechizos/libroDeHechizos.hpp"
#include "../ej1/Armas/Magicas/Pocion/pocion.hpp"

#include "../ej1/Armas/Combate/Espada/espada.hpp"
#include "../ej1/Armas/Combate/Garrote/garrote.hpp"
#include "../ej1/Armas/Combate/Hacha Doble/hachaDoble.hpp"
#include "../ej1/Armas/Combate/Hacha Simple/hachaSimple.hpp"
#include "../ej1/Armas/Combate/Lanza/lanza.hpp"

#include "../ej1/Personajes/Guerreros/Barbaro/barbaro.hpp"
#include "../ej1/Personajes/Guerreros/Caballero/caballero.hpp"
#include "../ej1/Personajes/Guerreros/Gladiador/gladiador.hpp"
#include "../ej1/Personajes/Guerreros/Mercenario/mercenario.hpp"
#include "../ej1/Personajes/Guerreros/Paladin/paladin.hpp"

#include "../ej1/Personajes/Magos/Brujo/brujo.hpp"
#include "../ej1/Personajes/Magos/Conjurador/conjurador.hpp"
#include "../ej1/Personajes/Magos/Hechizero/hechizero.hpp"
#include "../ej1/Personajes/Magos/Nigromante/nigromante.hpp"

#include <random>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <utility>
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
        static unique_ptr<personaje> crearGuerrero(Guerreros personaje);
        static unique_ptr<personaje> crearMago(Magos personaje);
        static unique_ptr<magicas> crearArmaMagica(Magicas armaMagica);
        static unique_ptr<deCombate> crearArmaDeCombate(Combate armaDeCombate);
        static unique_ptr<magos> crearPersonajeConArmaMagica(Magos personaje, pair<unique_ptr<magicas>,unique_ptr<magicas>>& armasMagicas);
        static unique_ptr<guerreros> crearPersonajeConArmaDeCombate(Guerreros personaje, pair<unique_ptr<deCombate>,unique_ptr<deCombate>>& armasDeCombate);
};