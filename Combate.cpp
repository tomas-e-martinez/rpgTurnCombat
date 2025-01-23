#include "Combate.h"

int Combate::calcularExp(){
    double exp = 100;
    for(int i = 1; i < _enemigo.getNivel(); i++){
        exp = exp + exp * 0.1;
    }

    int difNivel = _enemigo.getNivel() - _jugador.getNivel();

    exp = exp + difNivel * (exp * 0.1);

    return static_cast<int>(exp);
}

int Combate::calcularOro(){
    double oro = rand() % 50;

    for(int i = 1; i < _enemigo.getNivel(); i++){
        oro = oro + oro * 0.1;
    }

    return static_cast<int>(oro);
}

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

    if(_jugador.getEnergia() < habilidadesJugador[opcion-1].getCosto()){
        cout << "¡No tienes suficiente energía para usar " << habilidadesJugador[opcion-1].getNombre() << "!" << endl;
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

    while(_enemigo.getEnergia() < habilidadesEnemigo[opcion].getCosto() || (habilidadesEnemigo[opcion].getTipo() == 2 && _enemigo.getVida() == _enemigo.getVidaMax())) ///Si no tiene energía para esa habilidad, busca otra random.
        opcion = rand() % habilidadesEnemigo.size();

    cout << endl << _enemigo.getNombre() << " utilizó " << habilidadesEnemigo[opcion].getNombre() << endl;
    _enemigo.usarHabilidad(habilidadesEnemigo[opcion], _jugador);
    system("pause");
    return;
}

void Combate::iniciar(){
    _estaActivo = true;
    _jugador.setVida(_jugador.getVidaMax());
    while(_estaActivo){
        system("cls");
        cout << _jugador.getNombre() << " vs. " << _enemigo.getNombre() << endl;
        mostrarEstados();

        if(turnoJugador() == -1)
            continue;
        if(_jugador.getVida() == 0 || _enemigo.getVida() == 0){
            _estaActivo = false;
            break;
        }


        turnoEnemigo();
        if(_jugador.getVida() == 0 || _enemigo.getVida() == 0){
            _estaActivo = false;
            break;
        }
    }

        system("cls");
        cout << _jugador.getNombre() << " vs. " << _enemigo.getNombre() << endl;
        mostrarEstados();

        if(_jugador.getVida() == 0){
            cout << "¡Has sido derrotado por " << _enemigo.getNombre() << "!" << endl;
            return;
        }

        else{
            cout << "¡Derrotaste a " << _enemigo.getNombre() << "!" << endl;
            cout << "Has ganado " << calcularExp() << " puntos de experiencia." << endl;
            _jugador.ganarExp(calcularExp());
            cout << "Has obtenido " << calcularOro() << " de oro." << endl;
            cout << "Progreso de experiencia: " << _jugador.getExp() << "/" << _jugador.getExpMax() << endl;
            return;
        }
}
