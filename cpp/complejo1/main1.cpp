#include <iostream>
#include "complejo1.h"

int main(void){
	Complejo c1(2,3), c2(5,6);
	c1.suma(c2);
	c1.print();
	std::cout << std::endl;
	c1.resta(c2);
	c1.print();
	std::cout << std::endl;
	return 0;
}
