#include "ListaCircularDoubleLink.h"

ListaCircularDoubleLink::ListaCircularDoubleLink()
{
	this->inicio = NULL;
	this->fin = NULL;
	this->largo = 0;
}

bool ListaCircularDoubleLink::agregarAlInicio(int pDato)
{
	Nodo* tmpNodo = new Nodo(pDato);
	if (getInicio() == NULL) {
		setInicio(tmpNodo);
		setFinal(tmpNodo);
	}
	else {
		tmpNodo->setSiguiente(getInicio()); //Le colocamos el siguiente al nuevo nodo, q en este caso el inicio en ese momento
		tmpNodo->getSiguiente()->setAnterior(tmpNodo); //Obtenemos el siguiente del nuevo nodo y colocamos el anterior como el nuevo nodo
		setInicio(tmpNodo); //Redifinimos puntero de nodo inicio
		getInicio()->setAnterior(getFinal()); //Redifinos el anterior del inicio nuevo
		getFinal()->setSiguiente(getInicio()); // El siguiente del final es el nuevo nodo
	}
	largo++;
	return true;
}

Nodo* ListaCircularDoubleLink::getInicio()
{
	return this->inicio;
}

void ListaCircularDoubleLink::setInicio(Nodo* pNodo)
{
	this->inicio = pNodo;
}

Nodo* ListaCircularDoubleLink::getFinal()
{
	return this->fin;
}

void ListaCircularDoubleLink::setFinal(Nodo* pNodo)
{
	this->fin = pNodo;
}

int ListaCircularDoubleLink::getLargo()
{
	return this->largo;
}

void ListaCircularDoubleLink::setLargo(int pLargo)
{
	this->largo = pLargo;
}

string ListaCircularDoubleLink::imprimir()
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
		} while (getLargo()>=contador);
	}
	return rslt;
}

