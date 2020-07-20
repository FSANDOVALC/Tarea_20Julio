#pragma once
#include "Nodo.h"
#include <stddef.h>
#include <string>
using namespace std;

class ListaCircularDoubleLink
{
private:
	Nodo* inicio;
	Nodo* fin;
	int largo;

public:
	ListaCircularDoubleLink();
	bool agregarAlInicio(int pDato);
	//string recorrerLista();

	//Getter and setters
	Nodo* getInicio();
	void setInicio(Nodo* pNodo);
	Nodo* getFinal();
	void setFinal(Nodo* pNodo);
	int getLargo();
	void setLargo(int pLargo);

	string imprimir();
};



