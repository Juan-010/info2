#include <iostream>
#include "complejo1.h"

// Class Complejo
Complejo::Complejo(double r, double i){
	real = r;
	imag = i;
}

void Complejo::suma(Complejo c){
	real += c.real;
	imag += c.imag;
}

void Complejo::resta(Complejo c){
	real -= c.real;
	imag -= c.imag;
}

void Complejo::print(){
	std::cout << "(" << real << ", " << imag << ")";
}
