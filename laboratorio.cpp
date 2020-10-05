#include "laboratorio.h"

using namespace std;

Laboratorio::Laboratorio() {
    cont = 0;
}

void Laboratorio::agregarComputadora(const Computadora &c) {
    if(cont < 5) {
        computadoras[cont] = c;
        cont++;
    } else {
        cout << "Ya no hay computadoras" << endl;
    }
}

void Laboratorio::mostrar() {
    for(size_t i=0;i<cont;i++) {
        Computadora &c = computadoras[i];
        cout << "Sistema Operativo  : " << c.getSistemaOperativo() << endl;
        cout << "RAM (GB)           : " << c.getRam() << endl;
        cout << "Nombre del Equipo  : " << c.getNombreEquipo() << endl;
        cout << "Procesador         : " << c.getProcesador() << endl << endl;
    }
}