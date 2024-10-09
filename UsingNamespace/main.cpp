// por ultimo vamos a dar los "namespaces"
// ----------------------------------------------------------------------------
// la directiva "using namespace":
// Los namespaces se usan para evitar conflicto entre código, generalmente en
// un equipo donde el código esta escrito por mas de un colaborador.
// a contiunación el código de ejemplo.

#include <iostream>
#include "utils/saludar.hpp"

/*
using namespace std;
using namespace mensaje;
 
no lo hacemos asi porque tambien podria haber una funcion saludar en el espacio std.
*/

// lo hacemos asi
using std::cout, std::cin;
using mensaje::saludar;
 
int main() {
    saludar("Ceci");
    saludar("Sol");
    saludar("Mosh");
    saludar("Lucy");
    saludar("Maria");
   
    return 0;
}
