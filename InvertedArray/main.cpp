/*
carga un arreglo de tipo string con 5 nombres, luego 
invierte el arreglo e imprime los nombres en forma descendente.
*/

#include <iostream>

using namespace std;

int main () {
    string nombres[6];

    cout << "Nombre 1: ";
    getline(cin, nombres[0]);
    cout << "\n\n";

    cout << "Nombre 2: ";
    getline(cin, nombres[1]);
    cout << "\n\n";

    cout << "Nombre 3: ";
    getline(cin, nombres[2]);
    cout << "\n\n";
    
    cout << "Nombre 4: ";
    getline(cin, nombres[3]);
    cout << "\n\n";
    
    cout << "Nombre 5: ";
    getline(cin, nombres[4]);
    cout << "\n";

    cout << "---------------------------------" << endl;
    int i;
    for(i = 0; i < sizeof(nombres)/sizeof(*nombres); i++) {
        cout << nombres[sizeof(nombres)/sizeof(*nombres) - i - 1] << " ";
    }
    
    return 0;
}