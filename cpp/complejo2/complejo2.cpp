#include <iostream>
#include "complejo2.h"

// Class Complejo
Complejo::Complejo(double r, double i){
	real = r;
	imag = i;
}

void Complejo::print(){
	std::cout << "(" << real << ", " << imag << ")";
}

double Complejo::getRe(){
	return real;
}
double Complejo::getIm(){
	return imag;
}

// Functions

Complejo suma(Complejo c1, Complejo c2){
	double pRe = c1.getRe(), pIm = c1.getIm();
	pRe += c2.getRe();
	pIm += c2.getIm();

	Complejo retVal(pRe, pIm);
	return retVal;
}
Complejo resta(Complejo c1, Complejo c2){
	double pRe = c1.getRe(), pIm = c1.getIm();
	pRe -= c2.getRe();
	pIm -= c2.getIm();

	Complejo retVal(pRe, pIm);
	return retVal;
}
