#ifndef LABORATORIO_H
#define LABORATORIO_H

#include "computadora.h"
#include <fstream>

using namespace std;

class Laboratorio {
    Computadora computadoras[5];
    std::size_t cont;
public:
    Laboratorio();
    void agregarComputadora(const Computadora &c);
    void mostrar();
    void respaldar();
    void respaldarTabla();
    void recuperar();

    /* Entrada | Asignación */
    friend Laboratorio& operator<<(Laboratorio &l, const Computadora &c) {
        l.agregarComputadora(c);
        return l;
    }
};

#endif