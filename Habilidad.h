#pragma once

#include <string>
#include <iostream>

using namespace std;

class Habilidad{
private:
    string _nombre;
    int _poder, _costo;
public:
    Habilidad(string nombre, int poder, int costo)
        : _nombre(nombre), _poder(poder), _costo(costo) {}

    const string getNombre() const {return _nombre;}
    int getPoder() const {return _poder;}
    int getCosto() const {return _costo;}

    void mostrarHabilidad() const;
};
