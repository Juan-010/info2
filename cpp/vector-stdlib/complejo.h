#ifndef COMPLEJO_H
#define COMPLEJO_H
#include <iostream>
class Complejo{
  friend std::ostream &operator<<(std::ostream &, Complejo);
  public:
  Complejo(double = 0.0, double = 0.0);
  Complejo operator+(Complejo);
  Complejo operator-(Complejo);
  void operator+=(Complejo);
  void operator-=(Complejo);
  private:
  double real;
  double imag;
};

std::ostream &operator<<(std::ostream &, Complejo);
#endif
