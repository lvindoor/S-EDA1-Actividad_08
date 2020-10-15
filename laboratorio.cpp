#include "laboratorio.h"

Laboratorio::Laboratorio() {
    cont = 0;
}

void Laboratorio::agregarComputadora(const Computadora &c) {
    if(cont < 10) {
        computadoras[cont] = c;
        cont++;
    } else {
        cout << "Ya no hay computadoras" << endl;
    }
}

void Laboratorio::mostrar() {

    cout << left;
    cout << setw(20) << "Sistema Operativo";
    cout << setw(10) << "RAM (GB)";
    cout << setw(20) << "Nombre del Equipo";
    cout << setw(16) << "Procesador";
    cout << endl;
        
    for(size_t i=0;i<cont;i++) {
        Computadora &c = computadoras[i];
        cout << c;

        //cout << "Sistema Operativo  : " << c.getSistemaOperativo() << endl;
        //cout << "RAM (GB)           : " << c.getRam() << endl;
        //cout << "Nombre del Equipo  : " << c.getNombreEquipo() << endl;
        //cout << "Procesador         : " << c.getProcesador() << endl << endl;
    }
}