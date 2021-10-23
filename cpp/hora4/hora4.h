#ifndef HORA4_H
#define HORA4_H

class Hora{
	public:
		Hora(int h = 0, int m = 0, int s = 0); // Constructor
		void establecerHora(int, int, int);
		void imprimir() const; // Formato: 13:15:00

		void establecerHora(int);
		void establecerMinuto(int);
		void establecerSegundo(int);

		int obtenerHora() const;
		int obtenerMinuto() const;
		int obtenerSegundo() const;
	
	private:
		int hora; // 0 - 23
		int minuto; // 0 - 59
		int segundo; // 0 - 59
};

#endif
