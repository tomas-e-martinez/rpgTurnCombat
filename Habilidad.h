#pragma once

#include <string>
#include <iostream>

using namespace std;

class Habilidad{
private:
    string _nombre;
    int _poder, _costo;
    int _tipo; /// 1. Ataque, 2. Curación
public:
    Habilidad(string nombre, int poder, int costo, int tipo)
        : _nombre(nombre), _poder(poder), _costo(costo), _tipo(tipo) {}

    const string getNombre() const {return _nombre;}
    int getPoder() const {return _poder;}
    int getCosto() const {return _costo;}
    int getTipo() const {return _tipo;}

    string mostrarHabilidad() const;
};
