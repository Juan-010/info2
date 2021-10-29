// Sanchez Serantes, Juan Ignacio
// Legajo 86162
// Curso 2R1
// SEGUNDO PARCIAL DE INFORMATICA II 2021
#include <iostream>
#include "franquicia.h"
#include <iomanip>
using namespace std;

Franquicia::Franquicia(int m1, int m2, int m3, int m4, int m5, int m6){
	menu[0] = m1;
	menu[1] = m2;
	menu[2] = m3;
	menu[3] = m4;
	menu[4] = m5;
	menu[5] = m6;
}		
void Franquicia::mostrar(){
	for(int i = 0; i < 6; i++)
		cout << setw(6) << std::left<< menu[i] << "\t";	
}
void Franquicia::setMenu(int valor, int nmenu){
	menu[nmenu - 1] = valor;
}
int Franquicia::getMenu(int nmenu){
	if(nmenu <= 6 && nmenu > 0)
		return menu[nmenu - 1];
	else
		return 0;
}
int Franquicia::getBest(int &cant){
	int best = 1;
	int last = 0;
	for(int i = 0; i < 6; i++)
		if(menu[i] > last){
			last = menu[i];
			best = i + 1;
	}
	cant = last;
	return best;
}
int Franquicia::isSet(){
	int set = 0;
	for (int i = 0; i < 6; i++) {
		set = (menu[i] == -1) ? set : 1;
	}
	return set;
}

int menu(){
	cout << "Menu" << endl;
	cout << "1. Añadir Franquicia" << endl;
	cout << "2. Ver tabla" << endl;
	cout << "3. Dar de baja" << endl;
	cout << "4. Salir" << endl;
	cout << "Su eleccion: ";
	int choice;
	cin >> choice;
	return choice;
}

