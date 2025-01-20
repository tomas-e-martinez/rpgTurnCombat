#include <iostream>

using namespace std;

int main()
{
    while(true){
        system("cls");
        cout << "MENU PRINCIPAL" << endl;
        cout << "1. Combate" << endl;
        cout << "2. Salir" << endl;
        int opcion;
        cin >> opcion;
        switch(opcion){
        case 1:
            cout << "(COMBATE)" << endl;
            system("pause");
            break;
        case 2:
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
