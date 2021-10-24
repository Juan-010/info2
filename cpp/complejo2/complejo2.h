#ifndef COMPLEJO2_H
#define COMPLEJO2_H
class Complejo{
	public:
		Complejo(double = 0.0, double = 0.0);
		void print();

		double getRe();
		double getIm();
	private:
		double real;
		double imag;
};

Complejo suma(Complejo, Complejo);
Complejo resta(Complejo, Complejo);
#endif
