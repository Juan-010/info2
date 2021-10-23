#include <iostream>
#include "hora4.h"

using namespace std;

int main(){
 	Hora h;
	
	cout << "La hora por defecto es: ";
	
	h.imprimir();
	h.establecerHora(13, 27, 6);
	cout << "\nLa hora despues de establecerHora es: ";
	h.imprimir();
	cout << "\nHora: " << h.obtenerHora() << endl;
	cout << "Minuto: " << h.obtenerMinuto() << endl;
	cout << "Segundo: " << h.obtenerSegundo() << endl;
	
	h.establecerHora(99);
	h.establecerMinuto(99);
	h.establecerSegundo(99);
	cout << "Despues de intentar establecer un valor invalido: ";
	h.imprimir();
	cout << endl;

	return 0;
}
