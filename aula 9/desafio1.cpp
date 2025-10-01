// Aula 9 desafio 1

#include <iostream>
#include <math.h>
using namespace std;

float calcular(float a){
  float resultado = pow(a, 2)+ 3*a + 5;
  return resultado;
}

int main() 

{   float x; 
    cout << "Digite o numero para calculat a f(a) = x^2 + 3x + 5 \n ";
    cin >> x;
    float res = calcular(x);
    cout << "O resulta da função é: "<< res;
    
    
    return 0;
} 