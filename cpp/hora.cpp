#include <iostream>
using namespace std;


Hora::Hora(){
	hora = minuto = segundo = 0;
}

void Hora::setHora(int h, int m, int s){
	hora = (h >= 0 && h < 24) ? h : 0;
	minuto = (m >= 0 && m < 60) ? m : 0;
	segundo = (s >= 0 && s < 60) ? s : 0;
}

void Hora::printMilitar(){
	cout << (hora < 10 ? "0" : "") << hora << ":" 
		<< (minuto < 10 ? "0" : "") << minuto << ":" 
		<< (segundo < 10 ? "0" : "") << segundo;
}

void Hora::printEstandar(){
	cout << ((hora == 0 | hora == 12) ? 12 : hora % 12) << ":" 
		<< (minuto < 10 ? "0" : "") << minuto << ":" 
		<< (segundo < 10 ? "0" : "") << segundo 
		<< (hora < 12 ? " AM" : " PM");	
}

int main(){
	Hora h;
	h.setHora(17,25,17);
	
	cout << "La hora (Militar) es: ";
	h.printMilitar();
	cout << endl;

	cout << "La hora (Estandar) es : ";
	h.printEstandar();
	cout << endl;
	return 0;
}
