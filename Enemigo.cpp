#include "Enemigo.h"

void Enemigo::generar(int nivelJugador){
    int difNivel = rand() % 5 - 2;
    setNivel(nivelJugador + difNivel);
    if(_nivel < 1)
        _nivel = 1;

    string nombres[5] = {"Orco", "Ogro", "Goblin", "Ladrón", "Asesino"};
    int tipo = rand() % 5;

    _nombre = nombres[tipo];

    switch(tipo){
    case 0: //Orco
        _fuerza = 3 + 1.1 * _nivel;
        _aguante = 3 + 1 * _nivel;
        _energia = _energiaMax = 90;
        _vida = _vidaMax = 90 + 3 * _nivel;
        break;
    case 1: //Ogro
        _fuerza = 4 + 1.2 * _nivel;
        _aguante = 3 + 1.3 * _nivel;
        _energia = _energiaMax = 70;
        _vida = _vidaMax = 105 + 5 * _nivel;
        break;
    case 2: //Goblin
        _fuerza = 2 + 1 * _nivel;
        _aguante = 1 + 1 * _nivel;
        _energia = _energiaMax = 110;
        _vida = _vidaMax = 80 + 3 * _nivel;
        break;
    case 3: //Ladrón
        _fuerza = 2 + 0.9 * _nivel;
        _aguante = 1 + 0.9 * _nivel;
        _energia = _energiaMax = 80;
        _vida = _vidaMax = 95 + 4 * _nivel;
        break;
    case 4: //Asesino
        _fuerza = 3 + 1.2 * _nivel;
        _aguante = 1 + 0.8 * _nivel;
        _energia = _energiaMax = 120;
        _vida = _vidaMax = 80 + 3 * _nivel;
        break;
    }
}
