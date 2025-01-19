#include "Entity.h"

Entity::Entity(std::string nombre, int nivel, int maxHP, int armor, int attack, int defense){
        _name = nombre;
        _level = nivel;
        _maxHP = maxHP;
        _currentHP = maxHP;
        _armor = armor;
        _attack = attack;
        _defense = defense;
}

void Entity::attack(Entity& entity){
    entity.setCurrentHP(entity.getCurrentHP() - _attack);
    std::cout << _name << " ataco a " << entity.getName() << " por " << _attack << " de danio!" << std::endl;
}

void Entity::setCurrentHP(int currentHP){
    _currentHP = currentHP;
}

