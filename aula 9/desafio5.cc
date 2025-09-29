#include <iostream>

using namespace std;

int main(){
    
    float renda;
    int idade;
    cout << "Programa habitacional \n";
    cout << "Digite sua idade: \n";
    cin >> idade;
    cout << "Digite sua renda: \n";
    cin >> renda;
    
    if(idade > 21 && renda < 1200){
        cout << "Você pode participar do programa habitacional \n";
    }else{
        cout << "Você não pode participar do programa habitacional \n";
    }
    
    return 0;
}