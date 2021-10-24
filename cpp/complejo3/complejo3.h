#ifndef COMPLEJO3_H
#define COMPLEJO3_H
class Complejo{
	public:
		Complejo(double = 0.0, double = 0.0);
		Complejo operator+(Complejo);
		Complejo operator-(Complejo);
		void operator+=(Complejo);
		void operator-=(Complejo);
		void print();
	private:
		double real;
		double imag;
};
#endif
