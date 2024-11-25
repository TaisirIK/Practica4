#include <iostream>
using namespace std;

int contadorLlamadas = 0;

int multiplicarNumeros(int a, int b){
    contadorLlamadas++;
    return a * b;
}

int obtenerContadorLlamadas(){
    return contadorLlamadas;
}

int main() {
    int opcion;
    do {
        cout<< "¿Que accion deseas realizar?" << endl;
        cout<< "1. Multiplicar numeros" << endl;
        cout<< "2. Ver cuantas veces fue llamada la funcion" << endl;
        cout<< "3. Salir" << endl;
        cin>> opcion;

        switch (opcion) {
            case 1: {
                int a, b;
                cout<< "Ingresa el primer numero: ";
                cin>> a;
                cout<< "Ingresa el segundo numero: ";
                cin>> b;
                int resultado = multiplicarNumeros(a, b);
                cout<< "Resultado de la multiplicacion: " << resultado << endl;
                break;
            }
            case 2:
                cout<< "La función 'multiplicarNumeros' fue llamada " << obtenerContadorLlamadas() << " veces." << endl;
                break;   
            case 3:
                cout<< "Saliendo del programa..." << endl;
                break;
            default:
                cout<< "Opcion invalida. Por favor, intenta de nuevo." << endl;
        }
    } while (opcion != 3);

    return 0;
}