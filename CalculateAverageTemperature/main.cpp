//
//  main.cpp
//  CalculateAverageTemperature
//
//  Created by Ceci Benitez on 4/Oct/24.
// ----------------------------------------------------------------------
// Dada una lista de temperaturas, escriba el código para calcular la
// temperatura promedio.

#include <iostream>

using namespace std;

int main() {
    int temperatures[] = { 60, 80, 90 };
    double sum = 0;
    double average = 0;
    short length = sizeof(temperatures) / sizeof(int);
    
    for(int temp: temperatures) {
        sum += temp;
    }
    
    average = sum / length;
    cout << average << endl;
    
    return 0;
}
