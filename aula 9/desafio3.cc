#include <iostream>

using namespace std;

int main(){
    int fatorial;
    double soma = 1;
    cout << "Digite um numero inteiro positivo e calcularemos seu fatorial: \n";
    cin >> fatorial;
    
    if(fatorial == 0 || fatorial == 1 ){
        cout << " Fatorial igual a: 1 \n"; 
    }else{
        for(int j = fatorial; j >=1 ; j--)
        soma *= j;
        cout << "O resultado é: "<< soma;
    }
    
    
    return 0;
}