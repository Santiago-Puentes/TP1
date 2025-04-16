#include "main.hpp"

int calculateDamage(Ataque a1, Ataque a2) {
    if (a1 == a2) return 0;
    if ((a1 == GOLPE_FUERTE && a2 == GOLPE_RAPIDO) ||
        (a1 == GOLPE_RAPIDO && a2 == DEFENSA_GOLPE) ||
        (a1 == DEFENSA_GOLPE && a2 == GOLPE_FUERTE)) {
        return 10;
    } else {
        return -10;
    }
}

void mostrarOpciones() {
    std::cout << "Su opción: (1) Golpe Fuerte, (2) Golpe Rápido, (3) Defensa y Golpe: ";
}

int main() {
    srand(time(nullptr));

    cout << "Eliga un tipo de personaje: (1) Mago, (2) Guerrero";
    int tipo1;
    cin >> tipo1;

    if (tipo1 == 1) {
    
    cout << "Eliga un Mago: (0) Brujo, (1) Conjurador, (2) Hechizero, (3) Nigromante";
    int eleccionPersonaje;
    cin >> eleccionPersonaje;
    cout << "Eliga arma para su personaje: (0) Amuleto, (1) Libro de Hechizos, (2) Bastón, (3) Poción" << endl;
    int eleccionArma;
    cin >> eleccionArma;
    auto arma = PersonajeFactory::crearArmaMagica(static_cast<Magicas>(eleccionArma));
    pair<unique_ptr<magicas>,unique_ptr<magicas>> armas1 = make_pair(arma, nullptr);
    unique_ptr<magos> personajeArmado1 = PersonajeFactory::crearPersonajeConArmaMagica(static_cast<Magos>(eleccionPersonaje), armas1);
    } else {

    cout << "Eliga un Guerrero: (0) Espadachín, (1) Bárbaro, (2) Paladín, (3) Caballero" << endl;
    int eleccionPersonaje;
    cin >> eleccionPersonaje;
    cout << "Eliga arma para su personaje: (0) Espada, (1) Garrote, (2) Hacha Doble, (3) Hacha Simple, (4) Lanza" << endl;
    int eleccionArma;
    cin >> eleccionArma;
    auto arma = PersonajeFactory::crearArmaDeCombate(static_cast<Combate>(eleccionArma));
    pair<unique_ptr<deCombate>,unique_ptr<deCombate>> armas1 = make_pair(arma, nullptr);
    unique_ptr<guerreros> personajeArmado1 = PersonajeFactory::crearPersonajeConArmaDeCombate(static_cast<Guerreros>(eleccionPersonaje), armas1);
    }

    

    auto jugador1 = tipo1 == 1 ? PersonajeFactory::crearMago(nroPersonaje);
    jugador1->setArma(PersonajeFactory::crearArma("espada"));

    auto jugador2 = PersonajeFactory::crearPersonajeAleatorio();
    jugador2->setArma(PersonajeFactory::crearArmaAleatoria());

    int hp1 = 100, hp2 = 100;

    while (hp1 > 0 && hp2 > 0) {
        cout << "\n" << jugador1->getNombre() << " tiene " << hp1
                  << " HP y " << jugador2->getNombre() << " tiene " << hp2 << " HP.\n";

        mostrarOpciones();
        int eleccion1;
        cin >> eleccion1;

        int eleccion2 = (rand() % 3) + 1;

        int resultado = calcularDanio(static_cast<Ataque>(eleccion1), static_cast<Ataque>(eleccion2));

        if (resultado == 10) {
            hp2 -= 10;
            std::cout << jugador1->getNombre() << " ataca con " << jugador1->getArma()->getNombre()
                      << " y hace 10 puntos de daño a " << jugador2->getNombre() << ".\n";
        } else if (resultado == -10) {
            hp1 -= 10;
            std::cout << jugador2->getNombre() << " ataca con " << jugador2->getArma()->getNombre()
                      << " y hace 10 puntos de daño a " << jugador1->getNombre() << ".\n";
        } else {
            std::cout << "Ambos eligieron la misma acción. ¡Empate! Sin daño.\n";
        }
    }

    if (hp1 <= 0)
        std::cout << jugador2->getNombre() << " gana la batalla!\n";
    else
        std::cout << jugador1->getNombre() << " gana la batalla!\n";

    return 0;
}
