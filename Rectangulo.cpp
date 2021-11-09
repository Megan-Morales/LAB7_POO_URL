#include "Rectangulo.h"

Rectangulo::Rectangulo(int base, int altura) {
	Base = base;
	Altura = altura;
	figura = "Rectangulo";
}

double Rectangulo::calcularArea()
{
	return Base*Altura;
}

double Rectangulo::calcularPerimetro()
{
	return (2 * Base )+( 2 * Altura);
}