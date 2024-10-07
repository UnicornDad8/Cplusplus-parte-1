// Hoy empezamos a estudiar funciones
// ------------------------------------------------------------------------
// Crea una función que recibe dos enteros y devuelve el máximo de los dos.

#include <iostream>

using namespace std;

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    cout << "Ingresa dos numeros enteros: ";
    int a, b;
    cin >> a >> b;
    
    cout << "maximo: " << max(a, b) << endl;
   
    return 0;
}
