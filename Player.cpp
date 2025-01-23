#include "Player.h"

void Player::mostrar() const{
    cout << "INFO. DE LA ENTIDAD" << endl;
    cout << "NOMBRE: " << _nombre << endl;
    cout << "FUERZA: " << _fuerza << endl;
    cout << "AGUANTE: " << _aguante << endl;
    cout << "EXPERIENCIA: " << _exp << "/" << _expMax << endl;
    cout << "ORO: " << _oro << endl;
}
