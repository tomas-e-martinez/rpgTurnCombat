#pragma once

#include <string>
#include <vector>
#include "Entidad.h"

class Enemigo : public Entidad{
private:

public:
    using Entidad::Entidad;

    void generar(int nivelJugador);


};
