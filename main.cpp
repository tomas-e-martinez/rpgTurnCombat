#include <iostream>

using namespace std;

class Entity{
protected:
    string _name;
    int _level, _maxHP, _currentHP;

public:
    Entity(string nombre, int nivel, int maxHP){
        _name = nombre;
        _level = nivel;
        _maxHP = maxHP;
        _currentHP = maxHP;
    }
};

class Player : public Entity{
public:
    using Entity::Entity;

    void saludar(){
        cout << "Nombre: " << _name << " | Nivel: " << _level << endl;
        cout << _currentHP << "/" << _maxHP << " HP" << endl;
    }


};

int main()
{

    Player player1("Osalsad", 1, 100);
    player1.saludar();

    return 0;
}
