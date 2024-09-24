// usa un static cast para poder realizar la division.
// x = 10, y = 3
// z = x / y

#include <iostream>

using namespace std;

int main() {
    const int x = 10;
    const int y = 3;

    constexpr double z = static_cast<double>(x) / y;

    cout << z << endl;

    return 0;
}