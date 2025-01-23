#include "Habilidad.h"

string Habilidad::mostrarHabilidad() const{
    return _nombre + " (Poder: " + to_string(_poder) + ", Costo: " + to_string(_costo) + ")";
}
