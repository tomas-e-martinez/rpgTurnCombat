#pragma once

#include "Entidad.h"

class Combate{
private:
    Entidad& _jugador;
    Entidad& _enemigo;
public:
    Combate(Entidad& jugador, Entidad& enemigo)
        : _jugador(jugador), _enemigo(enemigo) {}

    Entidad getJugador(){return _jugador;}
    Entidad getEnemigo(){return _enemigo;}
};
