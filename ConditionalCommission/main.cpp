// Utilice esta tabla para establecer la comisión en función de las ventas.
// ---------------------------------------
// |Ventas                |Comisión      |
// ---------------------------------------
// |Hasta: $10.000        |     10%      |
// ---------------------------------------
// |De $10.000 a $15.000  |     15%      |
// ---------------------------------------
// |Arriba de: $15.000    |     20%      |
// ---------------------------------------

#include <iostream>

using namespace std;

int main() {
    int sales;
    cout << "Ingrese el valor de las ventas: ";
    cin >> sales; // intente con estos valores: 11'000, 10'000, 15'000, 15'001
    double commission;

    if(sales <= 10'000)
        commission = 0.10;
    else if (sales <= 15'000)
        commission = 0.15;
    else
        commission = 0.20;

    cout << commission << endl;
    return 0;
}