#pragma once

#include <string>
#include <iostream>
#include <vector>
#include "Habilidad.h"

using namespace std;

class Entidad{
protected:
    int _id;
    int _fuerza, _aguante, _energia, _energiaMaxima;
    string _nombre;
    vector<Habilidad> _habilidades;
public:
    Entidad(int id = 0, string nombre = "SIN NOMBRE" , int fuerza = 1, int aguante = 1, int energia = 100, int energiaMaxima = 100);

    void mostrar();

    void agregarHabilidad(const Habilidad& habilidad){_habilidades.push_back(habilidad);}
    void mostrarHabilidades() const;

    int getId(){return _id;}
    string getNombre(){return _nombre;}
    int getFuerza(){return _fuerza;}
    int getAguante(){return _aguante;}

    void setId(int id);
    void setNombre(string nombre);
    void setFuerza(int fuerza);
    void setAguante(int aguante);
};
