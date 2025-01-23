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

int Entidad::recibirDanio(int danio){
    danio = danio - _aguante;
    setVida(_vida - danio);
    if(_vida < 0)
        _vida = 0;

    return danio;
}

int Entidad::curar(int curacion){
    setVida(_vida + curacion);
    if(_vida > _vidaMax)
        _vida = _vidaMax;

    return curacion;
}

void Entidad::usarHabilidad(Habilidad& habilidad, Entidad& enemigo){
    int tipo = habilidad.getTipo();
    if(tipo == 1){
        cout << habilidad.getNombre() << " infligió " << enemigo.recibirDanio(habilidad.getPoder()) << " de daño a " << enemigo.getNombre() << endl;
    }
    if(tipo == 2){
        cout << habilidad.getNombre() << " se curó " << curar(habilidad.getPoder()) << " puntos de vida." << endl;
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

void Entidad::setVida(int vida){
    _vida = vida;
}

void Entidad::setVidaMax(int vidaMax){
    _vidaMax = vidaMax;
}

void Entidad::setNivel(int nivel){
    _nivel = nivel;
}
