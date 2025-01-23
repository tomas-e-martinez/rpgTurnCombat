#pragma once

#include "Entidad.h"
#include "Player.h"
#include "Enemigo.h"

class Combate{
private:
    Player& _jugador;
    Entidad& _enemigo;
    bool _estaActivo;
public:
    Combate(Player& jugador, Enemigo& enemigo)
        : _jugador(jugador), _enemigo(enemigo), _estaActivo(true){}

    void mostrarEstados();
    void iniciar();
    int turnoJugador(); ///SI NO TERMINA CORRECTAMENTE, DEVUELVE -1
    void turnoEnemigo();
    int calcularExp();
    int calcularOro();

    Entidad getJugador(){return _jugador;}
    Entidad getEnemigo(){return _enemigo;}
    bool getEstaActivo(){return _estaActivo;}

    void setEstaActivo(bool estaActivo){_estaActivo = estaActivo;}
};
