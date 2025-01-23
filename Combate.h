#pragma once

#include "Entidad.h"

class Combate{
private:
    Entidad& _jugador;
    Entidad& _enemigo;
    bool _estaActivo;
public:
    Combate(Entidad& jugador, Entidad& enemigo)
        : _jugador(jugador), _enemigo(enemigo), _estaActivo(true){}

    void mostrarEstados();
    void iniciar();
    int turnoJugador(); ///SI NO TERMINA CORRECTAMENTE, DEVUELVE -1
    void turnoEnemigo();

    Entidad getJugador(){return _jugador;}
    Entidad getEnemigo(){return _enemigo;}
    bool getEstaActivo(){return _estaActivo;}

    void setEstaActivo(bool estaActivo){_estaActivo = estaActivo;}
};
