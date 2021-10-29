#include <iostream>
#include <iomanip>
#define TAM 100
using namespace std;

class Franquicia{
	public: 
		Franquicia(int m1 = -1, int m2 = -1, int m3 = -1, int m4 = -1, int m5 = -1, int m6 = -1);
		void mostrar();
		void setMenu(int, int);
		int getMenu(int);
		int getBest(int &);
		int isSet();
	private:
		int menu[6];
};

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
int main(){
	Franquicia tabla[TAM];
	int lastF = -1;
	int mostSold, index, mostQant;
	int tmpQant, indMost;
	int &refTmp = tmpQant;
	while(1){
		switch(menu()){
			case 1:
				cout << "Ingrese las cantidades pedidas de los 6 menues en orden: ";
				int c1, c2, c3, c4, c5, c6;
				cin >> c1 >> c2 >> c3 >> c4 >> c5 >> c6; 
				tabla[++lastF] = Franquicia(c1,c2,c3,c4,c5,c6);

				break;
			case 2:
				cout << setfill(' ') << setw(10) << "Franquicia\tMenu 1\tMenu 2\tMenu 3\tMenu 4\tMenu 5\tMenu 6" << endl;
				for(int i = 0; i <= lastF; i++){
					if(tabla[i].isSet()){
						cout << setw(10) << std::left << i+1 << "\t";
						tabla[i].mostrar();
						cout << endl;
					}
				}	
				
				mostSold = index = mostQant = 0;
				for(int i = 0; i <= lastF; i++){
					indMost = tabla[i].getBest(refTmp);
					if(tmpQant > mostQant){
						mostQant = tmpQant;
						mostSold = indMost;
						index = i + 1;
					}
				}

				cout << "El menu mas pedido es el Menu " << mostSold << " con " << mostQant << " unidades pedidas por la franquicia " << index << endl;
				break;
			
			case 3:
				cout << "Ingrese el indice de la franquicia a dar de baja: ";
				int baja;
				cin >> baja;
				tabla[baja - 1] = Franquicia(-1, -1, -1, -1, -1, -1);
				break;
			case 4:
				return 0;
		}	
	}
}
