#include <iostream>

using namespace std;

int main (){
    
    int var1;
    var1 = 3;
    
    int* pont1;
    pont1 = &var1;
    
    *pont1 = 9;
    
    // *pont1 mostra o valor que está no endereço apontado
    // pont1 mostra o endereço que o ponteiro aponta
    
    cout << "Valor da variável acessada pelo nome: "<< var1 << endl;
    cout << "\n ";
    cout << "Valor apontado " << *pont1 << endl;
    cout << "\n ";
    cout << "Endereço da variável apontada: "<< pont1 << endl;
    cout << "\n ";
    cout << "Endereço da váriavel usando &var1 " << &var1 << endl;
    cout << "\n ";
    cout << "Endereço onde está o ponteiro: "<< &pont1 << endl;
    
    int var2; // receba o valor do var1
    cout << "\n ";
    var2 = *pont1; // var2 recebe o valor apontado por pont1
    cout << var2;
        
    return 0;
}