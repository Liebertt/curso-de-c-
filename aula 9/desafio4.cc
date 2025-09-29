// resolver sem usar math.h
#include <iostream>

using namespace std;

int main(){
     int E;
     float B;
     float pot = 1;
     
     int iniciar_parar;
     do{
         cout << "Vamos calcular uma potência \n";
         cout << "Digite o valor da base (um número real): \n";
         cin >> B;
         cout << "Digite o valor do expoente (um número natura): \n";
         cin >> E;
         if(E != 0 && B != 0){
             for(int j = 1; j <= E; j++)
             pot *= B;
             cout << "O valor da potência é: "<< pot << endl;
         }else if(E == 0){
             pot = 0;
             cout << "O valor da potência é: "<< pot << endl;
         }else
         {cout << "Indeterminação \n";
         }
         
         pot = 1;
         cout << "Deseja calcular outro valor, digite 1 para sim e 0 para não \n";
         cin >> iniciar_parar;
         
     }while(iniciar_parar == 1);
     
     cout << "Programa encerrado";
}