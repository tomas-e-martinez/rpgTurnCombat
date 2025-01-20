#include "Entidad.h"

Entidad::Entidad(int id, string nombre){
    _id = id;
    _nombre = nombre;
}

void Entidad::setId(int id){
    _id = id;
}

void Entidad::setNombre(string nombre){
    _nombre = nombre;
}
