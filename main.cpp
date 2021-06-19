#include <iostream>
#include "complexos.h"

using namespace std;

int main() {
    tComplexos c1, c2 ;
    c1.real = -10;
    c1.imag = 5;
    c2.real = 3;
    c2.imag = -4;

    // cout << "insira parte real e imag do 1o numero: " << endl;
    // cin >> c1.real;
    // cin >> c1.imag;

    // cout << "insira parte real e imag do 2o numero: " << endl;
    // cin >> c2.real;
    // cin >> c2.imag;  

    printa(c1, c2);
  
}