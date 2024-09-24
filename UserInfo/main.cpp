// escribe un programa que haga al usuario una serie de preguntas como
// calle, ciudad, estado y código postal y luego imprima la dirección del usuario
// usando este formato:
// ----------------------------------------------------------------------
// calle
// ciudad, estado, código postal.
// ----------------------------------------------------------------------
// Nombre de variables: (street), (city), (state), y (zipCode).

#include <iostream>

using namespace std;

int main() {
    string street;
    cout << "Street: " << endl;
    getline(cin, street);

    string city;
    cout << "City" << endl;
    getline(cin, city);

    string state;
    cout << "State: " << endl;
    getline(cin, state);

    string zipCode;
    cout << "Zip Code: " << endl;
    getline(cin, zipCode);

    cout << street << endl << city << ", " << state << ", " << zipCode << endl;
    return 0;
}