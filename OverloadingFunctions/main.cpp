// Overloading Functions
// -------------------------------------------------------------
// para sobrecargar funciones, cada funcion debe tener una unica
// firma, es decir todos los parametros de la primera funcion
// deben aparecer en la funcion que sobrecarga los parametros.

#include <iostream>

using namespace std;

void saludar(string nombre) {
    cout << "Hola " << nombre << endl;
}

void saludar(string titulo, string nombre) {
    cout << "Hola " << titulo << " " << nombre << endl;
}

int main() {
    saludar("Ceci");
    saludar("Senior", "Ceci");
   
    return 0;
}
