#include <iostream>
#include "hora3.h"
using namespace std;

Hora::Hora(){
	hora = 0;
	minuto = 0;
	segundo = 0;
}

void Hora::establecerHora(int h, int m, int s){
	hora = (h >= 0 && h < 24) ? h : 0;
	minuto = (m >= 0 && m < 60) ? m : 0; 
	segundo = (s >= 0 && s < 60) ? s : 0; 
}

void Hora::imprimir(){
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

int Hora::obtenerHora(){
	return hora;	
}

int Hora::obtenerMinuto(){
	return minuto;
}

int Hora::obtenerSegundo(){
	return segundo;
}

