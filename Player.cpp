#include "Player.h"

void Player::saludar(){
        std::cout << "Nombre: " << _name << " | Nivel: " << _level << std::endl;
        std::cout << _currentHP << "/" << _maxHP << " HP" << std::endl;
    }
