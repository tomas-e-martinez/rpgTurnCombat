#include <iostream>

#include "Combat.h"

Combat::Combat(Player& player, Entity& enemy)
    : _player(player), _enemy(enemy), _isActive(true) {}

void Combat::playerTurn(){
    system("cls");
    std::cout << "Es tu turno, que deseas hacer?" << std::endl;
    std::cout << "1. Atacar" << std::endl;
    std::cout << "2. Defender" << std::endl;
    int choice;
    std::cin >> choice;

    if(choice == 1)
        _player.attack(_enemy);
    else
        std::cout << _player.getName() << " se prepara para defenderse..." << std::endl;
}

void Combat::enemyTurn(){
    system("cls");
    std::cout << "Es el turno de " << _enemy.getName() << "..." << std::endl;
    system("pause");
    _enemy.attack(_player);
}

void Combat::start(){
    system("cls");
    std::cout << "Comienza el combate entre " << _player.getName() << " y " << _enemy.getName() << "!" << std::endl;
    system("pause");

    while(_isActive){
        playerTurn();
        system("pause");
        if(_enemy.getCurrentHP() <= 0){
            std::cout << _enemy.getName() << " ha sido derrotado!" << std::endl;
            _isActive = false;
            system("pause");
            break;
        }

        enemyTurn();
        system("pause");
        if(_player.getCurrentHP() <= 0){
            std::cout << "Fuiste derrotado por " << _enemy.getName() << "..." << std::endl;
            _isActive = false;
            system("pause");
            break;
        }
    }
}
