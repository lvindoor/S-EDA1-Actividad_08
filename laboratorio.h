#ifndef LABORATORIO_H
#define LABORATORIO_H

#include "computadora.h"

class Laboratorio {
    Computadora computadoras[5];
    std::size_t cont;
public:
    Laboratorio();
    void agregarComputadora(const Computadora &c);
    void mostrar();
};

#endif