#include <iostream>
#include "complejo2.h"

int main(void){
	Complejo c1(2,3), c2(5,6);

	suma(c1, c2).print();
	std::cout << std::endl;
	resta(c1, c2).print();
	std::cout << std::endl;
	return 0;
}
