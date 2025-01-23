#include "Player.h"

void Player::mostrar() const{
    cout << "INFO. DE LA ENTIDAD" << endl;
    cout << "NOMBRE: " << _nombre << endl;
    cout << "FUERZA: " << _fuerza << endl;
    cout << "AGUANTE: " << _aguante << endl;
    cout << "EXPERIENCIA: " << _exp << "/" << _expMax << endl;
    cout << "ORO: " << _oro << endl;
}

void Player::ganarExp(int exp){
    _exp += exp;
    if(_exp >= _expMax)
        subirNivel();
}

void Player::subirNivel(){
    _exp -= _expMax;
    _expMax = _expMax * 1.2;
    _nivel++;
    _vidaMax += 5;
    _fuerza++;
    _aguante++;
    cout << "¡Felicitaciones, has subido al nivel " << _nivel << "!" << endl;
}

void Player::setExp(int exp){
    _exp = exp;
}

void Player::setExpMax(int expMax){
    _expMax = expMax;
}

void Player::setOro(int oro){
    _oro = oro;
}
