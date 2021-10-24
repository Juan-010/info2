#include <iostream>
#include "complejo4.h"
// Class Complejo
Complejo::Complejo(double r, double i){
	real = r;
	imag = i;
}

Complejo Complejo::operator+(Complejo op2){
	double preal = real + op2.real;
	double pimag = imag + op2.imag;
	Complejo resultado(preal, pimag);
	return resultado;
}

Complejo Complejo::operator-(Complejo op2){
	double preal = real - op2.real;
	double pimag = imag - op2.imag;
	Complejo resultado(preal, pimag);
	return resultado;
}

void Complejo::operator+=(Complejo op2){
	real += op2.real;
	imag += op2.imag;
}

void Complejo::operator-=(Complejo op2){
	real -= op2.real;
	imag -= op2.imag;
}
std::ostream &operator<<(std::ostream & out, Complejo c1){
  out << "(" << c1.real << ", " << c1.imag << ")";
  return out;
}

