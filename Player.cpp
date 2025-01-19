#include "Player.h"


Player::Player(std::string nombre, int nivel, int maxHP, int armor, int attack, int defense):
    Entity(nombre, nivel, maxHP, armor, attack, defense)
{
    _experience = 0;
    _maxExperience = 100;
    _gold = 0;
}

void Player::saludar(){
        std::cout << "Nombre: " << _name << " | Nivel: " << _level << std::endl;
        std::cout << _currentHP << "/" << _maxHP << " HP" << std::endl;
        std::cout << "Armadura: " << _armor << " | Defensa: " << _defense << std::endl;
        std::cout << _experience << "/" << _maxExperience << " XP" << std::endl;
        std::cout << "Ataque: " << _attack << " | Oro: " << _gold << std::endl;
}

void Player::ganarExperiencia(int xp){
    _experience += xp;
    while(_experience > _maxExperience)
        subirNivel();
}

void Player::subirNivel(){
    _experience -= _maxExperience;
    _level++;
    _maxExperience *= 1.1;
    _maxHP += 5;
    _attack++;
    _defense++;
}
