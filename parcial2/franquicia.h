// Sanchez Serantes, Juan Ignacio
// Legajo 86162
// Curso 2R1
// SEGUNDO PARCIAL DE INFORMATICA II 2021
#ifndef FRANQUICIA_H
#define FRANQUICIA_H
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
int menu();
#endif
