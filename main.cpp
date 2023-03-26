#include <iostream>
#include "Archivo.h"

using namespace std;
int main() {
    int opcion;
    cout << "Ingrese la opcion" ;
    cin >> opcion;


    switch (opcion) {
        case 1:
            ejercicio1();
            break;

        case 2:
            ejercicio2();
            break;


        case 3:
            ejercicio3();
            break;

        case 4:
            ejercicio4();
            break;

        case 5:
            ejercicio5();
            break;

        case 6:
            ejercicio6();
            break;

        case 7:
            ejercicio7();
            break;
    }
    return 0;
    }

