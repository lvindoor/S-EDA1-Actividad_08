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

    /* Metodo de Sobrecarga */
    cout << "Agrega una Computadora" << endl;
    Computadora c_03;
    cin >> c_03;
    
    cout << endl << "Agregaste los sig. Datos :" << endl;
    cout << c_03;

    /* Agregar y Mostrar */
    Laboratorio lab;
    lab.agregarComputadora(c_01);
    lab.agregarComputadora(c_02);
    lab.agregarComputadora(c_03);
    cout << endl << "Estas son todas tus Computadoras :" << endl;
    lab.mostrar();
    
    return 0;
}
