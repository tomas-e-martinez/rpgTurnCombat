#include <iostream>

#include "Habilidad.h"
#include "Entidad.h"
#include "Combate.h"

using namespace std;

int main()
{
    Entidad jugador;
    Habilidad ataqueBasico("Ataque Basico", 10, 20);
    jugador.agregarHabilidad(ataqueBasico);
    while(true){
        system("cls");
        cout << "MENU PRINCIPAL" << endl;
        cout << "1. Combate" << endl;
        cout << "2. Crear personaje" << endl;
        cout << "3. Ver personaje" << endl;
        cout << "0. Salir" << endl;
        int opcion;
        cin >> opcion;
        switch(opcion){
        case 1:{
            system("cls");
            cout << "(COMBATE)" << endl;
            Entidad enemigo(1, "Monstruo", 5, 7);
            enemigo.agregarHabilidad(ataqueBasico);
            Habilidad habilidad("Golpe monstruoso", 15, 50);
            enemigo.agregarHabilidad(habilidad);
            Combate combate(jugador, enemigo);
            cout << "COMBATE ENTRE " << combate.getJugador().getNombre() << " Y " << combate.getEnemigo().getNombre() << endl;
            jugador.mostrarHabilidades();
            enemigo.mostrarHabilidades();
            system("pause");
            break;
        }
        case 2:{
            system("cls");
            cout << "(CREAR PERSONAJE)" << endl;
            cout << "NOMBRE: ";
            string nombre;
            cin >> nombre;
            int fuerza, aguante;
            cout << "FUERZA: ";
            cin >> fuerza;
            cout << "AGUANTE: ";
            cin >> aguante;

            jugador.setNombre(nombre);
            jugador.setFuerza(fuerza);
            jugador.setAguante(aguante);
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
            cout << "ERROR: OPCION INVALIDA" << endl;
            system("pause");
        }
    }

    return 0;
}
