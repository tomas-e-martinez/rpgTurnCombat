#include <iostream>
#include <ctime>
#include <locale.h>

#include "Habilidad.h"
#include "Entidad.h"
#include "Player.h"
#include "Enemigo.h"
#include "Combate.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    srand(time(0));

    Player jugador;
    while(true){
        system("cls");
        cout << "MENÚ PRINCIPAL" << endl;
        cout << "1. Combate" << endl;
        cout << "2. Crear personaje" << endl;
        cout << "3. Ver personaje" << endl;
        cout << "0. Salir" << endl;
        int opcion;
        cin >> opcion;
        switch(opcion){
        case 1:{
            Enemigo enemigo;
            enemigo.generar(jugador.getNivel());
            Combate combate(jugador, enemigo);
            combate.iniciar();
            system("pause");
            break;
        }
        case 2:{
            system("cls");
            cout << "(CREAR PERSONAJE)" << endl;
            cout << "NOMBRE: ";
            string nombre;
            cin >> nombre;
            jugador.setNombre(nombre);
            break;
        }
        case 3:
            system("cls");
            cout << "(VER PERSONAJE)" << endl;
            jugador.mostrar();
            system("pause");
            break;
        case 0:
            system("cls");
            cout << "(SALIR)" << endl;
            system("pause");
            return 0;
        default:
            cout << "ERROR: OPCIÓN INVALIDA" << endl;
            system("pause");
        }
    }

    return 0;
}
