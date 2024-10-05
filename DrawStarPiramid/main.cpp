// Lección sobre loops anidados.
//
// Imprime una piramide de asteriscos, ingresa un número de filas
// y repite los asteriscos de acuerdo al número de filas de la piramide.
// ---------------------------------------------------------------------
// Ejemplo:
// ---------------------------------------------------------------------
// Input número de filas: 5
//
// *
// * *
// * * *
// * * * *
// * * * * * (fila 5, termina aquí)

#include <iostream>

using namespace std;

int main() {
    cout << "Filas: ";
    int filas;
    cin >> filas;
    
    for(int i = 1; i <= filas; i++) {
        for(int j = 0; j < i; j++)
            cout << "*";
            
        cout << endl;
    }
   
    return 0;
}
