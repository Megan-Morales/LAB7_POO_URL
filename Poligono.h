#pragma once
#include <string>
using namespace std;

class Poligono
{
protected:
	string figura;
	string color;
	int ID;
public:

	Poligono(string figura, string color, int ID) {
		this->figura = figura;
		this->color = color;
		this->ID = ID;
	}
	virtual double calcularArea() = 0;
	virtual double calcularPerimetro() = 0;

	string getColor() {	
		return this->color;
	}
	int id() {
		this->ID++;
	}
};

