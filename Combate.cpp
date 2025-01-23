#include "Combate.h"

void Combate::mostrarEstados(){
    cout << endl << _jugador.getNombre() << " (NIVEL " << _jugador.getNivel() << ")" << endl;
    cout << "HP: " << _jugador.getVida() << "/" << _jugador.getVidaMax() << endl;
    cout << "EN: " << _jugador.getEnergia() << "/" << _jugador.getEnergiaMax() << endl << endl;

    cout << _enemigo.getNombre() << " (NIVEL " << _enemigo.getNivel() << ")" << endl;
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

    cout << endl << "Utilizaste " << habilidadesJugador[opcion-1].getNombre() << endl;
    _jugador.usarHabilidad(habilidadesJugador[opcion-1], _enemigo);
    system("pause");
    return 0;


}

void Combate::turnoEnemigo(){
    vector<Habilidad> habilidadesEnemigo = _enemigo.getHabilidades();
    int opcion = rand() % habilidadesEnemigo.size();
    cout << endl << _enemigo.getNombre() << " utilizó " << habilidadesEnemigo[opcion].getNombre() << endl;
    _enemigo.usarHabilidad(habilidadesEnemigo[opcion], _jugador);
    system("pause");
    return;
}

void Combate::iniciar(){
    _estaActivo = true;
    while(_estaActivo){
        system("cls");
        cout << _jugador.getNombre() << " vs. " << _enemigo.getNombre() << endl;
        mostrarEstados();

        if(turnoJugador() == -1)
            continue;
        if(_jugador.getVida() == 0 || _enemigo.getVida() == 0){
            _estaActivo == false;
            break;
        }


        turnoEnemigo();
        if(_jugador.getVida() == 0 || _enemigo.getVida() == 0){
            _estaActivo == false;
            break;
        }
    }

        system("cls");
        cout << _jugador.getNombre() << " vs. " << _enemigo.getNombre() << endl;
        mostrarEstados();
}
