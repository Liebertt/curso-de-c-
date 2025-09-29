
#include <iostream>

using namespace std;

int main()

{   
    
    int linha;
    int coluna;
    
    cout << "Digite as linhas e colunas de uma matriz \n";
    cout << "Digite o valor das linhas \n";
    cin >> linha;
    cout << "Digite o valor das colunas \n";
    cin >> coluna;
    
    int matriz1[linha][coluna];
    int matriz2[linha][coluna];
    int soma[linha][coluna];
    
    cout << endl;
    cout << "Digite os dados da primeira matriz \n";
    
    for(int i=0 ; i<linha; i++){
        for(int j=0; j<coluna; j++){
            
            cout << "Digite o valor da posição ["<<i<<"]["<<j<<"]: ";
            cin >> matriz1[i][j];
        }
    }
    
    cout << endl;
    cout << "Digite os dados da segunda matriz \n";
    for(int i=0 ; i<linha; i++){
        for(int j=0; j<coluna; j++){
            
            cout << "Digite o valor da posição ["<<i<<"]["<<j<<"]: ";
            cin >> matriz2[i][j];
        }
    }
    
    
    cout << "Matriz soma \n";
    
    for(int i=0 ; i<linha; i++){
        for(int j=0; j<coluna; j++){

            soma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
    
    // Exibição formatada
    cout << "\nSoma das matrizes:\n";
    for (int i = 0; i < linha; i++) {
        cout << (i == 0 ? "[[" : " [");
        for (int j = 0; j < coluna; j++) {
            cout << soma[i][j];
            if (j < coluna - 1) cout << ", ";
        }
        cout << (i < linha - 1 ? "]\n" : "]]");
    }
    
    
    

    return 0;
}