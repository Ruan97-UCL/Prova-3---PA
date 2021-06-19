#include <iostream>
#define _USE_MATH_DEFINES

struct tComplexos{
  
  float real;
  float imag;
  float m;
  float a;

};

  void soma(tComplexos c1, tComplexos c2);

  void sub(tComplexos c1, tComplexos c2);

  tComplexos polar(tComplexos c);

  tComplexos retangular(tComplexos c);

  void mult(tComplexos c1, tComplexos c2);

  void div(tComplexos c1, tComplexos c2);

  void printa(tComplexos c1, tComplexos c2);

