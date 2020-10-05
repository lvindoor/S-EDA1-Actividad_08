#include <iostream>
#include "laboratorio.h"

using namespace std;

int main() {
    /* Metodo Parametrizado */
    Computadora c_01 = Computadora("Windows 10", 8, "Alejandro Garcia", "Core i7");
    
    /* Metodos de acceso */
    Computadora c_02;
    c_02.setSistemaOperativo("Ubuntu 18.04");
    c_02.setRam(4);
    c_02.setNombreEquipo("Ivindoor");
    c_02.setProcesador("Ryzen Pro 7");
    
    /* Agregar y Mostrar */
    Laboratorio lab;
    lab.agregarComputadora(c_01);
    lab.agregarComputadora(c_02);
    lab.mostrar();
    
    return 0;
}
