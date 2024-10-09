// Variables Locales VS Variables Globales
// -------------------------------------------------------------------------
// La premisa es: "intenta evitar las variables globales lo mas que puedas",
// asi evitaras muchos bugs y codigo disfuncional.
// por favor busca en google el significado de scope y lee este código
// despues de entender lo que es el scope global y el scope local.

#include <iostream>

using namespace std;

// variable global (global scope)
// para evitar bugs es mejor declarar tus variables globales como constantes
// ten en cuenta que esto significa que nuestras variables globales siempre son constantes
const double taxRate = .2;

double calcularImpuestos(int ventas) {
    return ventas * taxRate;
}

int main() {
    // variable local (local scope)
    int ventas = 10'000;
    
    double impuestos = calcularImpuestos(ventas);
    
    cout << impuestos << endl;
   
    return 0;
}
