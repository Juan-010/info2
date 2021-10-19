#include <iostream>
#include "hora2.h"

using namespace std;

int main(){
	Hora h;

	cout << "La hora por defecto es: ";
	h.imprimir();
	
	h.establecerHora(13, 27, 6);
	cout << "\nLa hora despues de establecerHora es: ";
	h.imprimir();

	h.establecerHora(99, 99, 99);
	cout << "\nDespues de intentar establecer un valor invalido: ";
	h.imprimir();
	cout << endl;

	return 0;
}
