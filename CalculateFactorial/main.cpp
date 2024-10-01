// Pedirle al usuario un número entero y positivo. Imprimir el factorial
// de ese número.
// imprimir un error si el numero es negativo.
// ----------------------------------------------------------------------
// tip: resolver usando un for loop.

#include <iostream>

using namespace std;

int main() {
    cout << "Ingresa un número entero y positivo: ";
    int n;
    cin >> n;  // usar n igual a: (n = -1), (n = 0), (n = 1), (n = 2), (n = 3), (n = 10)

    if(n < 0)
        cout << "Error, el número que ingreso no es positivo" << endl;
    else {
        int factorial = 1;

        for(int i = 1; i <= n; i++) {
            factorial *= i;
        }

        cout << "el factorial de " << n << " es: " << factorial << endl;
    }

    return 0;
}