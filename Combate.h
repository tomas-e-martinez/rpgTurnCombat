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

    Entidad getJugador(){return _jugador;}
    Entidad getEnemigo(){return _enemigo;}
    bool getEstaActivo(){return _estaActivo;}

    void setEstaActivo(bool estaActivo){_estaActivo = estaActivo;}
};
