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

void Laboratorio::respaldarTabla() {
    ofstream archivo("computadoras_tabla.txt");
    if(archivo.is_open()) {
        archivo << left;
        archivo << setw(20) << "Sistema Operativo";
        archivo << setw(10) << "RAM (GB)";
        archivo << setw(20) << "Nombre del Equipo";
        archivo << setw(16) << "Procesador";
        archivo << endl;
        for(size_t i=0;i<cont;i++) {
            Computadora &c = computadoras[i];
            archivo << c;
        }
    }
    archivo.close();
}

void Laboratorio::respaldar() {
    ofstream archivo("computadoras.txt");
    if(archivo.is_open()) {
        for(size_t i=0;i<cont;i++) {
            Computadora &c = computadoras[i];
            archivo << c.getSistemaOperativo() << endl;
            archivo << c.getRam() << endl;
            archivo << c.getNombreEquipo() << endl;
            archivo << c.getProcesador() << endl;
        }
    }
    archivo.close();
}

void Laboratorio::recuperar() {
    ifstream archivo("computadoras.txt");
    if(archivo.is_open()) {
        string tempString;
        int tempInt;
        Computadora c;

        while(true) {
            getline(archivo, tempString); // Sistema Operativo
            
            if(archivo.eof()) { // ¿Termino de leer?
                break; // cierra ciclo
            }

            c.setSistemaOperativo(tempString);

            getline(archivo, tempString); // Ram (GB)
            tempInt = stoi(tempString); // string to int -> stoi
            c.setRam(tempInt);

            getline(archivo,tempString); // Nombre del Equipo
            c.setNombreEquipo(tempString);

            getline(archivo,tempString); // Procesador
            c.setProcesador(tempString);

            agregarComputadora(c);
        }        
    }

    archivo.close();

}