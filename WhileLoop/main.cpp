//
//  main.cpp
//  WhileLoop
//
//  Created by Ceci Benitez on 4/Oct/24.
// -----------------------------------------------------------------------------------------
// Declara un número secreto. Pídele continuamente al usuario que adivine el número secreto.

#include <iostream>

using namespace std;

int main() {
    int secret_number = 7;
    int user_number = 0;
    
    while(true) {
        cout << "Ingresa un numero del 1 al 10: ";
        cin >> user_number;
        
        if(user_number == secret_number) {
            cout << "Adivinaste el numero secreto." << endl;
            break;
        }
    }
   
    return 0;
}
