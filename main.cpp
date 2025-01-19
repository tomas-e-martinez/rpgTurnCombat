#include <iostream>

#include "Entity.h"
#include "Player.h"
#include "Combat.h"

using namespace std;

int main()
{

    Player player("Pirkew", 1, 100, 10, 25, 10);
    player.saludar();

    system("pause");

    Entity enemy1("Goblin", 1, 125, 5, 3, 3);

    Combat combat(player, enemy1);
    combat.start();

    player.saludar();

    return 0;
}
