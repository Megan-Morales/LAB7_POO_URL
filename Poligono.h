#pragma once
#include <string>
using namespace std;

class Poligono
{
protected:
	string figura;

public:
	virtual double calcularArea() = 0;
	virtual double calcularPerimetro() = 0;
	
};

