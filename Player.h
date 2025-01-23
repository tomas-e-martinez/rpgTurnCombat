#pragma once

#include <string>
#include <vector>
#include "Entidad.h"

using namespace std;

class Player : public Entidad{
private:
    int _exp, _expMax;
    int _oro;
public:
    Player(int id = 0, string nombre = "Jugador" , int fuerza = 5, int aguante = 2, int energia = 100, int energiaMax = 100, int nivel = 1)
        : Entidad(id, nombre, fuerza, aguante, energia, energiaMax, nivel), _exp(0), _expMax(100), _oro(0) {}

    void mostrar() const override;

};
