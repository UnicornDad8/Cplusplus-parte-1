// ahora vamos a dar condicionales anidados, un if dentro de otro if.
// -------------------------------------------------------------------------------
// eres ciudadano americano (US Citizen).
//   - eres residente de California, y asi tu colegiatura es 0.
//   - los no residentes de California deben pagar 1000 por su colegiatura.
// No eres ciudadano Americano, en este caso deberas pagar 3000 por tu colegiatura.

#include <iostream>

using namespace std;

int main() {
    bool isCitizen = true;
    bool caResident = true;
    short tuition = 0; // colegiatura

    // if de afuera
    if(isCitizen) {
        // if de adentro
        if(!caResident) tuition = 1000;
    }
    else tuition = 3000;

    cout << tuition << endl;
    
    return 0;
}