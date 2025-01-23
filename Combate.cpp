#include "Combate.h"

void Combate::mostrarEstados(){
    cout << endl << _jugador.getNombre() << endl;
    cout << "HP: " << _jugador.getVida() << "/" << _jugador.getVidaMax() << endl;
    cout << "EN: " << _jugador.getEnergia() << "/" << _jugador.getEnergiaMax() << endl << endl;

    cout << _enemigo.getNombre() << endl;
    cout << "HP: " << _enemigo.getVida() << "/" << _enemigo.getVidaMax() << endl;
    cout << "EN: " << _enemigo.getEnergia() << "/" << _enemigo.getEnergiaMax() << endl << endl;
}

int Combate::turnoJugador(){
    cout << "ELIGE UNA ACCIÓN" << endl;
    vector<Habilidad> habilidadesJugador = _jugador.getHabilidades();
    for(size_t i = 0; i < habilidadesJugador.size(); i++){
        cout << i+1 << ". " << habilidadesJugador[i].mostrarHabilidad() << endl;
    }
    cout << endl;

    int opcion;
    cout << "OPCIÓN: ";
    cin >> opcion;

    if(opcion < 1 || opcion > habilidadesJugador.size()){
        cout << "OPCIÓN INVÁLIDA, INTENTE DE NUEVO." << endl;
        system("pause");
        return -1;
    }

    cout << "HABILIDAD ELEGIDA: " << habilidadesJugador[opcion-1].getNombre() << endl;
    system("pause");
    return 0;


}

void Combate::turnoEnemigo(){
    vector<Habilidad> habilidadesEnemigo = _enemigo.getHabilidades();
    int opcion = rand() % habilidadesEnemigo.size();
    cout << endl << _enemigo.getNombre() << " utilizó " << habilidadesEnemigo[opcion].getNombre() << endl;
    system("pause");
    return;
}

void Combate::iniciar(){
    while(_estaActivo){
        system("cls");
        cout << _jugador.getNombre() << " vs. " << _enemigo.getNombre() << endl;
        mostrarEstados();

        if(turnoJugador() == -1)
            continue;

        turnoEnemigo();
    }


}
