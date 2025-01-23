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

    void ganarExp(int exp);
    void subirNivel();

    void mostrar() const override;

    int getExp(){return _exp;}
    int getExpMax(){return _expMax;}
    int getOro(){return _oro;}

    void setExp(int exp);
    void setExpMax(int expMax);
    void setOro(int oro);

};
