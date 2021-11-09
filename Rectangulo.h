#pragma once
#include "Poligono.h"
class Rectangulo :
    public Poligono
{
public:
    int Base;
    int Altura;
    Rectangulo(int base, int altura);
    double calcularArea() override;
    double calcularPerimetro() override;
};

