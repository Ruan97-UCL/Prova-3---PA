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
    cout << "1-RESULTADO SOMA: (" << soma.real << " ,"  << soma.imag << "i)" <<endl;
  }

  void sub(tComplexos c1, tComplexos c2){
    tComplexos sub;
    sub.real = c1.real - c2.real;
    sub.imag = c1.imag - c2.imag;
    cout << "2-RESULTADO SUBTRAÇÃO: (" << sub.real << " ," << sub.imag << "i)" << endl;
  }
  
  tComplexos polar(tComplexos c){
    complex <float> myComplex (c.real, c.imag);
      
      c.m = abs(myComplex);
      c.a = arg(myComplex);
     
      return c;
  }

  tComplexos retangular(tComplexos c){
    
      c.real = fabs(c.m)*(cos(c.a));
      c.imag = fabs(c.m)*(sin(c.a));
      
      return c;
  }

   void mult(tComplexos c1, tComplexos c2){
     tComplexos c3;
      
       c1 = polar(c1);
       c2 = polar(c2);

       c3.m = (c1.m)*(c2.m); 
       c3.a = (c1.a)+(c2.a);

       c3 = retangular(c3);

        cout<<fixed<<setprecision(2);
        cout << "3-RESULTADO MULTIPLICAÇÃO: (" << c3.real << " ," << c3.imag << "i)" << endl;  
   }

  void div(tComplexos c1, tComplexos c2){
     tComplexos c3;

      c1 = polar(c1);
      c2 = polar(c2);

      c3.m = (c1.m)/(c2.m); 
      c3.a = (c1.a)-(c2.a);

      c3 = retangular(c3);

      cout<<fixed<<setprecision(2);
      cout << "4-RESULTADO DIVISÃO: (" << c3.real << " ," << c3.imag << "i)" << endl;      
  }

    void printa(tComplexos c1, tComplexos c2){

        soma(c1, c2);
        sub(c1, c2);
        mult(c1,c2);
        div(c1,c2);
       
    }