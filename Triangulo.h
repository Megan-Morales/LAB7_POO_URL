#pragma once
#include "Poligono.h"
class Triangulo :
    public Poligono
{
public:
    int Lado2;
    int Lado1;
    Triangulo(int lado2, int lado1);
    double calcularArea() override;
    double calcularPerimetro() override;
};

