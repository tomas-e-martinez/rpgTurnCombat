#include "Entity.h"

Entity::Entity(std::string nombre, int nivel, int maxHP){
        _name = nombre;
        _level = nivel;
        _maxHP = maxHP;
        _currentHP = maxHP;
}

