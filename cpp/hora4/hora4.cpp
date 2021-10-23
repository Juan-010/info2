#include <iostream>
#include "hora4.h"
using namespace std;

Hora::Hora(int h, int m, int s){
	hora = h;
	minuto = m;
	segundo = s;
}

void Hora::establecerHora(int h, int m, int s){
	hora = (h >= 0 && h < 24) ? h : 0;
	minuto = (m >= 0 && m < 60) ? m : 0; 
	segundo = (s >= 0 && s < 60) ? s : 0; 
}

void Hora::imprimir() const {
	cout << (hora < 10 ? "0" : "") << hora << ":" 
		<< (minuto < 10 ? "0" : "") << minuto << ":"
		<< (segundo < 10 ? "0" : "") << segundo;
}

void Hora::establecerHora(int h){
	hora = (h >= 0 && h < 24) ? h : 0;
}


void Hora::establecerMinuto(int m){
	minuto = (m >= 0 && m < 60) ? m : 0; 
}

void Hora::establecerSegundo(int s){
	segundo = (s >= 0 && s < 60) ? s : 0; 
}

int Hora::obtenerHora() const{
	return hora;	
}

int Hora::obtenerMinuto() const{
	return minuto;
}

int Hora::obtenerSegundo() const{
	return segundo;
}

