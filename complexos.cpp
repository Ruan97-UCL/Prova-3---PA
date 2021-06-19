#include <iostream>
#include <math.h>
#include <complex>
#include <iomanip>
#include "complexos.h"
using namespace std;

tComplexos c1, c2;

  void soma(tComplexos c1, tComplexos c2){
    tComplexos soma;
    soma.real = c1.real + c2.real;
    soma.imag = c1.imag + c2.imag;
    cout << "RESULTADO SOMA: " << soma.real << " +i" << soma.imag <<endl;
  }

  void sub(tComplexos c1, tComplexos c2){
    tComplexos sub;
    sub.real = c1.real - c2.real;
    sub.imag = c1.imag - c2.imag;
    cout << "RESULTADO SUBTRAÇÃO: " << sub.real << " +i" << sub.imag << endl;
  }
  
  tComplexos polar(tComplexos c){
      c.m = sqrt(pow(c.real,2)+pow(c.imag,2));
      c.a = atan(c.imag/c.real)*(180/M_PI);
      cout << "\n2- c dps do polar: (" << c.m << "< " << c.a << ") " << endl;
      cout << "2.1- (" << c.real << "+ i" << c.imag << ")" << endl;
      return c;
  }

  tComplexos retangular(tComplexos c){
    cout << "\n3- antes do retangulo  (" << c.m << "< " << c.a << ")" << endl;
    cout << "3.1- (" << c.real << " ," << c.imag << "i)" << endl << endl;
      c.real = (fabs(c.m)*(cos(c.a*0.0174533)));
      c.imag = (-fabs(c.m)*(sin(c.a*0.0174533)));
      cout << "\n4- [erro] c dps do ret (" << c.real << ", " << c.imag << ") ]"<< endl;
      return c;
  }

   void mult(tComplexos c1, tComplexos c2){
     tComplexos c3;
       cout << "1- c1 antes do mult ("<< c1.real << " ," << c1.imag << "i)" << "\n";
       cout << "1.1 - c2 antes do mult ("<< c2.real << " ," << c2.imag << "i)" << "\n"; 
       c1 = polar(c1);
       c2 = polar(c2);
       c3.m = (c1.m)*(c2.m); 
       c3.a = c1.a+c2.a;
       cout << "\nc3m e c3a " << c3.m << " <" << c3.a << endl;
       c3 = retangular(c3);
        cout << "\nc1: (" << c1.real << " ," << c1.imag << "i)" << endl;
        cout << "\nc2: (" << c2.real << " ," << c2.imag << "i)" << endl;
        cout<<fixed<<setprecision(2);
        cout << "5- RESULTADO MULTIPLICAÇÃO: (" << c3.real << " ," << c3.imag << "i)" << endl;  
   }

    void printa(tComplexos c1, tComplexos c2){
        soma(c1, c2);
        sub(c1, c2);
        mult(c1,c2);

    }