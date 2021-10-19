#ifndef HORA2_H
#define HORA2_H

class Hora{
	public:
		Hora(); // Constructor
		void establecerHora(int, int, int);
		void imprimir(); // Formato: 13:15:00
	
	private:
		void segAHms(int &, int &, int &);
		int hmsASeg(int, int, int);
		int segundosDesdeMedianoche;
};

#endif
