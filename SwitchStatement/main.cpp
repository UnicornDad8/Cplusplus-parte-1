// Cree una calculadora básica. Pídale al usuario dos números y
// un operador. Luego, imprima el resultado de aplicar el operador a
// esos números.
// ------------------------------------------------------------------
// Haga uso del (switch) statement.

#include <iostream>

using namespace std;

int main() {
    cout << "Ingresa dos numeros: ";
    int a, b;
    cin >> a >> b;

    cout << "Ingresa un operador matemático: ";
    char operador;
    cin >> operador;

    switch(operador) {
        case '+':
            cout << a + b << endl;
            break;
        case '-':
            cout << a - b << endl;
            break;
        case '*':
            cout << a * b << endl;
            break;
        case '/':
            cout << static_cast<double>(a) / static_cast<double>(b) << endl;
            break;
        default:
            cout << "Operador invalido" << endl;
    }
    
    return 0;
}