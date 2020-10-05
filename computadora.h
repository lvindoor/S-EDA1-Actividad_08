#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include <iostream>

class Computadora {
private:    
    std::string sistemaOperativo;
    int ram;
    std::string nombreEquipo;
    std::string procesador;
public:
    Computadora();
    Computadora(const std::string sistemaOperativo,
             const int ram,
             const std::string nombreEquipo,
             const std::string procesador);
    
    /* Getters */
    std::string getSistemaOperativo();
    int getRam();
    std::string getNombreEquipo();
    std::string getProcesador();

    /* Setters */
    void setSistemaOperativo(const std::string &so);
    void setRam(const int &r);
    void setNombreEquipo(const std::string &ne);
    void setProcesador(const std::string &p);
};

#endif