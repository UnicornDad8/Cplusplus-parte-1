// escribe código para intercambiar el valor de dos variables.

#include <iostream>

using namespace std;

int main() {
    int a = 1;
    int b = 2;

    const int temp = a;
    a = b;
    b = temp;

    cout << a;
    return 0;
}