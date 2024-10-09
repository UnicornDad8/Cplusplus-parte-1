// Declarando funciones
// -------------------------------------------------------------------------
// definir una funcion y declarar una funcion son dos conceptos diferentes
// todas las funciones deben ser declaradas antes de la funcion "main" o
// funcion principal, pero las definiciones de las funciones pueden ir
// despues de la funcion principal.

#include <iostream>

using namespace std;

// las declaraciones no tienen cuerpo definido {}
void saludar(string nombre); // a esta linea se le llama "Function Declaration" o "Function Prototype"

int main() {
    saludar("Ceci");
   
    return 0;
}


// Esta parte si es la definicion de una funcion, "Function Definition"
// y si tiene cuerpo { lo que va aqui entre llaves }
void saludar(string nombre) {
    cout << "Saludos " << nombre << endl;
}

