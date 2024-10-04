// Declara un número secreto. Pídele continuamente al usuario 
// que adivine el número secreto.

#include <iostream>

using namespace std;

int main() {
    int secret_number = 7;
    int user_number = 0;
    
    while(true) {
        cout << "Ingresa un número del 1 al 10: ";
        cin >> user_number;
        
        if(user_number < 1 || user_number > 10) {
            cout << "El número esta fuera del rango del 1 al 10" << endl;
            continue;
        }
        
        if(user_number == secret_number) {
            cout << "Adivinaste el número secreto." << endl;
            break;
        }
    }
   
    return 0;
}
