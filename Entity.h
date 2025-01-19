#pragma once

#include <string>

class Entity{
protected:
    std::string _name;
    int _level, _maxHP, _currentHP;

public:
    Entity(std::string nombre, int nivel, int maxHP);
};
