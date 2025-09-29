#include <iostream>

using namespace std;

int main(){
    
    int vet[4]; // um jeito de declarar 
    
    vet[0]=5;
    vet[1]=10;
    
    int vet1[4] = {1,2,3,4}; // os outros dois vão ser zero
    int vet2[] = {3,4}; // sem declarar o tamanho
    
    cout << vet[0] << endl;
    cout << vet[1] << endl;
    cout << vet[2] << endl; // exibe algum lixo
    cout << vet[3] << endl; // exibe algum lixo
    cout << "###################################" << endl; 
    cout << vet1[0] << endl;
    cout << vet1[1] << endl;
    cout << vet1[2] << endl; // exibe algum lixo
    cout << vet1[3] << endl; // exibe algum lixo
    cout << "###################################" << endl; 
    cout << vet2[0] << endl;
    cout << vet2[1] << endl;
    cout << vet2[3] << endl; // exibe algum lixo
    cout << "###################################" << endl;
    
    for(int i=0; i <=3; i++){
        cout << vet1[i] << endl;
    }
    cout << "###################################" << endl;
    int x = sizeof(vet1)/sizeof(int); // o tamanho do vetor
    
    cout << x << endl;
    
     int tamanho;
    
    cout << "Digte o tamanho do vetor " << endl;
    cin >> tamanho;
    int * vetor = new int[tamanho]; 
    
    for(int i = 0; i < tamanho ; i++){
        cout << "Digite valor do "<<i+1<<"º elemento do vetor" << endl;
        cin >> vetor[i];
    }
    cout <<"[ ";
    for(int j=0; j<tamanho; j++){
        if((j+1)==tamanho){ 
        cout << vetor[j] << " ";
        }else{
        cout << vetor[j] << " , ";   
        }
    }
    cout << "]" << endl;
    
    delete [] vetor; //deleta o vetor
    
    return 0;
}