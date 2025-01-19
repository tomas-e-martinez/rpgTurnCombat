#pragma once

#include <iostream>
#include <string>

class Entity{
protected:
    std::string _name;
    int _level, _maxHP, _currentHP, _armor, _attack, _defense;

public:
    Entity(std::string nombre, int nivel, int maxHP, int armor = 0, int attack = 1, int defense = 0);

    void attack(Entity& entity);

    std::string getName() const { return _name; }
    int getCurrentHP() const { return _currentHP; }

    void setCurrentHP(int currentHP);
};
