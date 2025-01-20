#pragma once

#include <string>
#include <iostream>

using namespace std;

class Entidad{
protected:
    int _id;
    int _fuerza, _aguante;
    string _nombre;
public:
    Entidad(int id = 0, string nombre = "SIN NOMBRE" , int fuerza = 1, int aguante = 1);

    void mostrar();

    int getId(){return _id;}
    string getNombre(){return _nombre;}
    int getFuerza(){return _fuerza;}
    int getAguante(){return _aguante;}

    void setId(int id);
    void setNombre(string nombre);
    void setFuerza(int fuerza);
    void setAguante(int aguante);
};
