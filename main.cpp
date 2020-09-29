/*
Ejercicio 17. Escriba un programa que pida constantemente números hasta que se ingrese el nú-
mero cero e imprima en pantalla el mayor de todos los números ingresados.
Ej: si se ingresan 1, 2, 3, 0 se debe imprimir:
El numero mayor fue: 3
*/

#include <iostream>
using namespace std;

int main(){

    int numero_mayor = 0;
    while (true){

        int numero_ingresado;
        cout << "Ingrese el numero: ";
        cin >> numero_ingresado;

        if(numero_ingresado == 0){
            cout << "El numero mayor fue: " << numero_mayor << endl;
            break;
        }

        else{

            if(numero_ingresado > numero_mayor){
                numero_mayor = numero_ingresado;
            }

            else{
                continue;
            }
        }
    }

    return 0;
}
