// write code to swap the value of two variables

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