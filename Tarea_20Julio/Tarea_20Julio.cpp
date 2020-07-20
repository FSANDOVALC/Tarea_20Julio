// Tarea_20Julio.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "ListaCircularDoubleLink.h"
#include "Bicola.h"

using namespace std;

int main()
{
	ListaCircularDoubleLink tmpLC;
	Bicola tmpBC;
	

	tmpLC.agregarAlInicio(50);
	tmpLC.agregarAlInicio(40);
	tmpLC.agregarAlInicio(30);
	tmpLC.agregarAlInicio(20);
	tmpLC.agregarAlInicio(10);

	//cout << tmpLC.getInicio()->getDato();
	//cout << tmpLC.getFinal()->getDato();
	cout << "Siguiente y anterior de Inicio: \n";
	cout << tmpLC.getInicio()->getSiguiente()->getDato() << endl;
	cout << tmpLC.getInicio()->getAnterior()->getDato() << endl;
	cout << "Siguiente y anterior de Final: \n";
	cout << tmpLC.getFinal()->getSiguiente()->getDato() << endl;
	cout << tmpLC.getFinal()->getAnterior()->getDato() << endl;

	cout << "Siguiente y anterior del Dato 2: \n";
	cout << tmpLC.getInicio()->getSiguiente()->getAnterior()->getDato() << endl;
	cout << tmpLC.getInicio()->getSiguiente()->getSiguiente()->getDato() << endl;

	cout << tmpLC.imprimir();


	cout << "Bicola: \n";
	tmpBC.pushInicio(1);
	tmpBC.pushInicio(2);
	tmpBC.pushInicio(3);
	tmpBC.pushFinal(4);
	tmpBC.pushFinal(5);
	tmpBC.pushFinal(6);

	cout << tmpBC.imprimir();

	cout << "Bicola despues de borrar al inicio y final: \n";

	tmpBC.popInicio();
	tmpBC.popFinal();
	cout << tmpBC.imprimir();
}

