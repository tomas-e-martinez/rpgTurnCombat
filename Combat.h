#pragma once

#include "Player.h"
#include "Entity.h"

class Combat{
private:
    Player& _player;
    Entity& _enemy;
    bool _isActive;

    void playerTurn();
    void enemyTurn();

public:
    Combat(Player& player, Entity& enemy);
    void start();

};
