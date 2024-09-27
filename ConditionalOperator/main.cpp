// Operador condicional
// compara la edad de un estudiante, si es mayor de edad, escribe un mensaje de graduacion
// sino un mensaje para que siga esforzandose. (usa el operador condicional).
// (expresion boleana) ? (verdadero) : (falso)

#include <iostream>

using namespace std;

int main() {
    int edad;
    cout << "Ingresa tu edad: ";
    cin >> edad;
    
    string mensaje = (edad >= 18) ? "Felicidades, tienes todas tus materias aprobadas, te graduaste"
                                  : "Sigue estudiando, ya te falta poco";

    cout << mensaje << endl;
    
    return 0;
}