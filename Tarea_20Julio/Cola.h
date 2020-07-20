#include "Nodo.h"
#include <stddef.h>

class Cola
{

private:
	Nodo* delante;
	Nodo* atras;

public:

	Cola();

	void encolar(int dato);

};

