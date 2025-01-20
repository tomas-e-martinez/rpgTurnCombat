#include <iostream>

#include "Entidad.h"

using namespace std;

int main()
{
    Entidad entidad(0, "SIN NOMBRE");
    while(true){
        system("cls");
        cout << "MENU PRINCIPAL" << endl;
        cout << "1. Combate" << endl;
        cout << "2. Crear personaje"
        cout << "0. Salir" << endl;
        int opcion;
        cin >> opcion;
        switch(opcion){
        case 1:
            cout << "(COMBATE)" << endl;
            system("pause");
            break;
        case 2:
            cout << entidad.getId() << endl;
            cout << entidad.getNombre() << endl;
            cout << "(COMBATE)" << endl;
            system("pause");
            break;
        case 0:
            cout << "(SALIR)" << endl;
            system("pause");
            return 0;
        default:
            cout << "ERROR: OPCION INVALIDA" << endl;
            system("pause");
        }
    }

    return 0;
}
