#ifndef COMPLEJO1_H
#define COMPLEJO1_H
class Complejo{
	public:
		Complejo(double = 0.0, double = 0.0);
		void suma(Complejo);
		void resta(Complejo);
		void print();
	private:
		double real;
		double imag;
};
#endif
