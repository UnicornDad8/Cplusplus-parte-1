// Solicitar al usuario 3 nombres. Almacenar estos nombres en una matriz
// y luego imprimir el primer nombre.

#include <iostream>

using namespace std;

int main() {
    string nombres[3];

    cout << "Nombre 1: ";
    getline(cin, nombres[0]);
    cout << "\n\n";

    cout << "Nombre 2: ";
    getline(cin, nombres[1]);
    cout << "\n\n";

    cout << "Nombre 3: ";
    getline(cin, nombres[2]);
    cout << "\n";

    cout << "---------------------------------" << endl;
    cout << nombres[0] << endl;

    return 0;
}