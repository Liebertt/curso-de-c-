
#include <iostream>

using namespace std;

int main()
{
    float familias[5];
    float soma;
    float media = 5;
    
    cout << " Digite o valor gasto por cada uma das 5 familias " << endl;
    for(int i = 0; i <5; i++ ){
        cout << "Digite o valor da familia "<< i+1<<endl;
        cin >> familias[i];
        soma +=familias[i];
        
        
    }
    media = soma/media;
    for(int i = 0; i <5; i++){
        int f = i + 1;
        if(media == familias[i]){
            
            cout << "Dentro da media - familia " << f << endl;
        }else if(media > familias[i]){
            cout << "Abaixo da media - familia " << f << endl;
        }else{
            cout << "Acima da media - familia " << f << endl;
        }
    }
    cout << "[ ";
    for(int j = 0; j < 5; j++){
        if(j<4){ 
        cout << "Familia "<< j+1<<"-> "<<familias[j]<<", ";
        }else{
        cout << "Familia "<< j+1<<"-> "<<familias[j]<<" ";    
        }
    }
    cout << " ]";

    return 0;
}