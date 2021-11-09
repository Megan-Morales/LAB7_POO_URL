#pragma once
#include "Poligono.h"
class Cuadrado :
    public Poligono
{
public:
    int Lado;
    Cuadrado(int lado);
    double calcularArea() override;
    double calcularPerimetro() override;
   /* void getColor();*/
};

