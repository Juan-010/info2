#include <iostream>
#include "complejo4.h"

int main(void){
	Complejo c1(2,3), c2(5,6);
	
	std::cout << (c1+c2) << std::endl;
	
	c1+=c2;
	std::cout << c1 << std::endl;
	
	std::cout << (c1-c2) << std::endl;
	
	c1-=c2;
	std::cout << c1 << std::endl;
	return 0;
}
