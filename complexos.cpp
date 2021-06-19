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
    complex <float> myComplex (c.real, c.imag);
      //c.m = sqrt(pow(c.real,2)+pow(c.imag,2));
      c.m = abs(myComplex);
      c.a = arg(myComplex);
      //c.a = atan((c.imag/c.real));
      // cout << "\n2- c dps do polar: (" << c.m << "<a " << c.a*57.2958 << ") " << endl;
      // cout << "2.1- (" << c.real << ", " << c.imag << "i)" << endl;
      return c;
  }

  tComplexos retangular(tComplexos c){
    // cout << "\n3- antes do retangulo  (" << c.m << "<a " << c.a*57.2958 << ")" << endl;
    // cout << "3.1- (" << c.real << " ," << c.imag << "i)" << endl << endl;

      c.real = fabs(c.m)*(cos(c.a));
      c.imag = fabs(c.m)*(sin(c.a));
      // cout << "\n4- [erro] c dps do ret (" << c.real << ", " << c.imag << ") ]"<< endl;
      return c;
  }

   void mult(tComplexos c1, tComplexos c2){
     tComplexos c3;
      //  cout << "\n1- c1 antes do mult ("<< c1.real << " ," << c1.imag << "i)" << "\n";
      //  cout << "1.1 - c2 antes do mult ("<< c2.real << " ," << c2.imag << "i)" << "\n";

       c1 = polar(c1);
       c2 = polar(c2);

      //  cout << "\n2.2- c1m e c1a " << c1.m << " <a" << c1.a*57.2958 << endl;
      //  cout << "\n2.3- c2m e c2a " << c2.m << " <a" << c2.a*57.2958 << endl; 

       c3.m = (c1.m)*(c2.m); 
       c3.a = (c1.a)+(c2.a);

      //  cout << "\n2.4- c3m e c3a " << c3.m << " <a" << c3.a*57.2958 << endl;

       c3 = retangular(c3);

        // cout << "\nc1: (" << c1.real << " ," << c1.imag << "i)" << endl;
        // cout << "\nc2: (" << c2.real << " ," << c2.imag << "i)" << endl;
        cout<<fixed<<setprecision(2);
        cout << "5- RESULTADO MULTIPLICAÇÃO: (" << c3.real << " ," << c3.imag << "i)" << endl;  
   }

  void div(tComplexos c1, tComplexos c2){
     tComplexos c3;

      c1 = polar(c1);
      c2 = polar(c2);

      c3.m = (c1.m)/(c2.m); 
      c3.a = (c1.a)-(c2.a);

      c3 = retangular(c3);

      cout<<fixed<<setprecision(2);
      cout << "5- RESULTADO DIVISÃO: (" << c3.real << " ," << c3.imag << "i)" << endl;      
  }
    void printa(tComplexos c1, tComplexos c2){
        soma(c1, c2);
        sub(c1, c2);
        mult(c1,c2);
        div(c1,c2);

    }