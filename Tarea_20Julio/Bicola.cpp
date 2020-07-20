#include "Bicola.h"

Bicola::Bicola()
{
	this->largo = 0;
	this->inicio = NULL;
	this->fin = NULL;
}

bool Bicola::pushInicio(int dato)
{
	Nodo* aux = new Nodo(dato);

	if (this->largo == 0) {
		setInicio(aux);
		setFinal(aux);
	}
	else {
		aux->setSiguiente(getInicio()); //Le colocamos el siguiente al nuevo nodo, q en este caso el inicio en ese momento
		aux->getSiguiente()->setAnterior(aux); //Obtenemos el siguiente del nuevo nodo y colocamos el anterior como el nuevo nodo
		setInicio(aux);
	}
	largo++;
	return true;
}

bool Bicola::popInicio()
{
	if (getInicio() == NULL) {
		return false;
	}
	else {
		Nodo* aux = getInicio();
		setInicio(aux->getSiguiente());
		delete aux;
		largo--;
		return true;
	}
}

bool Bicola::pushFinal(int dato)
{
	Nodo* aux = new Nodo(dato);
	Nodo* ant;

	if (this->largo == 0) {
		this->inicio = aux;
		this->fin = aux;
	}
	else {
		ant = getFinal(); //capturamos el nodo fin antes de ser remplazado
		getFinal()->setSiguiente(aux);
		setFinal(aux);
		getFinal()->setAnterior(ant);
	}
	largo++;
	return true;
}

bool Bicola::popFinal()
{
	if (getFinal() == NULL) {
		return false;
	}
	else {
		Nodo* aux = getFinal();
		setFinal(aux->getAnterior()); //se redefine el final
		delete aux;
		largo--;
		return true;
	}
}

void Bicola::setInicio(Nodo* pNodo)
{
	this->inicio = pNodo;
}

Nodo* Bicola::getInicio()
{
	return this->inicio;
}

void Bicola::setFinal(Nodo* pNodo)
{
	this->fin = pNodo;
}

Nodo* Bicola::getFinal()
{
	return this->fin;
}

int Bicola::getLargo()
{
	return this->largo;
}

string Bicola::imprimir()
{
	string rslt = "";
	if (getInicio() == NULL) {
		rslt = "Lista circular doble vacia";
	}
	else {
		Nodo* aux = getInicio();
		int contador = 1;

		//Recorre lista mientras que el nodo siguiente no sea NULL
		do {
			rslt += "Dato: " + to_string(contador) + " = " + to_string(aux->getDato()) + "\n";
			aux = aux->getSiguiente();
			contador++;
		} while (getLargo() >= contador);
	}
	return rslt;
}