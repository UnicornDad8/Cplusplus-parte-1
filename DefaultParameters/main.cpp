// Taxes
// -------------------------------------------------------------
// Calcular impuestos

#include <iostream>

using namespace std;

// y recuerda que los parametros con un valor por defecto siempre van al final
double calcuarImpuestos(double ingresos, double taxRate = 0.2) {
    return ingresos * taxRate;
}

int main() {
    double default_tax = calcuarImpuestos(10'000);
    cout << default_tax << endl;
    
    double override_tax = calcuarImpuestos(12'000, 0.4);
    cout << override_tax << endl;
   
    return 0;
}
