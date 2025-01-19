#pragma once

#include <iostream>

#include "Entity.h"

class Player : public Entity{
private:
    int _experience, _maxExperience, _gold;

public:
    Player(std::string nombre, int nivel, int maxHP, int armor, int attack, int defense);
    void saludar();
    void ganarExperiencia(int xp);
    void subirNivel();
};
