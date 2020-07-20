#pragma once
class Nodo
{

private:
	int dato;
	Nodo* sgte; //Nodo siguiente
	Nodo* ant; //Nodo anterior

public:
	Nodo();
	Nodo(int pDato);

	//Getters and setters
	void setDato(int pDato);
	int getDato();
	void setSiguiente(Nodo* pNodo);
	Nodo* getSiguiente();
	void setAnterior(Nodo* pNodo);
	Nodo* getAnterior();

};


