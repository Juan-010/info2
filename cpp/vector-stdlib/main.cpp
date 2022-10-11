#include <iostream>
#include <vector>
#include "complejo.h"

int main(void) {

  std::vector<Complejo> vector_complejos;

  Complejo c1(2,3);
  Complejo c2(4,6);
  Complejo c3(6,7);
  Complejo c4(8,9);

  vector_complejos.push_back(c1);
  vector_complejos.push_back(c2);
  vector_complejos.push_back(c3);

  std::cout << "Imprimir con for"<<std::endl;
  for(Complejo c : vector_complejos){
    std::cout<<c<<std::endl;
  }

  std::cout << "Inserto un elemento en la segunda posición"<<std::endl;
  vector_complejos.insert(vector_complejos.begin() + 1, c4);

  std::cout << "Imprimir con iterador"<<std::endl;
  std::vector<Complejo>::iterator iterador_vector_complejos;

  for(iterador_vector_complejos = vector_complejos.begin();
      iterador_vector_complejos != vector_complejos.end();
      iterador_vector_complejos++){
    std::cout<< *iterador_vector_complejos << std::endl;
  }

  std::cout << "Remover elemento del final"<<std::endl;
  vector_complejos.pop_back();

  for(Complejo c : vector_complejos){
    std::cout<<c<<std::endl;
  }

  std::cout << "Remover segundo elemento"<<std::endl;
  iterador_vector_complejos = vector_complejos.begin();
  iterador_vector_complejos++; // Incremento el contador
  vector_complejos.erase(iterador_vector_complejos);

  for(Complejo c : vector_complejos){
    std::cout<<c<<std::endl;
  }


  return 0;
}
