#include "Cuadrado.h"

Cuadrado::Cuadrado(int lado) {
	Lado = lado;
	figura = "Cuadrado";
}

double Cuadrado::calcularArea()
{
	return Lado*Lado;
}

double Cuadrado::calcularPerimetro()
{
	return Lado * 4;
}
