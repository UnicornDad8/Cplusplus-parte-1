// Tiempo para un pequeño juego: Adivina el numero.
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const unsigned short seed = time(nullptr);
    srand(seed);
    short guess_oportunity = 6;

    constexpr short minValue = 1;
    constexpr short maxValue = 10;

    const short random_number = (rand() % (maxValue - minValue + 1)) + minValue;

    short user_number = 0;
    while(guess_oportunity > 0) {
        cout << "Escribe un numero del 1 al 10: ";
        cin >> user_number;
        guess_oportunity--;
        
        if(user_number < minValue) {
            cout << "El valor minimo es 1" << endl;
            continue;
        } else if(user_number > maxValue) {
            cout << "El valor maximo es 10" << endl;
            continue;
        } else if(user_number == random_number) {
            cout << "Adivinaste el numero" << endl;
            break;
        }
        
        if(guess_oportunity == 0) {
            cout << "Se te acabaron las oportunidades, vuelve a empezar" << endl;
            break;
        }
    }
    return 0;
}