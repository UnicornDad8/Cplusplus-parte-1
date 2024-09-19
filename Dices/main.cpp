// Escribe un programa para lanzar dos dados.

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const unsigned short seed = time(nullptr);
    srand(seed);

    constexpr short minValue = 1;
    constexpr short maxValue = 6;

    const short dice1 = (rand() % (maxValue - minValue + 1)) + minValue;
    const short dice2 = (rand() % (maxValue - minValue + 1)) + minValue;

    cout << dice1 << ", " << dice2 << endl;
    return 0;
}