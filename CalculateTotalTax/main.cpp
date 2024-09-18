// Los nombres de variables y valores estan entre parentesis.
// calcular el total a pagar de impuestos.
// dónde ventas (sales = 95000),
// el impuesto estatal es del 0.4% (stateTaxRate = 0.04) de las ventas.
// el impuesto del condado es el 0.2% de las ventas (countyTaxRate = 0.02).
// imprime los valores de (sales), (stateTax), y (countyTax).
// luego calcula el impuesto total (totalTax).

#include <iostream>

using namespace std;

int main() {
    double sales = 95000;
    cout << "Sales: $" << sales << endl;

    const double stateTaxRate = 0.04;
    double stateTax = sales * stateTaxRate;
    cout << "State Tax: $" << stateTax << endl;

    const double countyTaxRate = 0.02;
    double countyTax = sales * countyTaxRate;
    cout << "County Tax: $" << countyTax << endl;

    double totalTax = stateTax + countyTax;
    cout << "Total Tax: $" << totalTax << endl;

    return 0;
}