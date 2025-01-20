#include "Entidad.h"

void Entidad::mostrar(){
    cout << "INFO. DE LA ENTIDAD" << endl;
    cout << "ID: " << _id << endl;
    cout << "NOMBRE: " << _nombre << endl;
    cout << "FUERZA: " << _fuerza << endl;
    cout << "AGUANTE: " << _aguante << endl;
}

void Entidad::mostrarHabilidades() const{
    cout << "HABILIDADES DE " << _nombre << ": " << endl;
    for(size_t i = 0; i < _habilidades.size(); ++i){
        cout << i + 1 << ". ";
        _habilidades[i].mostrarHabilidad();
    }
}

void Entidad::setId(int id){
    _id = id;
}

void Entidad::setNombre(string nombre){
    _nombre = nombre;
}

void Entidad::setFuerza(int fuerza){
    _fuerza = fuerza;
}

void Entidad::setAguante(int aguante){
    _aguante = aguante;
}
