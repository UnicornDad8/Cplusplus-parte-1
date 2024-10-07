// Hoy vamos a estudiar funciones
// -------------------------------------------------------------
// funcion saludar

#include <iostream>

using namespace std;

void saludar(string nombre) {
    cout << "Saludos " << nombre << endl;
}

string nombreCompleto(string nombre, string apellido) {
    return nombre + " " + apellido;
}

int main() {
    saludar(nombreCompleto("Cecilia", "Benitez"));
    
    cout << "Listo" << endl;
   
    return 0;
}
