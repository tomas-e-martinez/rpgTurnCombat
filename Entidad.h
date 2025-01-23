#pragma once

#include <string>
#include <iostream>
#include <vector>
#include "Habilidad.h"

using namespace std;

class Entidad{
protected:
    int _id;
    string _nombre;
    int _fuerza, _aguante, _energia, _energiaMax;
    int _vida, _vidaMax;
    int _nivel;
    vector<Habilidad> _habilidades;
public:
    Entidad(int id = 0, string nombre = "SIN NOMBRE" , int fuerza = 1, int aguante = 1, int energia = 100, int energiaMax = 100, int nivel = 1)
        : _id(id), _nombre(nombre), _fuerza(fuerza), _aguante(aguante), _energia(energia), _energiaMax(energiaMax), _vida(100), _vidaMax(100), _nivel(nivel){
        _habilidades.emplace_back("Ataque Básico", 10, 0, 1);
        _habilidades.emplace_back("Vendaje", 5, 0, 2);
    }

    void mostrar();

    void agregarHabilidad(const Habilidad& habilidad){_habilidades.push_back(habilidad);}
    void mostrarHabilidades() const;
    int recibirDanio(int danio);
    int curar(int curacion);
    void usarHabilidad(Habilidad& habilidad, Entidad& enemigo);

    int getId(){return _id;}
    string getNombre(){return _nombre;}
    int getFuerza(){return _fuerza;}
    int getAguante(){return _aguante;}
    int getVida(){return _vida;}
    int getVidaMax(){return _vidaMax;}
    int getEnergia(){return _energia;}
    int getEnergiaMax(){return _energiaMax;}
    int getNivel(){return _nivel;}
    const vector<Habilidad>& getHabilidades() const{return _habilidades;}

    void setId(int id);
    void setNombre(string nombre);
    void setFuerza(int fuerza);
    void setAguante(int aguante);
    void setVida(int vida);
    void setVidaMax(int vidaMax);
    void setNivel(int nivel);
};
