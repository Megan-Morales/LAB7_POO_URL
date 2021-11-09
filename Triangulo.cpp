#include "Triangulo.h"

Triangulo::Triangulo(int lado2, int lado1) {
	Lado2 = lado2;
	Lado1 = lado1;
	figura = "Triangulo";
}

double Triangulo::calcularArea()
{
	return (2 * Lado2)+ Lado1;
}

double Triangulo::calcularPerimetro()
{
	double a = sqrt((Lado2 * Lado2) - ((Lado1 * Lado1) / 4));
	return ((Lado1 * a) / 2);
}