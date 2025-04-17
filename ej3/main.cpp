#include "main.hpp"

int randomNumber(int M,int m) {
    return (rand() % (M - m)) + m;
}

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
    unique_ptr<magicas> arma1 = PersonajeFactory::crearArmaMagica(static_cast<Magicas>(eleccionArma));
    pair<unique_ptr<magicas>,unique_ptr<magicas>> armas1 = make_pair(move(arma1), nullptr);
    unique_ptr<magos> personajeArmado1 = PersonajeFactory::crearPersonajeConArmaMagica(static_cast<Magos>(eleccionPersonaje), armas1);
    int armaRandom = randomNumber(2,0);
    unique_ptr<deCombate> arma2 = PersonajeFactory::crearArmaDeCombate(static_cast<Combate>(armaRandom));
    pair<unique_ptr<deCombate>,unique_ptr<deCombate>> armas2 = make_pair(move(arma2), nullptr);
    unique_ptr<guerreros> personajeArmado2 = PersonajeFactory::crearPersonajeConArmaDeCombate(static_cast<Guerreros>(rand() % 4),armas2);

    while (personajeArmado1->getHP() > 0 && personajeArmado2->getHP() > 0) {

        cout << "\n" << personajeArmado1->getName() << " tiene " << personajeArmado1->getHP()
        << " HP y " << personajeArmado2->getName() << " tiene " << personajeArmado2->getHP() << " HP.\n";

        mostrarOpciones();
        int eleccion1;
        cin >> eleccion1;

        int eleccion2 = (rand() % 3) + 1;
        int resultado = calculateDamage(static_cast<Ataque>(eleccion1), static_cast<Ataque>(eleccion2));
        
        if (resultado == 10) {
            personajeArmado2 -> loseHP();
            cout << personajeArmado1->getName() << " ataca con " << personajeArmado1->getWeapons().first->getName()
                      << " y hace 10 puntos de daño a " << personajeArmado2->getName() << ".\n";
        } else if (resultado == -10) {
            personajeArmado1 -> loseHP();
            cout << personajeArmado2->getName() << " ataca con " << personajeArmado2->getWeapons().first->getName()
                      << " y hace 10 puntos de daño a " << personajeArmado1->getName() << ".\n";
        } else {
            cout << "Ambos eligieron la misma acción. ¡Empate! Sin daño.\n";
        }
    }
    if (personajeArmado1->getHP() <= 0) {
        cout << "Gana " << personajeArmado2->getName() << endl;
    } else {
        cout << "Gana " << personajeArmado1->getName() << endl;
    }

    } else {

    cout << "Eliga un Guerrero: (0) Espadachín, (1) Bárbaro, (2) Paladín, (3) Caballero" << endl;
    int eleccionPersonaje;
    cin >> eleccionPersonaje;
    cout << "Eliga arma para su personaje: (0) Espada, (1) Garrote, (2) Hacha Doble, (3) Hacha Simple, (4) Lanza" << endl;
    int eleccionArma;
    cin >> eleccionArma;
    unique_ptr<deCombate> arma1 = PersonajeFactory::crearArmaDeCombate(static_cast<Combate>(eleccionArma));
    pair<unique_ptr<deCombate>,unique_ptr<deCombate>> armas1 = make_pair(move(arma1), nullptr);
    unique_ptr<guerreros> personajeArmado1 = PersonajeFactory::crearPersonajeConArmaDeCombate(static_cast<Guerreros>(eleccionPersonaje), armas1);

    int armaRandom = randomNumber(2,0);
    unique_ptr<magicas> arma2 = PersonajeFactory::crearArmaMagica(static_cast<Magicas>(armaRandom));
    pair<unique_ptr<magicas>,unique_ptr<magicas>> armas2 = make_pair(move(arma2), nullptr);
    unique_ptr<magos> personajeArmado2 = PersonajeFactory::crearPersonajeConArmaMagica(static_cast<Magos>(randomNumber(4,0)),armas2);

    while (personajeArmado1->getHP() > 0 && personajeArmado2->getHP() > 0) {

        cout << "\n" << personajeArmado1->getName() << " tiene " << personajeArmado1->getHP()
        << " HP y " << personajeArmado2->getName() << " tiene " << personajeArmado2->getHP() << " HP.\n";

        mostrarOpciones();
        int eleccion1;
        cin >> eleccion1;

        int eleccion2 = (rand() % 3) + 1;
        int resultado = calculateDamage(static_cast<Ataque>(eleccion1), static_cast<Ataque>(eleccion2));
        
        if (resultado == 10) {
            personajeArmado2 -> loseHP();
            cout << personajeArmado1->getName() << " ataca con " << personajeArmado1->getWeapons().first->getName()
                      << " y hace 10 puntos de daño a " << personajeArmado2->getName() << ".\n";
        } else if (resultado == -10) {
            personajeArmado1 -> loseHP();
            cout << personajeArmado2->getName() << " ataca con " << personajeArmado2->getWeapons().first->getName()
                      << " y hace 10 puntos de daño a " << personajeArmado1->getName() << ".\n";
        } else {
            cout << "Ambos eligieron la misma acción. ¡Empate! Sin daño.\n";
        }
    }
    if (personajeArmado1->getHP() <= 0) {
        cout << "Gana " << personajeArmado2->getName() << endl;
    } else {
        cout << "Gana " << personajeArmado1->getName() << endl;
    }
    }
    return 0;
}
