#include "Combate.h"

void Combate::mostrarEstados(){
    cout << endl << _jugador.getNombre() << endl;
    cout << "HP: " << _jugador.getVida() << "/" << _jugador.getVidaMax() << endl << endl;
    cout << _enemigo.getNombre() << endl;
    cout << "HP: " << _enemigo.getVida() << "/" << _enemigo.getVidaMax() << endl << endl;;
}
