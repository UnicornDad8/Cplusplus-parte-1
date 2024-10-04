// Ingresa un numero por consola excluyendo el rango del 1 al 5: rango [1, 5].
// ---------------------------------------------------------------------------
// usa un do-while loop.

#include <iostream>

using namespace std;

int main() {
    int number;
    
    do {
        cout << "Number: ";
        cin >> number;
    } while(number < 1 || number > 5);
   
    return 0;
}
