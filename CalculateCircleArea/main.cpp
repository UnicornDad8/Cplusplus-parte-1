// Escribe un programa para calcular el área de un círculo.
// variables: (radius), (pi), (circle_area)

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << "Enter radius: ";
    int radius;
    cin >> radius;

    /*
    * constexpr:
    * - Su tipo debe ser un LiteralType
    * - Debe inicializarse inmediatamente
    * - La expresión completa de su inicialización, incluidas todas las conversiones implícitas,
    *   llamadas a constructores, etc., debe ser una expresión constante
    */

    constexpr double pi = 3.14;

    double circle_area = pi * pow(radius, 2);

    cout << circle_area << endl;

    return 0;
}