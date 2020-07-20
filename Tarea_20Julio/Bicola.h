#pragma once
#include "Nodo.h"
#include <stddef.h>
#include <string>
using namespace std;

class Bicola
{

private:
	int largo;
	Nodo* inicio;
	Nodo* fin;

public:

	Bicola();

	bool pushInicio(int dato);
	bool popInicio();
	bool pushFinal(int dato);
	bool popFinal();

	void setInicio(Nodo* pNodo);
	Nodo* getInicio();
	void setFinal(Nodo* pNodo);
	Nodo* getFinal();
	int getLargo();
	
	string imprimir();

};

