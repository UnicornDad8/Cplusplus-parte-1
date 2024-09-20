// Aprendamos un poco sobre manipulacion de tablas
// con la libreria <iomanip>.
//
// Escribe un programa para hacer una tabla.
// los titulos de la tabla estan alineados a la izquierda.
// los puntajes de los cursos estan alineados a la derecha.
//
// ---------------------------------------------
// |Course          |Students                  |
// ---------------------------------------------
// |C++             |                       100|
// ---------------------------------------------
// |JavaScript      |                        50|
// ---------------------------------------------

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << left << setw(15) << "Course" << setw(10) << "Students" << endl
         << setw(15) << "C++" << setw(10) << right << 100 << left << endl
         << setw(15) << "JavaScript" << setw(10) << right << 50 << left << endl;

    return 0;
