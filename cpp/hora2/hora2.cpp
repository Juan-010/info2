#include <iostream>
#include "hora2.h"
using namespace std;

Hora::Hora(){
	segundosDesdeMedianoche = 0;
}

void Hora::establecerHora(int h, int m, int s){
	h = (h >= 0 && h < 24) ? h : 0;
	m = (m >= 0 && m < 60) ? m : 0;
	s = (s >= 0 && s < 60) ? s : 0;
	segundosDesdeMedianoche = hmsASeg(h, m, s);
}

void Hora::imprimir(){
	int hora, minuto, segundo;
	int &rHora = hora, &rMinuto = minuto, &rSegundo = segundo;
	segAHms(rHora, rMinuto, rSegundo);
	cout << (hora < 10 ? "0" : "") << hora << ":" 
		<< (minuto < 10 ? "0" : "") << minuto << ":"
		<< (segundo < 10 ? "0" : "") << segundo;
}
void Hora::segAHms(int &h, int &m, int &s){
	h = m = s = 0;
	int i = segundosDesdeMedianoche;
	for (i ; i >= 3600; i -= 3600)
		h++;
	for (i ; i >= 60; i -= 60)
		m++;
	for (i ; i >= 1; i--)
		s++;
}
int Hora::hmsASeg(int h, int m, int s){
	return h*3600 + m*60 + s;
}
