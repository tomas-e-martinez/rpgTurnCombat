#pragma once

#include <string>

using namespace std;

class Entidad{
protected:
    int _id;
    string _nombre;
public:
    Entidad(int id, string nombre);

    int getId(){return _id;}
    string getNombre(){return _nombre;}

    void setId(int id);
    void setNombre(string nombre);
};
