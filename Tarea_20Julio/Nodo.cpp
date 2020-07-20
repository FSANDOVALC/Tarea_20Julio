#include "Nodo.h"
#include <stddef.h>

Nodo::Nodo()
{
    setDato(0);
    setSiguiente(NULL);
    setAnterior(NULL);
}

Nodo::Nodo(int pDato)
{
    this->dato = pDato;
    this->ant = NULL;
    this->sgte = NULL;
}

void Nodo::setDato(int pDato)
{
    this->dato = pDato;
}

int Nodo::getDato()
{
    return this->dato;
}

void Nodo::setSiguiente(Nodo* pNodo)
{
    this->sgte = pNodo;
}

Nodo* Nodo::getSiguiente()
{
    return this->sgte;
}

void Nodo::setAnterior(Nodo* pNodo)
{
    this->ant = pNodo;
}

Nodo* Nodo::getAnterior()
{
    return ant;
}
