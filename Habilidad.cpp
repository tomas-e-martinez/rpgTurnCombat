#include "Habilidad.h"

void Habilidad::mostrarHabilidad() const{
    cout << _nombre << " (Poder: " << _poder << ", Costo: " << _costo << ")\n";
}
