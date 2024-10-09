// Organizando en diferentes archivos
// ----------------------------------------------------------------------------
// Las funciones tambien se organizan en diferentes archivos, la definicion
// de funcionas va en el archivo de extension (.cpp), mientras que los archivos
// de cabecera de extencion (.hpp) son solo para declaraciones.

#include <iostream>
#include "utils/saludar.hpp"

using namespace std;

int main() {
    saludar("Ceci");
   
    return 0;
}
