// Parametros por valor o por referencia
// -------------------------------------------------------------
// pasar argumentos por valor o por referencia, parametros
// por referencia se refieren a los parametros pasados sin
// tomar copias de otras variables.
// referencia => string& nombre (observar el amperson)

#include <iostream>

using namespace std;

void saludar(const string& nombre) {
    cout << "Hola " << nombre << endl;
    
    // para evitar sobreescribir la referencia la podemos declarar como constante
    // nombre = "a";
}

int main() {
    string nombre = "Ceci Benitez";
    saludar(nombre);
   
    return 0;
}

  