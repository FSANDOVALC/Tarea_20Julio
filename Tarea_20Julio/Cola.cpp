#include "Cola.h"

Cola::Cola()
{
	this->delante = NULL;
	this->atras = NULL;
}

void Cola::encolar(int dato)
{
	Nodo* aux = new Nodo(dato);

	if (this->delante==NULL) {
		aux->setSiguiente(this->delante);
		this->delante = aux;
		this->atras = aux;
	}
	else {
		this->delante = aux;
		aux->setSiguiente(this->delante);
	}

}
