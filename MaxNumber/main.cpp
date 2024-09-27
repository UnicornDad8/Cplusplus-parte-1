// Solicitar al usuario dos números. Almacenar el valor más grande en
// una variable separada e imprimirla.
// (usa el operador condicional para resolver este ejercicio).
// -------------------------------------------------------------------
// (condicion) ? verdadero : falso.

#include <iostream>

using namespace std;

int main() {
    cout << "Ingresa dos numeros: ";

    int a, b;
    cin >> a >> b;

    int max = (a > b) ? a : b;

    cout << max << endl;
    
    return 0;
}