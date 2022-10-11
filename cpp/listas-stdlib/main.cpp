#include <iostream>
#include <list>
#include "complejo.h"

int main(void) {

  std::list<Complejo> lista_complejos;

  Complejo c1(2,3);
  Complejo c2(4,6);
  Complejo c3(6,7);
  Complejo c4(8,9);

  lista_complejos.push_front(c1);
  lista_complejos.push_front(c2);
  lista_complejos.push_back(c3);
  lista_complejos.push_front(c4);

  std::cout << "Imprimir con for"<<std::endl;
  for(Complejo c : lista_complejos){
    std::cout<<c<<std::endl;
  }

  std::cout << "Imprimir con iterador"<<std::endl;
  std::list<Complejo>::iterator iterador_lista_complejos;

  for(iterador_lista_complejos = lista_complejos.begin();
      iterador_lista_complejos != lista_complejos.end();
      iterador_lista_complejos++){
    std::cout<< *iterador_lista_complejos << std::endl;
  }

  return 0;
}
