
#include <iostream>

using namespace std;

int main() 
{
    float nota1, nota2;
    int entrada;
    // entrada = 1;
    
    cout << "Deseja conferir sua média, digite 1 para sim e 2 para não: \n";
    cin >> entrada;
    
    
    
    
    if(entrada == 1){
    cout << "Informe a nota 1: "  << endl;
    cin >> nota1;
    cout << "Informe a nota 2: "  << endl;
    cin >> nota2;
    
    float media = (nota1 + nota2)/2;
    if(media < 2.5){
        cout << "Nota final D \n";
    }else if(media < 5){
        cout << "Nota final C \n";
    }else if(media < 7.5){
        cout << "Nota final C \n";
    }else{
        cout << "Nota final A \n";
    }
    }else {
        cout << "Programa encerrado \n";
    }
    
    // Comparações : 
    // igual == 
    // diferente !=
    // maior que >
    // menor que <
    // maior que ou igual >=
    // menor que ou igual <=
    
    
    // if(media >= 5){ if simples
    //   cout << "Aprovado com média: "<< media << endl;
    // }
    
    // if(media >= 5){ if com else
    //     cout << "Aprovado com média: "<< media << endl;
    // }else{
    //     cout << "Reprovado com média: "<< media << endl;
    // }
    
    // 0 até 2.5 D 
    // de 2.5 até 5 C 
    // de 5 até 7.5 B 
    // de 7.5 até 10 A 
    
    
    
    // if(media < 2.5){
    //     cout << "Nota final D \n";
    // }else if(media < 5){
    //     cout << "Nota final C \n";
    // }else if(media < 7.5){
    //     cout << "Nota final C \n";
    // }else{
    //     cout << "Nota final A \n";
    // }
    
    return 0;
}