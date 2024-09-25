// El solicitante de empleo debe ser ciudadano estadounidense y tener
// un título universitario o al menos dos años de experiencia laboral.
// ------------------------------------------------------------------------------
// Nombres de variables: (isCitizen), (hasBachelorDegree), (yearsOfExperience),
// y (isEligible).

#include <iostream>

using namespace std;

int main() {
    constexpr bool isCitizen = true;
    constexpr bool hasBachelorDegree = false;
    constexpr short yearsOfExperience = 10;

    constexpr bool isEligible = isCitizen && (hasBachelorDegree || yearsOfExperience >= 2);
    cout << boolalpha << isEligible << endl;

    return 0;
}