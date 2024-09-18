// Escribe un programa para convertir una temperatura de (fahrenheit) a (celsius)

#include <iostream>

using namespace std;

int main() {
    cout << "Fahrenheit: ";
    int fahrenheit;
    cin >> fahrenheit;

    const double celsius = (fahrenheit - 32) / 1.8;
    cout << celsius << endl;

    return 0;
}