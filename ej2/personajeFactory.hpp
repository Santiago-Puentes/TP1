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

enum class Armas {
    AMULETO,
    LIBRO_DE_HECHIZOS,
    BASTON,
    POCION,
    ESPADA,
    GARROTE,
    HACHA_DOBLE,
    HACHA_SIMPLE,
    LANZA,
};

enum class Personajes {
    BÁRBARO,
    CABALLERO,
    PALADÍN,
    MERCENARIO,
    GLADIADOR,
    BRUJO,
    CONJURADOR,
    HECHIZERO,
    NIGROMANTE,
};

class PersonajeFactory {
    public:
        static shared_ptr<personaje> crearPersonaje(Personajes personaje);
        static shared_ptr<armas> crearArma(Armas arma);
        static shared_ptr<personaje> crearPersonajeConArma(Personajes personaje, pair<shared_ptr<armas>, shared_ptr<armas>> armas);
};